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
    void print(){
        cout<<this->name<<endl<<this->runs<<endl<<this->avg<<endl;/* hear i write "this" keyword because if i enter any parameter of similar data member name 
        and enter value in that than compiler change the value of previous attribute.*/
    }
    int match(){
        int match=runs/avg;
        return match;
    }
    
};
int main(){
    cricketer c1("Virat kohli",25000, 50);
    cricketer c2("rohit Sharma",15000,40 );
    c1.print();
    c2.print();
    cout<<c1.match()<<endl;
    cout<<c2.match()<<endl;
    return 0;

}
