#include<iostream>
using namespace std;
int main{
//multiple inheritance- A class can also be derived from more than one base class.
class A{
    int a=18;
    void msg(){
        cout<<"class A";
    }
    class B:public A
}}