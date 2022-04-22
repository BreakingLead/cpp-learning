#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct stu {
  char name[10];
  int chinese;
  int math;
  int english;
  int score;
};
int main() {
  int n;
  cin>>n;
  stu stus[1005];
  stu big;
  big.score = -1;
  for (int i = 1; i <= n; i++) {
    scanf("%s %d %d %d", stus[i].name, &stus[i].chinese, &stus[i].math,
          &stus[i].english);
    stus[i].score = stus[i].chinese + stus[i].english + stus[i].math;

    if (big.score < stus[i].score) {
      big = stus[i];
    }
  }
  printf("%s %d %d %d\n", big.name, big.chinese, big.math, big.english);
  return 0;
}
