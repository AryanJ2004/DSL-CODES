//============================================================================
// Name        : SinglyLinkedList.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;

}*start;

class SLL
{
public:
	SLL()
	{
		start=NULL;
	}
	void accept();
	void display();
	void search();
	void insert_beginning();
	void insert_after();
	void insert_end();
	void delete_start();
	void delete_end();
	void delete_after();
};


node *createnode()
{
	node *ntemp;
	ntemp=new node;
	cout<<"Enter Data: ";
	cin>>ntemp->data;
	ntemp->next=NULL;
	return ntemp;
}


void SLL::accept()
{
	int n,i;
	node *trav;
	start=NULL;
	cout<<"\nHow Many Nodes You Want To Enter:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		class node *ntemp=createnode();
		if(start==NULL)
		{
			start=ntemp;
		}
		else
		{
			trav=start;
			while(trav->next!=NULL)
			{
				trav=trav->next;
			}
			trav->next=ntemp;
		}
	}
}

void SLL::display()
{
	node *trav=start;
	while(trav!=NULL)
	{
		cout<<trav->data<<"->";
		trav=trav->next;
	}
	cout<<"NULL";
}

void SLL::search()
{
	node *trav;
	int serno,flag=0;
	trav=start;
	cout<<"\nWhich number do you want to search";
	cin>>serno;
	while(trav!=NULL)
	{
		if(serno==trav->data)
		{
			flag=1;
			break;
		}
		trav=trav->next;
	}
	if(flag==0)
	{
		cout<<"Number not found";
	}
	else
	{
		cout<<"Number found";
	}
}
void SLL::insert_beginning()
{
	cout<<"\nAdd Node To The Beginning:"<<endl;
	node *ntemp=createnode();
	ntemp->next=start;
	start=ntemp;
	display();
	cout<<"\n\n"<<endl;

}
void SLL::insert_after()
{
	cout<<"Enter Data To Insert After:"<<endl;
	node *ntemp=createnode();
	node *trav;
	int serno;
	cout<<"After Which Node You Want To Insert?"<<endl;
	cin>>serno;
	trav=start;
	while(trav->data!=serno)
	{
		trav=trav->next;
	}
	ntemp->next=trav->next;
	trav->next=ntemp;
	display();
	cout<<"\n\n"<<endl;
}
void SLL::insert_end()
{
	cout<<"Which Node You Want To Insert At End"<<endl;
	node *ntemp=createnode();
	node *trav=start;
	while(trav->next!=NULL)
	{
		trav=trav->next;
	}
	trav->next=ntemp;
	display();
	cout<<"\n\n"<<endl;

}
void SLL::delete_start()
{
	cout<<"First Element Of Node Is Deleted:"<<endl;
	node *trav;
	trav=start;
	start=start->next;
	trav->next=NULL;
	delete(trav);
	display();
	cout<<"\n\n"<<endl;
}
void SLL::delete_end()
{
	cout<<"End Element Of Node Is Deleted:"<<endl;
	node *trav;
	node *old;
	trav=start;
	while(trav->next!=NULL)
	{
		old=trav;
		trav=trav->next;
	}
	old->next=NULL;
	delete(trav);
	display();
	cout<<"\n\n"<<endl;

}
void SLL::delete_after()
{
	node *trav,*old;
	int serno;
	cout<<"Which Node You Want To Delete?"<<endl;
	cin>>serno;
	trav=start;
	while(trav->data!=serno)
	{
		old=trav;
		trav=trav->next;
	}
	old->next=trav->next;
	trav->next=NULL;
	delete(trav);
	display();
}
int main()
{
	SLL s;
	s.accept();
	s.display();
	int c;
	cout<<"\n\t\t***********MENU****************"<<endl;

	cout<<"\tEnter 1 For Searching"<<endl;
	cout<<"\tEnter 2 For Insert Element At Beginning Of Node"<<endl;
	cout<<"\tEnter 3 For Insert Element At Specified Location"<<endl;
	cout<<"\tEnter 4 For Insert Element At End"<<endl;
	cout<<"\tEnter 5 For Delete Element At Start Of Node"<<endl;
	cout<<"\tEnter 6 For Delete Element At Specified Location"<<endl;
	cout<<"\tEnter 7 For Delete Element At End"<<endl;
	cout<<"\tEnter 0 For Exit"<<endl;
	cout<<"\t\n Enter Your Choice:"<<endl;

	while (c!=0)
	{
		cout<<"\nEnter Input :"<<endl;
		cin>>c;

		switch(c)
		{
		case 1:
			s.search();
			break;
		case 2:
			s.insert_beginning();
			break;
		case 3:
			s.insert_after();
			break;
		case 4:
			s.insert_end();
			break;
		case 5:
			s.delete_start();
			break;
		case 6:
			s.delete_after();
			break;
		case 7:
			s.delete_end();
			break;
		case 0:
			cout<<"Thanks For Using!"<<endl;
			break;
		default:
			cout<<"Invalid Input!!! Thanks For Using!"<<endl;
		}
	}






	return 0;
}
