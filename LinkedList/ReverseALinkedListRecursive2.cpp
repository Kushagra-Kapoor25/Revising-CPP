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
Node *recReverse(Node *curr, Node *prev)
{
    // Base Case
    if (curr == NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    return recReverse(next, curr);
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
    head = recReverse(head, NULL);
    printList(head);
    return 0;
}