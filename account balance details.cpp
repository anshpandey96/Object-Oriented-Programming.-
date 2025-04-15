#include <iostream>
using namespace std;
class Account
{
    char name[30];
    float balance;
    int aeno;

public:
    void input()
    {
        cout << "Enter the name:->";
        cin >> name;
        cout << "Enter the balance:->";
        cin>>balance;
        cout << "Enter account no:->.";
        cin >> aeno;
    }

    void show()
    {
        cout << "Name is:->" << name << endl;
        cout << "Initial balance is:->" << balance << endl;
        cout << "Account no is:->" << aeno << endl;
    }
    float getBalance()
    {
        return balance;
    }
    char* getName()
    {
        return name;
    }
    void setBalance(int x){
        balance=x;
        cout<<"Balance is:"<<balance<<endl;
    }
};
int main()
{
    Account a, b;
    a.input();
    b.input();
    if(a.getBalance() > b.getBalance())
    {
        cout << a.getName() << " has more balance";
        b.setBalance(a.getBalance());
    }
    else
    {
        cout << b.getName() << " Has more balance:";
        a.setBalance(b.getBalance());
    }
    a.show();
    b.show();
    return 0;
}
