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
};

typedef node*  nodeptr;

nodeptr find_end(){
    nodeptr now=head;
    while(now.next != NULL){
        now=now.next;
    }
}


nodeptr head=NULL;


nodeptr add_node(){
    nodeptr np = (nodeptr) malloc(sizeof(node));
    np=NULL;
    nodeptr raw=find_end();
    raw->next=np;
    return np;
}


int main() {
    cout<<find_end();
    return 0;
}
