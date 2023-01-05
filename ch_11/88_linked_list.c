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

/*Adds a node at the end of a Linked List*/
void append(struct node **q, int num){
    struct node *temp, *r;
    
    /*If the list is empty, create first node*/
    if(*q == NULL){
        // addAtBeg(q, num); // Try using this function
        temp = (struct node *)malloc(sizeof(struct node));
        temp -> data = num;
        temp -> link = NULL;
        *q = temp;
    }else{
        temp = *q;

        /*Goto last node*/
        while(temp -> link != NULL){
            temp = temp -> link;
        }

        /*Add node at the end*/
        r = (struct node *)malloc(sizeof(struct node));
        r -> data = num;
        r -> link = NULL;
        temp -> link = r;
    }
}

/*Add the new node at begining of the Linked List*/
void addAtBeg(struct node **q, int num){
    struct node *temp;

    /*add new node*/
    temp = (struct node *)malloc(sizeof(struct node));

    temp -> data = num;
    temp -> link = *q;
    *q = temp;
}

/*Adds a new node after the specified number of nodes*/
void addAfter(struct node *q, int loc, int num){
    struct node *temp, *r;
    int i;

    if(loc <= 0){
        printf("Invalid value for location. Unable to add element");
        return;
    }

    temp = q;
    /*Skip to desired portion*/
    for(i=0; i < loc; i++){
        temp = temp -> link;

        /*If end of linked list is encountered*/
        if(temp == NULL){
            printf("There are less then %d elements in the list\n", loc);
            return;
        }
    }

    /*Insert new node*/
    r = (struct node *)malloc(sizeof(struct node));
    r -> data = num;
    r -> link = temp -> link;
    temp -> link = r;
}

/*Display the contents of every node in Linked List*/
void display(struct node *q){
    /*Traverse the entire Linked List*/
    while(q != NULL){
        printf("%d", q -> data);
        q = q -> link;
    }

    printf("\n");
}

/*Counts the number of nodes present in the Linked List*/
int count(struct node *q){
    int c;

    /*Traverse the entire Linked List*/
    while(q != NULL){
        q = q -> link;
        c++;
    }

    return c;
}

/*Delete the specific node from the Linked list*/
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