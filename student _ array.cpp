#include<iostream>
using namespace std;
class student
{
    char name[20];
    int marks;
    public:
    void input()
    {
    cout<<"Entetr the student name and marks:"<<endl;
    cin>>name>>marks;
    }
      void show()
{
    cout<<"Name is "<<name<<endl;
    cout<<"Marks is "<<marks<<endl;
}
};
    int main()
    {

        int n,i;
        student *a[10];
        cout<<"Enter how many student are there :";
        cin>>n;
        cout<<"Enter the studnet detials:"<<endl;
        for (i=0;i<n;i++)
        {
            a[i] = new student;
            a[i]->input();
        }

        cout<<"Enterned student are :";
        for(i=0;i<n;i++)
           a[i]->show();

        return 0;
    }

