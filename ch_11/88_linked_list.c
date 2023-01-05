/*Linked List Data Structure*/
#include <stdio.h>
#include <malloc.h>

/*Structure of linked list contains link part and data part*/
struct node
{
    int data;
    struct node *link;
};

void append(struct node **, int);
void addAtBeg(struct node **, int);
void addAfter(struct node *, int, int);
void display(struct node *);
int count(struct node *);
void del(struct node **, int);

int main(){

}

void append(struct node **q, int num){}

void addAtBeg(struct node **q, int num){}

void addAfter(struct node *q, int loc, int num){}

void display(struct node *q){}

int count(struct node *q){}

void del(struct node **q, int num){
    struct node *old, *temp;

    temp = *q;

    while(temp != NULL){
        if(temp -> data == num){
            /*If node to be deleted is the first node of the Linked List*/
            if(temp == *q){
                *q = temp -> link;
            }
            else{
                old -> link = temp -> link;
            }

            free (temp);
            return;
        }else{
            old = temp;
            temp = temp -> link;
        }
    }

    printf("Element %d not found in the Linked list\n", num);
}