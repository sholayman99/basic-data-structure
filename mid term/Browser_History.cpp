#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string val)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;

    
    while (true)
    {
        cin >> val;
        if (val == "end")
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    int q;
    cin >> q;

    Node *tmp = head;

    while (q--)
    {
        string command;
        cin >> command;

        if (command == "visit")
        {
            string site;
            cin >> site;
            Node *tmp2 = head;
            bool found = false;
            while (tmp2 != NULL)
            {
                if (tmp2->val == site)
                {
                    tmp = tmp2;
                    found = true;
                    break;
                }
                tmp2 = tmp2->next;
            }
            if (found)
            {
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev")
        {
            if (tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next")
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
