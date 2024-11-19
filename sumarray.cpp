#include<iostream>
using namespace std;
int main ()
{
	//Write a program to find the sum of all elements in an integer array.
    int arr[] = {12,12,21,12};
    int brr[] = {14,78,87,87};
    int sum=0;
    
    for(int i=0;i<4;i++)
    {
    	sum=arr[i]+brr[i];
    	cout<<"sum of "<<arr[i]<<"+"<<brr[i]<<"= "<<sum<<endl;
	}
	
    


	return 0;
}
