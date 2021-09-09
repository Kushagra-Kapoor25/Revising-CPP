#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int key)
    {
        data = key;
        next = NULL;
    }
};
void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
Node *segregate(Node *head)
{
    Node *eS = NULL, *eE = NULL, *oS = NULL, *oE = NULL;
    for (Node *curr = head; curr != NULL; curr = curr->next)
    {
        int x = curr->data;
        if (x % 2 == 0)
        {
            if (eS == NULL)
            {
                eS = curr;
                eE = curr;
            }
            else
            {
                eE->next = curr;
                eE = eE->next;
            }
        }
        else
        {
            if (oS == NULL)
            {
                oS = curr;
                oE = curr;
            }
            else
            {
                oE->next = curr;
                oE = oE->next;
            }
        }
    }
    if (oS == NULL || eS == NULL)
        return head;
    eE->next = oS;
    oE->next = NULL;
    return eS;
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    printList(head);
    head = segregate(head);
    printList(head);
    return 0;
}