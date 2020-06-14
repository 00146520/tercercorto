#include "iostream"
#include "stdlib.h"
#include "stdio.h"
using namespace std;

//son bisiestos si cumplen ciertas normas

char resultado(int a){
//divisible entre 400
//divisible entre 4 y no divisible entre 100
        if (a%4 !=0|| a % 100==0 && a % 400 != 0 )
    {
        cout<<"El anho no es bisiesto"<<endl;
    }
    else
    {
        cout<<"El anho es bisiesto"<<endl;
    }
    
    return 0;
}

int main()
{
    int a;
    cout<<endl<<"Conozca si es anho bisiesto"<<endl;
    cout<<"Ingrese el anho: "<<endl; cin>>a;
    cout<<resultado(a);
}
