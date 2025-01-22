#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);     //take space (not enter)
    cout<<s<<endl;
    cout<<"String size: "<<strlen(s);
    return 0;
}