//1. Write a program to input an integer, float, double, character, string and output the values to the standard output.
#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int a;
    float b;
    double c;
    char d;
    string e;
    cin>>a>>b>>c>>d;
    cin.ignore(); //To avoid storage of \n. Read more: https://www.quora.com/In-C++-how-can-I-input-strings-with-blank-spaces
    getline(cin , e); 
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
    return 0;
}