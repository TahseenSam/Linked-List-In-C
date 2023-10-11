#include<iostream>
#include<conio.h>
using namespace std;

struct node{
    int data;
    node* next ;
}*save;

class linked_list
{
    private:
        node *head,*tail;
    public:
        linked_list()
        {
            head=NULL;
            tail=NULL;
        }
    void add_node(int i)
    {
        node* temp=new node;
        temp->data=i;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            tail=temp;
        }
        else
        {
            save=head;
            head=temp;
            temp->next=save;
        }
    }
 void display()
    {
        node* temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
 void remove()
 	{	
 		if(head==NULL)
 		{
 			cout<<"List Is Empty !!!!";
		 }
		 else{
 		
		 node *temp=head;
 		head=head->next;
	 	delete temp;
	 	}
 		
	}
	void search(int x)
	{
		if(head != NULL)
		{
		int flag;
		node *temp = head;
		while(temp != NULL)
		{
			if(temp->data == x)
			{
				cout<<"Element Found In List";
				flag=1;
				break;
			}
			else
				temp=temp->next;
		}
		if(flag!=1)
		cout<<"Element Not Found";
	}
	else
	{
		cout<<"List Is Empty !!!";
	}
	}
};

int main()
{
    int i,ch;
    linked_list a ;
    char c='y';
    
    loop:
	system("cls");
	cout<<"Select Your Operation"<<endl;
    cout<<"[1] Insertion "<<endl<<"[2] Deletion"<<endl<<"[3] Searching"<<endl<<"[4] Exit"<<endl;
	cin>>ch;
	switch(ch)
    {
    case 1:
		while(c=='y' || c=='Y')
   	 { 
        cout<<"Enter The Value To Store In The Linked List:"<<endl;
        cin>>i;
        a.add_node(i);
        cout<<"Do You Want To Insert more node?(y/Y)";
        cin>>c;
   	 }
    	a.display();
    	getch();
    	goto loop;
    	break;
    case 2:
		cout<<endl<<"Remove Operation :"<<endl; 
    	a.remove();
    	a.display();
    	getch();
    	goto loop;
    	break;
    case 3:
    	int z;
    	system("cls");
    	a.display();
    	cout<<endl<<"Enter The Element You Want To Search In Above List : "<<endl;
		cin>>z;
		a.search(z);
		getch();
		goto loop;
		break;
	default:
		exit(0);
}
	    return 0;
}
