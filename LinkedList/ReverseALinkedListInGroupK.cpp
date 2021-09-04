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
Node *reverseK(Node *head, int k)
{
    Node *curr = head, *next = NULL, *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
    {
        Node *rest_head = reverseK(next, k);
        head->next = rest_head;
    }
    return prev;
}
int main()
{
    Node *head = NULL;
    head = insertAfterEnd(head, 1);
    head = insertAfterEnd(head, 2);
    head = insertAfterEnd(head, 3);
    head = insertAfterEnd(head, 4);
    head = insertAfterEnd(head, 5);
    head = insertAfterEnd(head, 6);
    head = insertAfterEnd(head, 7);
    head = insertAfterEnd(head, 8);
    head = insertAfterEnd(head, 9);
    printList(head);
    head = reverseK(head, 3);
    printList(head);
    return 0;
}