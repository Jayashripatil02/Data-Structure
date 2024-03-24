#include<stdio.h>
#define SIZE 5
int top = -1,array[SIZE];
void push();
void pop();
void show();
int main()
{
	int choice;
	while(1)
	{
		printf("\nPerform operation on the stack:");
		printf("\n1.Push the element \n2.Pop the element \n3.Show \n4.End");
		printf("\n\n Enter the Choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				show();
				break;
				
			default:
				printf("\n Invalid Choice");
		}
	}
}
void push()
{
	int x;
	if(top ==  SIZE - 1)
	{
		printf("\n Overflow");
	}
	else
	{
		printf("\nEnter the element to be added into the stack:");
		scanf("%d", &x);
		top = top + 1;
		array[top]= x;
	}
}
void pop()
{
	if(top == -1)
	{
		printf("\nUnderflow");
	}
	else{
		printf("\nPopped element: %d", array[top]);
		top = top -1;
	}
}
void show()
{
	if(top == -1)
	{
		printf("\nUnderflow!");
	}
	else
	{
		int i;
		printf("\nElement present in the stack: \n");
		for(i=top; i>=0; i--)
		{
			printf("%d\n", array[i]);
		}
	}
}
