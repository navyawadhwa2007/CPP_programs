#include <iostream>
using namespace std;
int add(int a, int b)
{
cout<<"Running calculator...\n";
return(a+b);
}
int main()
{
    int a,b;
    cout<<"Enter a\n";
    cin>>a;
    cout<<"Enter b\n";
    cin>>b;
    cout<<"The sum is= "<<add(a,b);
    return 0;
    
}
