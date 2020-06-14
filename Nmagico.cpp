#include "iostream"
#include "conio.h"
#include "time.h"
#include "stdlib.h"
using namespace std;

void intento();
int main()
{
    cout<<endl;
    //especificar reglas
    cout<<"Numero magico"<<endl;
    cout<<"Reglas:"<<endl;
    cout<<"- Tienes 5 intentos para adivinar el numero"<<endl;
    cout<<"- El numero a adivinar esta desde el 1 al 100"<<endl;
     cout<<"- Solo se utilizan numeros enteros"<<endl;
      cout<<"- Si ya no quiere continuar, presione Ctrl + z"<<endl;
     cout<<"Empieza el juego"<<endl;
    intento();
    getch();
    return 0;
}
void intento(){
    int cont=0, Resp, Int;
    srand(time(NULL));
    Resp= 1 + rand()%(100);
    //filtro para llegar al numero creado
    do{
        cout<<"Digite un numero: "<<endl; cin>>Int;
        if (Int>Resp)
        {
            cout<<"Incorrecto, su numero es mayor a la respuesta, intentelo de nuevo."<<endl;
        }
        else if (Int<Resp)
        {
            cout<<"Incorrecto, su numero es menor a la respuesta, intentelo de nuevo."<<endl;
        }
        cont ++;
    }while ((Int!=Resp)&&(cont<5));
    
        if (cont>4)
        {
            cout<<"Ya no tiene mas intentos."<<endl;
        }
        else
        {
            cout<<"Lo lograste!, bien hecho."<<endl;
            cout<<"Intento numero: "<<cont<<endl;
        }
     
}