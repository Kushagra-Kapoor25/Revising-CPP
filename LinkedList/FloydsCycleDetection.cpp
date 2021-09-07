#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
        next = NULL;
    }
};
Node *insertEnd(Node *head, int key)
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
    Node *curr = head;
    int flag = 0;
    while (curr != head || flag == 0)
    {
        flag = 1;
        cout << curr->key << " ";
        curr = curr->next;
    }
    cout << endl;
}
bool detectLoop(Node *head)
{
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
int main()
{
    Node *head = NULL;
    head = insertEnd(head, 1);
    head = insertEnd(head, 2);
    head = insertEnd(head, 3);
    head = insertEnd(head, 4);
    head = insertEnd(head, 5);
    Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    printList(head);
    if (detectLoop(head))
        cout << "Loop detected";
    else
        cout << "No loop found";
    return 0;
}