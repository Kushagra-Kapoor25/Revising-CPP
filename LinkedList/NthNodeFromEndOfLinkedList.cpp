#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *next;
    Node(int data)
    {
        key = data;
        next = NULL;
    }
};
Node *insertAfterEnd(Node *head, int key)
{
    if (head == NULL)
        return new Node(key);
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new Node(key);
    return head;
}
void printList(Node *head)
{
    if (head == NULL)
        return;
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->key << " ";
        curr = curr->next;
    }
    cout << endl;
}
void printNNodeFromEnd(Node *head, int n)
{
    Node *first = head;
    for (int i = 1; i <= n; i++)
    {
        if (first == NULL)
            return;
        first = first->next;
    }
    Node *second = head;
    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->key;
}
int main()
{
    Node *head = NULL;
    head = insertAfterEnd(head, 1);
    head = insertAfterEnd(head, 2);
    head = insertAfterEnd(head, 3);
    head = insertAfterEnd(head, 4);
    head = insertAfterEnd(head, 5);
    printList(head);
    printNNodeFromEnd(head, 4);
    return 0;
}