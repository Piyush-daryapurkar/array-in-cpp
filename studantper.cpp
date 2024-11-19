#include<iostream>
using namespace std;
int main ()
{
	int arr[5];
    int brr[5];
    int crr[5];
	int drr[5];
	int err[5];	
	
	for(int i=0;i<5;i++)
	{
		cout<<"enter first studant marks sub "<<i+1<<": ";
		cin>>arr[i];	
	}
	cout<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"enter sec studant marks sub "<<i+1<<": ";
		cin>>brr[i];	
	}
	cout<<endl;
		for(int i=0;i<5;i++)
	{
		cout<<"enter third studant marks sub "<<i+1<<": ";
		cin>>crr[i];	
	}
	cout<<endl;
		for(int i=0;i<5;i++)
	{
		cout<<"enter forth studant marks sub "<<i+1<<": ";
		cin>>drr[i];	
	}
	cout<<endl;
		for(int i=0;i<5;i++)
	{
		cout<<"enter fifth studant marks sub "<<i+1<<": ";
		cin>>err[i];	
	}
	cout<<endl;
	
	
	int t0=0,t1=0,t3=0,t4=0,t2=0;
	float per0=0,per1=0,per2=0,per3=0,per4=0;	
	
	
	for(int i=0;i<5;i++)
	{
		t0+=arr[i];
		
	}
	
	per0=t0/5.0;
	cout<<"first studant marks: "<<t0<<endl;
    cout<<"first studant percentage: "<<per0<<"%"<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		t1+=brr[i];
	}
	per1=t1/5.0;
	cout<<"sec studant marks  : "<<t1<<endl;
	cout<<"sec studant percentage: "<<per1<<"%"<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		t2+=crr[i];
	}
	per2=t2/5.0;
	cout<<"third studant marks: "<<t2<<endl;
	cout<<"third studant percentage: "<<per2<<"%"<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		t3+=drr[i];
	}
	per3=t3/5.0;
	cout<<"forth studant marks: "<<t3<<endl;
	cout<<"forth studant percentage: "<<per3<<"%"<<endl;
	cout<<endl;
	
	for(int i=0;i<5;i++)
	{
		t4+=err[i];
	}
	per4=t4/5.0;
	cout<<"fifth studant marks: "<<t4<<endl;
	cout<<"fifth studant percentage: "<<per4<<"%"<<endl;
	cout<<endl;
	
	
	int trr[5]={per0,per1,per2,per3,per4};
	float max=brr[0];
	for(int i=0;i<5;i++)
	{
		if (brr[i]>max)
		{
			max=trr[i];
		}
		
	}
	
	cout<<"topper with "<<max<<"%";

	





	return 0;
}
