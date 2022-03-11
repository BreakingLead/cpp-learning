#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class HWTest : public olc::PixelGameEngine {

private:
  float fBatX = int(ScreenWidth() / 2);
  float fBatY = ScreenHeight() - 20;
  float fBatWidth = 40.0;
  float fBatSpeed = 40.0f;
  float fBallRadius=5.0f;

  olc::vf2d vBall = {200.0f, 200.0f};

public:
  HWTest() { sAppName = "Breaking_Lead's Test"; }

public:
  bool OnUserCreate() override {
    // Called once at the start, so create things here
    return true;
  }

  bool OnUserUpdate(float fElapsedTime) override {
 // Handle User Input
		if (GetKey(olc::Key::LEFT).bHeld) fBatX -= fBatSpeed*fElapsedTime;
		if (GetKey(olc::Key::RIGHT).bHeld) fBatX += fBatSpeed*fElapsedTime;

		if (fBatX < 11.0f) fBatX = 11.0f;
		if (fBatX + fBatWidth > float(ScreenWidth()) - 10.0f) fBatX = float(ScreenWidth()) - 10.0f - fBatWidth;

		// Cheat! Moving The Ball With Mouse
		if (GetMouse(0).bHeld)
		{
			vBall = { float(GetMouseX()), float(GetMouseY()) };
		}

		if (GetMouseWheel() > 0) fBallRadius += 1.0f;
		if (GetMouseWheel() < 0) fBallRadius -= 1.0f;
		if (fBallRadius < 5.0f) fBallRadius = 5.0f;

		// Erase previous frame
		Clear(olc::DARK_BLUE);

		// Draw Boundary
		DrawLine(10, 10, ScreenWidth() - 10, 10, olc::YELLOW);
		DrawLine(10, 10, 10, ScreenHeight() - 10, olc::YELLOW);
		DrawLine(ScreenWidth() - 10, 10, ScreenWidth() - 10, ScreenHeight() - 10, olc::YELLOW);

		// Draw Bat
		FillRect(int(fBatX), ScreenHeight() - 20, int(fBatWidth), 10, olc::GREEN);

		// Draw Ball
		FillCircle(vBall, int(fBallRadius), olc::CYAN);
		return true;
  }
};

int main() {
  HWTest demo;
  if (demo.Construct(256, 256, 4, 4))
    demo.Start();
  return 0;
}
