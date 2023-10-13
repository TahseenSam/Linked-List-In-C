#include<iostream>
#include<conio.h>
using namespace std;
struct node
{	
	node* prev;
	int data;
	node* next;
};
class list{
	private:
		node *head,*tail,*current;
	public:
		list()	//constructor
		{
			head=NULL;
			tail=NULL;
		}
		void insert(int x)
		{
			node* temp=new node;
			temp->data=x;
			temp->next=NULL;
			temp->prev=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				current=temp;
			}
			else
			{
				current->next=temp;
				temp->prev=current;
				current=current->next;
			}
		}
		void display()
		{
			node *start=new node;
			start=head;
			while(start!=NULL)
			{
				cout<<start->data<<"<=>";
				start=start->next;
			}
		}
};
int main()
{
	list a;//object
	int x;
	char c='y';
	while(c=='y' || c=='Y')
	{
	cout<<"Enter The Value You Want To Store :\t\t";
	cin>>x;
	a.insert(x);
	cout<<endl<<"Do You Want To Enter More (y/Y) :";
	cin>>c;
	}
	a.display();
	getch();
	return 0;
}

