#include<stdio.h>
#include<malloc.h>
struct list{
    int val;
    struct list *next;
};
void insert(struct list *head, int val, int loc){
    struct list *newnode = (struct list*)malloc(sizeof(struct list*));
    struct list *temp;
    newnode->val = val;
    newnode->next = NULL;
    temp = head;
    if(head == NULL && loc == 1){
        head = newnode;
        return;
    }
    int i = 1;
    while(temp->next){
        temp = temp->next;
        i++;
        if(i == loc - 1)break;
    }
    if(i != loc - 1)printf("Invalid Location");
    newnode->next = temp->next;
    temp->next = newnode;
    return;
}
int main(){
    struct list *head = (struct list*)malloc(sizeof(struct list*));
    insert(head, 1, 1);
    printf("%d", head->next->val);
    return 0;
}