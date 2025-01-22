#include <iostream>
using namespace std;        
int main()
{
    int num;
    cin>>num;
    cout<<"Your number is: "<<num<<endl;

    // Type Casting
    char c = 'A';
    cout<<int(c)<<endl; 

    long long int b = (long long int) (num);

    return 0;
}