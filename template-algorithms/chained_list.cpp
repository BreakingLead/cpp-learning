#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#define MAXN 1005
using namespace std;
int n,a[MAXN];


struct node{
    int data;
    node * next;
    node(){
        data=0;
        next=NULL;
    }
};

typedef node*  nodeptr;

nodeptr head=NULL;

void init(){
    node newnode;
    head = &newnode;
}

void insert_node(nodeptr raw,node new){
    nodeptr p =raw;
    raw->next = &new;
    new.next=*p;
}

void add_node(node new){

}

int main() {
    init();
    nodeptr p=(nodeptr)malloc(sizeof(node));
    p->data=2;
    head=p;
    nodeptr q=(nodeptr)malloc(sizeof(node));
    q->data=3;
    p->next=q;

    return 0;
}
