#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum;
    sum=0;
    cout<<"Enter your numbers :"<<endl;
    for(int i=0;i<=9;i++)
        cin>>arr[i];
    for(int i=0;i<=9;i++)
    {
        if(i==2)
	   {
            continue;
        }
        else 
	     if(i==4) 
	     {
            continue;
        }
        sum=sum+arr[i];
    }
    cout<<"Sum of array values with skipping the index 3 & 5 values is :";
    cout<<"'"<<sum<<"'";1
    1
    
    return 0;
}