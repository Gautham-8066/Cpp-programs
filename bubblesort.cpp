#include<iostream>
#include<conio.h>
using namespace std;
int main() 
{
    int i,j,n,temp,ar[100];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<("Enter the elements to be sorted:");
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
            temp=ar[j];
            ar[j]=ar[j+1];
            ar[j+1]=temp;
        }}
    }
    cout<<"The sorted array:";
    for(i=0;i<n;i++)
    {
        cout<<ar[i];
        cout<<" ";
        
    }

}