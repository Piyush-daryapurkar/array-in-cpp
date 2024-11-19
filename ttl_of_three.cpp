#include<iostream>
using namespace std;
int main ()
{
	int arr[5];
    int brr[5];
    int crr[5];
    for(int i=0; i<5; i++)
    {
        cout<<"ARR Enter marks of subject "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<"BRR Enter marks of subject "<<i+1<<" : ";
        cin>>brr[i];
    }
    for(int i=0; i<5; i++)
    {
        
        crr[i] = arr[i] + brr[i];
    }
    for(int i=0; i<5; i++)
    {
        cout<<"Marks of subject "<<i+1<<" : "<<crr[i]<<endl;
        
    }
    



	return 0;
}
