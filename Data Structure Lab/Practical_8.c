#include <stdio.h>
#include <stdlib.h>

struct node
{
    char *company;
    float screenSize;
    int price;
    struct node *next;
};

struct node *AddNode(struct node *head, char *cpName, float size, int price)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->company = cpName;
    temp->screenSize = size;
    temp->price = price;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *index = head;
        while (index->next != NULL)
        {
            index = index->next;
        }
        index->next = temp;
        temp->next = NULL;
    }
    return head;
}

void printList(struct node *temp)
{
    printf("Printing Linked List\n");
    printf("-----------------------------\n");

    while (temp != NULL)
    {
        printf("Company : %s\n", temp->company);
        printf("Screen Size : %.1f inch\n", temp->screenSize);
        printf("Price : Rs. %d\n\n", temp->price);
        temp = temp->next;
    }
}
int main()
{
    struct node *head = NULL;
    head = AddNode(head, "Xiaomi", 5.6, 9999);
    head = AddNode(head, "Apple", 6.1, 99999);
    head = AddNode(head, "Samsung", 6.7, 49999);
    printList(head);
}