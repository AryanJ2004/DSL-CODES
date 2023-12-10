#include<iostream>
using namespace std;
struct node
{
int rollno;
char name[10];
char userType;
char year[3];
struct node *next;
};
//----------------------------------------------------
class SLL
{
struct node *head;
void displayReverse(struct node*);
public:
SLL()
{
head=NULL;
}
struct node *createNode(char);
void display();
void displayReverse()
{
if(head==NULL)
cout<<"\nNo Members Available !";
else
{
cout<<"\n------------- Pinnacle Club Member List ------------";
cout<<"\nRollNo \t Name \t MemberType \t Year"; displayReverse(head);
}
}
void insertAtBeg();
void insertAtEnd();
void insertAfter(int);
void deleteFromBeg();
void deleteFromEnd();
void deleteSpecific(int);
void countNodes();
};
//----------------------------------------------------
struct node *SLL::createNode(char userType)
{
struct node *newNode=new node;
cout<<"\nEnter Roll no: ";
cin>>newNode->rollno;
cout<<"\nEnter Name: ";
cin>>newNode->name;
cout<<"\nEnter Year (SE/TE/BE): ";
cin>>newNode->year;
newNode->userType=userType;
newNode->next=NULL;
return newNode;
}
//----------------------------------------------------
void SLL::display()
{
if(head==NULL)
cout<<"\nNo Members Available !";
else
{
node *temp=head;
cout<<"\n------------- Pinnacle Club Member List ------------";
cout<<"\nRollNo \t Name \t MemberType \t Year"; while(temp!=NULL)
{
cout<<"\n"<<temp->rollno<<" \t "<<temp->name<<"\t"<<temp->userType<<"\t\t "<<temp->year;
temp=temp->next;
}
}
}
//----------------------------------------------------
void SLL::displayReverse(struct node *temp)
{
if(temp!=NULL)
{
displayReverse(temp->next);
cout<<"\n"<<temp->rollno<<" \t "<<temp->name<<"\t"<<temp->userType<<" \t\t "<<temp->year;
}
}
//----------------------------------------------------
void SLL::insertAtBeg()
{
struct node *newNode=createNode('P');
if(head==NULL)
head=newNode;
else
{
newNode->next=head;
head=newNode;
}
}
//----------------------------------------------------
void SLL::insertAtEnd()
{
struct node *newNode=createNode('S');
if(head==NULL)
head=newNode;
else
{
struct node *temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newNode;
}
}
//----------------------------------------------------
void SLL::insertAfter(int rollno)
{
struct node *newNode=createNode('M');
if(head==NULL)
cout<<"\nCan't insert ! Link list empty !";
else
{
struct node *temp=head;
while(temp!=NULL)
{
if(temp->rollno==rollno)
{
newNode->next=temp->next;
temp->next=newNode;
return;
}
temp=temp->next;
}
cout<<"\nCan't insert ! Specified node not found after which u want to insert!";
}
}
//----------------------------------------------------
void SLL::deleteFromBeg()
{
if(head==NULL)
cout<<"\nCan't Delete ! No members Available !"; else
if(head->next==NULL && head->userType=='P') {
delete head;
head=NULL;
}
else
{
struct node *temp=head;
if(temp->userType=='P')
{
head=head->next;
delete temp;
}
else
cout<<"\nCan't Delete ! No President Available !";
}
}
//----------------------------------------------------
void SLL::deleteFromEnd()
{
if(head==NULL)
cout<<"\nCan't Delete ! No members Available !"; else
if(head->next==NULL && head->userType=='S') {
delete head;
head=NULL;
}
else
{
struct node *temp=head,*old=NULL;
while(temp->next!=NULL)
{
old=temp;
temp=temp->next;
}
if(temp->userType=='S')
{
old->next=NULL;
delete temp;
}
else
cout<<"\nCan't Delete ! No Secretary Available !";
}
}
//----------------------------------------------------
void SLL::deleteSpecific(int rollno)
{
if(head==NULL)
cout<<"\nCan't Delete ! No members Available !";
else if(head->next==NULL)
{
if(head->rollno==rollno && head->userType=='M')
{
delete head;
head=NULL;
}
else
cout<<"\nCan't Delete ! Member not found !";
}
else
{
struct node *temp=head,*old=NULL;
while(temp!=NULL)
{
if(temp->rollno==rollno && temp->userType=='M')
{
if(temp==head)
{
head=head->next;
delete temp;
return;
}
else if(temp->next==NULL)
{
old->next=NULL;
delete temp;
return;
}
else
{
old->next=temp->next;
delete temp;
return;
}
}
old=temp;
temp=temp->next;
}
cout<<"\nCan't Delete ! Member not found !";
}
}
//----------------------------------------------------
void SLL::countNodes()
{
int count=0;
struct node *temp=head;
while(temp!=NULL)
{
count++;
temp=temp->next;
}
cout<<"\nNo. of Members in Club including President & Secretary are :"<<count;
}
//----------------------------------------------------
int main()
{
int ch1,ch2;
int rollno;
SLL s;
cout<<"\n------------Department of Computer Engineering------------";
cout<<"\n-------------------Pinnacle Club Main Menu----------------";
cout<<"\n1. Display Members List";
cout<<"\n2. Add Member";
cout<<"\n3. Delete Member";
cout<<"\n4. Count Total no. of Members ";
cout<<"\n5. Exit";
do
{
cout<<"\nEnter Club Main Menu Choice: ";
cin>>ch1;
switch(ch1)
{
case 1:
cout<<"\n--------------Display Members Menu-----------";
cout<<"\n1. Display Member List (forward)";
cout<<"\n2. Display Member List (Reverse)";
cout<<"\nEnter Display Menu choice: ";
cin>>ch2;
switch(ch2)
{
case 1:
s.display();
break;
case 2:
s.displayReverse();
break;
}
break;
case 2:
cout<<"\n--------------Add Member Menu-----------";
cout<<"\n1. Add President";
cout<<"\n2. Add Secretary";
cout<<"\n3. Add Normal Member";
cout<<"\nEnter Add Member Menu choice: ";
cin>>ch2;
switch(ch2)
{
case 1:
s.insertAtBeg();
break;
case 2:
s.insertAtEnd();
break;
case 3:
cout<<"\nEnter Rollno after which u wantto insert: ";
cin>>rollno;
s.insertAfter(rollno);
break;
}
break;
case 3:
cout<<"\n--------------Delete Member Menu-----------";
cout<<"\n1. Delete President";
cout<<"\n2. Delete Secretary";
cout<<"\n3. Delete Normal Member";
cout<<"\nEnter Delete Member Menu choice: ";
cin>>ch2;
switch(ch2)
{
case 1:
s.deleteFromBeg();
break;
case 2:
s.deleteFromEnd();
break;
case 3:
cout<<"\nEnter Rollno u want to delete: ";
cin>>rollno;
s.deleteSpecific(rollno);
break;
}
break;
case 4:
s.countNodes();
break;
}
}while(ch1!=5);
return 0;
}