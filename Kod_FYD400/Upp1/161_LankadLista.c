/*Labbkompendio upp 1.6.1 Länkad lista
 En dubbellänkad lista som kan 
 a) Skapa en ny nod
 b) Lägga till en ny nod i slutet av kedjan
 c) ta bort plats på en viss nod i kedjan
 d) gå igenom hela kedjan och skriva ut alla värden
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    double data;
    struct node *next;
    //struct node *prev;
};

struct node *head = NULL;
//int countList(struct node);
void print_list(struct node *);
struct node *newNode(void);
void createNode();

/*
int countList(struct node *head_ref){
    int val=0;
    while(head_ref != NULL){
        head_ref = head_ref->next;
        val++;
    }
    return val;
}

*/



void printList(struct node *pp){
    if (pp != NULL){
        printf("\n%5.4lf", pp->data);      // node.data
        printList(pp->next);     // Calling itself (Its called recursion!)
    }
}


struct node *lastnode(void){
    struct node *tempNode = head;
    while(tempNode->next != NULL){
        tempNode = tempNode->next;
    }
    printf("\n\n%d\n", tempNode->data);
    return(tempNode);
}

void createNode(){
    double new_data;
    struct node *pp, *pp2;;
    printf("\nadd data(double): ");
    if (scanf("%lf", &new_data) != 0)
    {
        printf("\ndata scannat");
        if(head == NULL) //if we have no nodes yet
        {
            printf("\nHead = null");
            //Gör den första noden
            pp = newNode();
            pp->data = new_data;
            pp->next = NULL;
            head = pp;
        }
        else{
            pp = lastnode();
            pp->next = newNode();
            pp->next->data = new_data;
            pp->next->next = NULL;
        }
    }
    else
    {
        exit(99);
    }
    return;
}
struct node *newNode(void){
    struct node *new_node;
    new_node = (struct node *) calloc(1, sizeof (struct node));
    if (new_node == NULL)
    {
        printf("Memory Error\n");
        exit(99);
    }
    else
    {
        return new_node;
    }
}




int main(void){
    int menu1;
    const struct node *master;
    
    do{
        printf("\nAntal Noder: <add node num>\n1: Create Node\n2: print node list\n3: exit\n:"); //countList(head));
        scanf("%i", &menu1);
        
        switch (menu1)
        {
        case 1:
            createNode();//Anrop till skapa
            break;
        case 2:
            printList(head);

            break;        
        default:
            printf("\n\nbye bye\n\n");
            break;
        }
    }while(menu1 != 3);


    return 0;
}