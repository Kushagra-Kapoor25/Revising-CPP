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
Node *recReverse(Node *head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
        return head;
    Node *rest_head = recReverse(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
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
    head = recReverse(head);
    printList(head);
    return 0;
}