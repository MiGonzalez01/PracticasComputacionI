
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    double r;
    cout<<"primer Numero: ";
    cin>>n1;
    cout<<"operador (+,-,*,/,%): ";
    cin>>op;
    cout<<" segundo Numero: ";
    cin>>n2;
    switch(op)
    {
        case '+': r=n1+n2; break;
        case '-': r=n1-n2; break;
        case '*': r=n1*n2; break;
        case '/': r=n1/n2; break;
        case '%': r=n1%n2; break;
        default: cout<<"Operador no definido";
            exit(1);
    }
    cout<<"El resultado es: <<r;
}

