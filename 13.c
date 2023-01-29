#include <iostream>
using namespace std;
void ss(){
return;
}
struct node
{
int data;
node *next;
}*head = NULL;
bool found = true;
int n;
void del()
{
int n,i=0;
cin>>n;
node *j = head;
while (j != NULL)
{ i++;
if( j -> next -> data == n)
{
head = j -> next;
break;
}
j = j -> next;
if(i == n)
{
found = false;
break;
}
}
if(!found) cout<<"Invalid Node! ";
cout<<"Linked List:";
while(head != NULL)
cout<<"->"<<head -> data,
head = head -> next;}
void create()
{
int n,i=0,first;cin>>n;node *p1 = new node;cin>>first;p1 -> data = first;
head = p1;
while(i!=n-1)
{
int a;
cin>>a;
node *n = new node;
n -> data = a;
n -> next = NULL;
p1 -> next = n;
p1 = n;
i++;
}
p1 -> next = NULL;
}
int main()
{
create();
del();return 0;cout<<"p1=p1->next for(i=0;i<n;i++) p1=p1->next";
}
