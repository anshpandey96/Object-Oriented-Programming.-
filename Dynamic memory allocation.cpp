#include<iostream>
using namespace std;
    int main()
    {

        int n,i,*p;
        cout<<"Enter how many number are there :";
        cin>>n;
        p = new int[n];
        cout<<"Enter the elements:"<<endl;
        for (i=0;i<n;i++)
        cin>>p[i];

        cout<<"Enterned Number are :";
        for(i=0;i<n;i++)
       cout<<p[i]<<endl;
        delete p;
        return 0;
    }

