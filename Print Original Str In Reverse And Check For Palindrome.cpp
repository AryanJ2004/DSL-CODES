#include<iostream>
#include <string.h>
#define max 10
using namespace std;

class Stack
{
public:
	int top;
	char stk[10];
	Stack()
	{
		top=-1;
	}
	int empty()
	{
		if(top==-1)
			return(1);
		else
			return(0);
	}
	int full()
	{
		if(top==max-1)
		return(1);
		else
			return(0);
	}
	void push(char ch)
	{
		if(full())
			cout<<"\nStack Is Full"<<endl;
		else
		{
			top=top+1;
			stk[top]=ch;
		}
	}

	char pop()
	{
		char ch;
		if(empty())
		{

		cout<<"Stack Is Empty"<<"\0"<<endl;
		return -1;
		}
		else
			ch=stk[top--];
		return ch;
		}
};

int main()
{
	Stack s;
	int k=0,flag;
	char str[10],rev[10],ch;
	cout<<"Enter String:"<<endl;
	cin>>str;
	for(int i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		s.push(ch);
	}
	while(s.top!=-1)
	{
		ch=s.pop();
		rev[k++]=ch;
	}
	rev[k]='\0';
	cout<<"Reversed String Is:"<<rev<<endl;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==rev[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
		if (flag==1)
		{
			cout<<"String Is Palindrome"<<endl;
		}
		else
			cout<<"String Is Not Palindrome"<<endl;

}
