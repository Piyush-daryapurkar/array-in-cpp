#include<iostream>
using namespace std;
int main ()
{
	
	//Create a program to calculate the average of elements in an array
	int arr[]={1,2,3,4};
	int sum=0;
	float avg=0;
	
	for(int i=0;i<4;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"sum is : "<<sum<<endl;
	avg=sum/4.0;
	cout<<"avg is : "<<avg<<endl;
	
	


	return 0;
}