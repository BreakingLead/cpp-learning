#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

//源结构体
struct __node{
    int val;
    struct __node *next;
};

//定义节点
typedef struct __node Node;
//定义指向节点的指针
typedef struct __node* Nodeptr ;

//创建节点
Nodeptr createNode(int val){
    //给新节点申请空间
    Nodeptr newNode = (Nodeptr)malloc(sizeof(Node));
    //若申请失败
    if(newNode==NULL){
        fprintf(stderr,"[ERROR] Out of memory!\n");
        exit(EXIT_FAILURE);
    }else{//申请成功
        //新节点数据
        newNode->val=val;
        //新节点后继肯定是没有啦
        newNode->next=NULL;
        //返回
        return newNode;
    }
}

Nodeptr newList(int val){
    Nodeptr head=createNode(val);
    return head;
}

//添加节点
void appendNode(Nodeptr head,int val){
    Nodeptr last=head;
    //求最后节点
    for(;last!=NULL;last=last->next);
    //建立新节点
    Nodeptr newNode=createNode(val);
    //把最后节点连接上
    if(last->next==NULL)last->next=newNode; 
}

int getLength(Nodeptr head){
    int cnt;
    for(Nodeptr last=head;last!=NULL;last=last->next)cnt++;
    return cnt;
}

int main(){
    Nodeptr head=createNode(123);
    appendNode(head,3);
    appendNode(head,4);
    appendNode(head,5);
    printf("%d\n",getLength(head));
    return 0;
}