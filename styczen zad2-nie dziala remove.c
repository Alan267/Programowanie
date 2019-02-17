#include<stdio.h>
#include<stdlib.h>


typedef struct Node Node;	
struct Node
	{
		int Value;
		Node* Next;
	};

	



Node * Create (int value)
{
	Node * root=(Node*) malloc (sizeof(Node));
	root->Value=value;
	root->Next=root;
	return root;
}

Node * GetTail(Node* root)
{
	printf("\n");
	Node * temp=root;
	while (temp->Next!=root) 
		{
			temp=temp->Next;
		}
	
	return temp;
}

void Add (Node* root, int value)
{
	Node * tail=(Node*) malloc (sizeof(Node));
	tail->Value=value;
	tail->Next=root;
	GetTail(root)->Next=tail;
}

void PrintList (Node* root)
{
	Node * temp=root;
	printf("\n %d", temp->Value);
	while (temp->Next!=root)
		{
			printf("-");
			temp=temp->Next;
			printf("%d",temp->Value);
		}
			
}
int Count (Node *root)
	{
		Node * temp=root;
		int a=1;
		while (temp->Next!=root) 
			{
				a++;
				temp=temp->Next;	
			}
		return a;
	}
	
	


void FreeList (Node * root)
{
	Node * temp=root;
	while(temp->Next!=root)
	{
		free(temp);
		temp=temp->Next;
	}
	free (temp);
	root=NULL;
}






int main(){
		
	Node * root = Create(2);
	PrintList(root);
	Add(root,4);
	Add(root,8);
	Add(root,16);
	PrintList(root); //2-4-8-16
	
	Add(root,20);
	PrintList(root);//2-4-8-16-20
	
	printf("Ostatni wezel ma wartosc %d", GetTail(root)->Value);//20
	
	Add(root,16);
	PrintList(root);//2-4-8-16-20-16
	printf("\n %d", Count(root));//6  //doda³em tylko \n dla lepszego wygl¹du :)  . Mozna bylo tez dodac printf("\n") do funkcji Count
	
//	RemoveNode(root,8);
	PrintList(root);//2-4-16-20-16
//	RemoveNode(root,10);//nie istnieje
	PrintList(root);//2-4-16-20-16
//	RemoveNode(root,16);//2-4-20
	
	printf("\n %d", Count(root));//3
	
	FreeList(root);
	PrintList(root);
	
	return 0;
	

}
