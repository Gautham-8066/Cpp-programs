#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    
    int n1,n2,sum=0,dif,mtply,div,num=1;
    char op;
    while(num==1){
    cout<<"+  -  *  /";
    cout<<"\n Enter the operation you want to do:";
    cin>>op;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    switch(op)
    {
        case '+':
        {       sum=n1+n2;
                cout<<sum;
                break;
        } 
        case '-':{
                dif=n1-n2;
                cout<<dif;
                break;
        } 
        case '*':
        {
            mtply=n1*n2;
                cout<<mtply;
                break;
        }
        case '/':
        {if(n2!=0)
        {
                div=n1/n2;
                cout<<div;
                
        }
        else
        {
            cout<<"Division not possible";
            
        }
        break;}
         
        default:{cout<<"Invalid input of operation"; 
        break;}

    }
    
    cout<<"\n If you want to use the calculator again type 1";
    cout<<"\n To end type 0 \n";
    cin>>num;
}
    return 0;
}
