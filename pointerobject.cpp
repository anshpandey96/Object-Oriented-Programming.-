#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    float avg;
    cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    } 
};
void change(cricketer* c){
    c->avg=60;// (*c).avg=60;
}
int main(){
    // int x=4,y=5;
    // cout<<&x<<endl<<&y<<endl;
    // int*p=&x;
    // cout<<*p<<endl;
    // *p=10;
    // cout<<x;
    cricketer c1("Virat kohli",25000, 50);
    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
    // cricketer c2("rohit Sharma",15000,40 );
    cricketer* p1=&c1;
    cout<<p1->runs<<endl;//(*p1).runs
    p1->runs=26000;//(*p1).runs=26000;
    cout<<c1.runs<<endl;
    return 0;

}