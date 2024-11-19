#include<iostream>
using namespace std;
int main ()
{
	 int arr[5][4];
    
    
    for(int i=0;i<5;++i)
    {
    	for(int j=0;j<4;++j)
    	{
    		cout<<" enter the marks "<<" : ";
    	    cin>>arr[i][j];
		}
	}
	cout<<" "<<endl;
	cout<<" ......................."<<endl;
	cout<<" "<<endl;

	int t=0,t1=0,t2=0,t3=0,t4=0;
	for(int i=0;i<4;++i)
	{
		t+=arr[0][i];
	}
	for(int i=0;i<4;++i)
	{
		t1+=arr[1][i];
	}
	for(int i=0;i<4;++i)
	{
		t2+=arr[2][i];
	}
	for(int i=0;i<4;++i)
	{
		t3+=arr[3][i];
	}
	
	for(int i=0;i<4;++i)
	{
		t4+=arr[4][i];
	}
	
	
	cout<<" the totel of student 1 : "<<t<<endl<<" the totel of student 2 : "<<t1<<endl<<" the totel of student 3 : "<<t2<<endl<<" the totel of student 4 : "<<t3<<endl<<" the totel of student 5 : "<<t4<<endl;
	cout<<" "<<endl;
	cout<<" ......................."<<endl;
	cout<<" "<<endl;
	cout<<" the persentage of std 1:  "<<t/4<<"%"<<endl;
	cout<<" the persentage of std 2:  "<<t1/4<<"%"<<endl;
	cout<<" the persentage of std 3:  "<<t2/4<<"%"<<endl;
	cout<<" the persentage of std 4:  "<<t3/4<<"%"<<endl;
	cout<<" the persentage of std 5:  "<<t4/4<<"%"<<endl;
	cout<<" "<<endl;
	cout<<" ......................."<<endl;
	cout<<" "<<endl;
	t=t/4;
	t1=t1/4;
	t2=t2/4;
	t3=t3/4;
	t4=t4/4;
	
	int brr[5]={t,t1,t2,t3,t4};
	int max=brr[0];
	for(int i=0;i<5;++i)
	{
		if (brr[i]>max)
		{
			max=brr[i];
		}
		
	}
	
	cout<<" THE FIRST RANK IS  : "<<max<<"%"<<endl;



	return 0;
}
