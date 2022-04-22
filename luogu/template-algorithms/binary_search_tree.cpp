#include <cstdio>

using namespace std;
class Node {
public:
  int val, left, right, size, num;
  Node(int _val, int _left, int _right, int _size) {
    val = _val;
    left = _left;
    right = _right;
    size = _size;
    num = 1;
  }
};

class BinaryTree {

private:
  Node tree[5000];
  int length = 7;

  void update(int index) {
    tree[index].size = tree[tree[index].left].size +
                       tree[tree[index].right].size + tree[index].num;
  }


  void insert(int val) {}

public:

  BinaryTree() {
    for (int i = 1; i <= length; i++)
      tree[i](1, 1, 1, 1, 1);
    tree[1].val = 15;
    tree[2].val = 7;
    tree[3].val = 24;
  }

  int findIndex(int numx, int index = 1) {
    if (numx < tree[index].val) {
      return findIndex(numx, tree[tree[index].left].val);
    }
    if (numx > tree[index].val) {
      return findIndex(numx, tree[tree[index].right].val);
    }
    return tree[index].val;
  }
};

int main() {
  BinaryTree bt;
  return 0;
}
