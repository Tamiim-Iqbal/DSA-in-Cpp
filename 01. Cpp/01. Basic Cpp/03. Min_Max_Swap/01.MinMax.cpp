// #include<iostream>
// using namespace std;
// int my_min(int a,int b)
// {
//     if(a<b) return a;
//     else return b;
// }
// int my_max(int a,int b)
// {
//     if(a>b) return a;
//     else return b;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     int mn=my_min(a,b);
//     int mx=my_max(a,b);
//     cout<<"Min:"<<mn<<" "<<"Max: "<<mx<<endl;
//     return 0;
// }


#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    cout<<"Min:"<<mn<<" "<<"Max:"<<mx<<endl;

    int x, y, z;
    cin>>x>>y>>z;
    int multiMin = min({x,y,z});
    int multiMax = max({x,y,z});

    cout<<"Min:"<<multiMin<<" "<<"Max:"<<multiMax<<endl;
    return 0;
}