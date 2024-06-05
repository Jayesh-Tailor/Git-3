#include<iostream>
using namespace std;
int main(){

    float a,b;

    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;

    cout<<"addition is "<<(a+b)<<endl;
    cout<<"Sbstraction is "<<(a-b)<<endl;
    cout<<"Multiplication is "<<(a*b)<<endl;
    cout<<"Division is "<<(a/b)<<endl;
    cout<<"Entered Numbers are [(0 = not equal)(1 = equal)]"<<endl<<(a==b)<<endl;

    return 0;
}