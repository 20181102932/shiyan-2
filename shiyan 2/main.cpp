#include<iostream>
#include<fstream>
using namespace std;
struct  student{
    char name[10];
    char number[10];
    char xy[10];
};
int main()
{
    student a;
    ifstream b("/Users/s20181102932/Desktop/in.txt");
    b>>a.xy>>a.number>>a.name;
    ofstream c("/Users/s20181102932/Desktop/out.txt");
    if(c.is_open())
    {
        c<<a.xy<<a.number<<a.name;
        c.close();
    }
    return 0;
}
