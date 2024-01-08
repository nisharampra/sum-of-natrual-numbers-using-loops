//
//  main.cpp
//  sum of natrual numbers using loops
//
//  Created by Nisha Ramprasath on 28/10/23.
//
#include<iostream>
using namespace std;
    
int main()
{
    int n,i,sum=0;
    cout<<"Enter the Number";
    cin>>n;
        
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of Natural no is"<<sum<<endl;
        
    return 0;
        
}
