#include <bits/stdc++.h>
using namespace std;

class Node{

public:
    int value;
    Node* next;

    Node(int val)
    {
        value= val;
        next = NULL;
    }
};

void insertTail(int val,Node* &head)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next = newNode;
}

void display(Node* &head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<< tmp->value<<"  ";
        tmp = tmp->next;
//        if(tmp != NULL)
//            cout<<"-->";
    }
    cout<<endl;
}

Node* removeZeroSum(Node* &head)
{
    Node* p1 = head;
    Node* p2;
    Node* output = NULL;

    while(p1)
    {
        cout<<"current p1: "<<p1->value<<endl<<endl;
        p2 = p1;
        int sum = 0;
        bool mod = false;
        while(p2)
        {
            sum+=p2->value;
            if(sum==0)
            {
                p1=p2;
                mod = true;
            }
            cout<<"Current p2:"<<p2->value<<"; ";
            cout<<"Current sum: "<<sum<<endl;
            p2 = p2->next;
        }

        if(!mod )
            insertTail(p1->value,output);
        cout<<endl;
        p1 = p1->next;
    }
    return output;
}

int main()
{

    Node* head = NULL;

    insertTail(6,head);
    insertTail(-6,head);
    insertTail(8,head);
    insertTail(4,head);
    insertTail(-12,head);
    insertTail(9,head);
    insertTail(8,head);
    insertTail(-8,head);
   // insertTail(-18,head);
    //insertTail(20,head);
   // insertTail(25,head);

    display(head);

    Node* n;
    n = removeZeroSum(head);

    display(n);


}
