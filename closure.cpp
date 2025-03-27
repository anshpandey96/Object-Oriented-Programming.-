#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class group
{
    int set1[5], sum_st[5][5], mul_st[5][5];
    int modulo, sum = 0, add_st[5] = {0};

public:
    void enter_modul()
    {

        cout << "Enter a modulo : ";
        cin >> modulo;
    }
    void enter_element()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter an element : ";
            cin >> set1[i];
            sum += set1[i];
        }
    }
    void show_element()
    {
        cout << "My set is :\nG = { ";
        for (int i = 0; i < 5; i++)
        {
            cout << set1[i] << " , ";
        }
        cout << "\b\b}\n";
    }
    void sum_group()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                sum_st[i][j] = set1[i] + set1[j];
                if (sum_st[i][j] >= modulo)
                {
                    sum_st[i][j] %= modulo;
                }
                add_st[i] += sum_st[i][j];
            }
        }
    }
    void mul_group()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                mul_st[i][j] = set1[i] * set1[j];
                if (mul_st[i][j] >= modulo)
                {
                    mul_st[i][j] %= modulo;
                }
            }
        }
    }
    void show_sum_group()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << sum_st[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void show_mul_group()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << mul_st[i][j] << "\t";
            }
            cout << endl;
        }
    }
    void closure_law()
    {
        int st = 0, st_2nd = 0;
        for (int i = 0; i < 5; i++)
        {
            st += sum;
            st_2nd += add_st[i];

            /* for (int j = 0; j < 5; j++)
             {
                 if (sum_st[i][j] == set1[0] || sum_st[i][j] == set1[1] || sum_st[i][j] == set1[2] || sum_st[i][j] == set1[3] || sum_st[i][j] == set1[4])
                 {
                     cout<<"This group is closure property because element relate with group of G.\n";

                 }
                 else
                 {
                     cout<<"This group is not closure property because element not relate with group of G.\n";
                     break;
                 }
             }
            if(sum==add_st[i])
            {
             cout<<"This group is closure property because element relate with group of G.\n";

            }
            else
            {
             cout<<"This group is not closure property because element not relate with group of G.\n";
                     break;
            }
             cout << endl;
         }*/
        }
        if (st == st_2nd)
        {
            cout << "This group is closure property because element relate with group of G.\n";
        }
        else
        {
            cout << "This group is not closure property because element not relate with group of G.\n";
        }
    }
};
int main()
{
    group t1;
    t1.enter_modul();
    t1.enter_element();
    t1.show_element();
    t1.sum_group();
    t1.show_sum_group();
    t1.closure_law();
    return 0;
}