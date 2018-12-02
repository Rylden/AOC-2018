#include<iostream>
#include<fstream>
#include"string.h"
#include<vector>
using namespace std;
int main()
{
    int r=0;
   ifstream f("d1.txt");
    string s;
    vector<int> v;

    int i = 0;
    while (getline(f, s)) { //while !(end of file)
        int a = stoi(s); // convert string into int
        v.push_back(a);
        i++;

}
for (int j=0;j<v.size();j++)
{
    r+=v[j];
}
cout<<r;

}
