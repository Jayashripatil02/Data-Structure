#include<iostream>
using namespace std;
int main()
{
	int a[5]={5,40,10,6,32};
	int i,item,flag;
	cout<<"Enter the search=";
	cin>>item;
	for(i=0;i<5;i++)
	{
		if(a[i]==item)
		{
			flag=i+1;
			break;
		}
		else
		    flag=0;
	}
	if(flag!=0)
	{
		cout<<"item found";
		cin>>flag;
	}
	else{
		cout<<"Item not found";
	}
}
