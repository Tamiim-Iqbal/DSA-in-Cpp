/**
 *   author:  TAMIM IQBAL
 *   created: 02/03/2025 20:28:25
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;

    if(a % b == 0 || b % a == 0) cout<<"Multiples"<<endl;
    else cout<<"No Multiples"<<endl;
    return 0;
}