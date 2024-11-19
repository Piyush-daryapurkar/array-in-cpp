#include<iostream>
using namespace std;
int main ()
{
	////Write a program to find the sum of all elements in an integer arrayy
	
	int arr[]={1,2,3,4};
	int sum=0;
	
	
	for(int i=0; i<4;i++)
	{
		sum=sum+arr[i];
	}
	cout<<sum<<endl;



	return 0;
}
