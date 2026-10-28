#include<iostream>
using namespace std;
template< class T> // class is typename T is placeholder
T add(T m,T n)
{
    return m+n;
   
}
int sub(int m,int n)
{
    return m-n;
}
int main()
{
    cout<<"\n the add is \t";
    cout<< add<double>(4,6);
    cout<<"\n"<< add<char>('A','B');
    cout<<"\n the sub is \t";
    cout<<sub(4,6);
    return 0;
}
