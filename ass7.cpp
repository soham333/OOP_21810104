#include<iostream>
#include<list>
#include<stdlib.h>

using namespace std;

void display(list<int> &l)
{
	list<int>::iterator itr;
	
	for(itr=l.begin(); itr!=l.end(); ++itr)
	{
		cout<<*itr<<" ";
	}
}

int main()
{
	
		int x,pos,no,elem;
	int value;
	list<int>l1;
	list<int>l2;
	
	for(int i=0;i<5;i++)
	{
		cout<<"ENTER THE VALUE FOR FIRST LIST"<<'\n';
		cin>>value;
		l1.push_back(value);
	}
	
	system("CLS");
	
	for(int i=0;i<1000;i++)
	{

	cout<<"WHAT FUNCTION DO YOU WANNT TO PERFORM"<<'\n';
	cout<<"1.DISPLAY FIRST LIST"<<'\n';
	cout<<"2.SORT FIRST LIST"<<'\n';
	cout<<"3.MERGE THE LISTS"<<'\n';
	cout<<"4.CHECK IF THE LIST ARE EMPTY"<<'\n';
	cout<<"5.INSERT ELEMENTS IN LIST"<<'\n';
	cout<<"6.REVERSE THE LIST"<<'\n';
	cout<<"7.REMOVE THE REPEATATING ELEMENTS IN LIST"<<'\n';
	cout<<"8.EXIT"<<'\n';
	
	cin>>x;
	
	switch(x)
	{
	case 1:
	display(l1);
	cout<<'\n';
	break;
	
	case 2:
	l1.sort();
	display(l1);
	cout<<'\n';
	break;
	
	case 3:
	for(int i=0;i<5;i++)
	{
		cout<<"ENTER THE VALUE FOR SECOND LIST"<<'\n';
		cin>>value;
		l2.push_back(value);
	}
	
	l1.merge(l2);
	display(l1);
	break;
	
	case 4:
	if(l1.empty()==true)
	{
		cout<<"LIST IS EMPTY"<<'\n';
	}
	else
	{
		cout<<"LIST IS NOT EMPTY"<<'\n';
	}
	break;
	
	case 5:
		
		{
		list<int>::iterator it1=l1.begin();
		
		cout<<"ENTER THE POSITION AT WHICH YOU WANT TO INSERT A NO."<<'\n';
		cin>>pos;
		
		advance(it1,pos-1);
		
		cout<<"ENTER THE ELEMENTS"<<'\n';
		cin>>elem;
		
		l1.insert(it1,elem);
		display(l1);
		}
	break;	
	case 6:
		l1.reverse();
		display(l1);
		break;
	case 7:
		l1.unique();
		display(l1);
		break;
	case 8:
		return 0;
	}
}
	
	
}
