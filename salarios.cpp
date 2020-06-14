#include "iostream"
using namespace std;
//salario total
float salarioT (float horasN, float horasX)
{
float sT;
sT= (horasN*1.75)+(horasX*2.50);
return sT;
}
//salario real
float salarioR (float horasN, float horasX )
{
float sR, sT;
sT= (horasN*1.75)+(horasX*2.50);
//si el salario es mayor de 500, se descueta el 10% de renta
 if (sT>500)
 {
     sR= sT-(sT*(0.04+0.0625+0.10)); 
    return sR;
 }
 //si el salario es menor de 500, no se descuenta el 10% de renta
 else
 {
     sR= sT-(sT*(0.04+0.0625));
     return sR;
 }
}

int main()
{
int i, numEm;
float horasN, horasX;
cout<<endl<<"Calcular salario de empleados"<<endl;
cout<<endl<< "Numero de empleados: "<<endl; cin>>numEm;
//depende del número de empleados se repetirá el código
for (i = 1; i <=numEm; i++)
{
cout<<"Empleado: "<<i<<endl;
cout<<"Horas laboradas por el empleado: "<<endl; cin>>horasN;
cout<<"Horas extras laboradas por el empleado: "<<endl; cin>>horasX;
cout<<"El salario total es: "<<salarioT(horasN, horasX)<<endl;
cout<<"El salario real es: "<<salarioR(horasN, horasX)<<endl;
cout<<endl;
}
cout<<endl;
return 0;
cout<<endl;
}