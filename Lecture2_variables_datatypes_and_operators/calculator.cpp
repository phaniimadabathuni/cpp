#include<iostream>
using namespace std;
int main()
{
    int num1, num2, sum,difference, product, quotient;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Difference: "<<difference<<endl;
    cout<<"Product: "<<product<<endl;
    cout<<"Quotient: "<<quotient<<endl;

    return 0;
}