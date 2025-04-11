#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("story.text");
    fout<<"Hello"<<endl;
    fout<<"how are you"<<endl;
    fout.close();

    return 0;
}
