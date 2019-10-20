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
    struct node *prev;
};

struct node *head = NULL;
//int countList(struct node);
void print_list(struct node *);
void removeNode(void);
struct node *newNode(void);
void createNode();
struct node *specificNode(int);


int countList(void){
    int val=0;
    struct node *pp = head;
    while(pp->next != NULL){
        pp = pp->next;
        val++;
    }
    return val;
}


void removeNode(void){
    if (head == NULL){
        printf("\nNo nodes to delete");
        return;
    }
    int removeNum;
    char errorVal;
    printf("\nwhich node to delete?: ");
    if (scanf("%d", &removeNum) == 0){
        scanf("%c", &errorVal);
        printf("\nIs not a number");
        return;
    }
    if (removeNum < 1)
    {
        printf("\nNeed a positive number");
        return;
    }
    struct node *pp = specificNode(removeNum);
    
    if (pp == head)
    {
        if (pp->next != NULL){
            head = pp->next;
        }
        pp->next->prev = NULL;
        pp = NULL;
        free(pp);
    }
    else if(pp == NULL)
    {
        printf("\nNode doesn't exist");
    }
    else
    {
        if (pp->next == NULL)
        {
            pp->prev->next = NULL;
        }
        else
        {
            pp->prev->next = pp->next;
            pp->next->prev = pp->prev;
        }
        pp = NULL;
        free(pp);
    }
}

struct node *specificNode(int num){ 
    struct node *tempNode = head;
    for (int i = 0; i < num-1; i++) {
        if (tempNode->next == NULL) {
            return NULL;
        }
        tempNode = tempNode->next;
    }
    return(tempNode);
}

struct node *lastnode(void){    //hitta sista noden
    struct node *tempNode = head;
    while(tempNode->next != NULL){
        tempNode = tempNode->next;  //Om vi inte hittar NULL, peka på nästa
    }
    return(tempNode);
}
void printList(struct node *pp){
    if (pp != NULL){
        printf("\n%8.2lf\tprev: %p\tme: %p\tnext:%p", pp->data, pp->prev, pp,pp->next);
        printList(pp->next);     // anropar sig själv (loop)
    }
}
void createNode(){
    double new_data;
    struct node *pp, *pp2;;
    printf("\nadd data(double): ");
    if (scanf("%lf", &new_data) != 0)
    {
        if(head == NULL) //om vi inte har några noder än
        {
            //Gör den första noden
            pp = newNode();
            pp->data = new_data;
            pp->next = NULL;
            pp->prev = NULL;
            head = pp;
        }
        else{       //Har vi noder lägg ny nod sist
            pp = lastnode();
            pp->next = newNode();   //Vi skapar noden genom att titta på den tidigare sista noden
            pp->next->data = new_data;
            pp->next->next = NULL;
            pp->next->prev = pp;
        }
    }
    else    //Fel input
    {
        exit(99);
    }
    return;
}
struct node *newNode(void){
    struct node *new_node;
    new_node = (struct node *) calloc(1, sizeof (struct node));//calloc allokerar minne
    if (new_node == NULL)   
    {
        printf("Memory Error\n");
        exit(99); //Om vi inte får tag på något minne
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
        printf("\n\n1: Create Node\n"
        "2: print node list\n3: Remove node\n4: exit\n:");
        if (scanf("%i", &menu1) == 0)
            return 0;
        
        switch (menu1)
        {
        case 1:
            createNode();
            break;
        case 2:
            printList(head); //Skickar den pga recursion
            break;      
        case 3:
            removeNode();
            break;  
        default:
            printf("\nbye bye\n");
            return 0;
        }
    }while(1);
    return 0;
}