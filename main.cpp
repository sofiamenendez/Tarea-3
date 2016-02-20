#include <iostream>
#include<stdio.h>


using namespace std;

int main()
{   int tabla;
    char resp;
    int respx;
    int i;

do
  {

        do
        { cout << "Tabla de multiplicar....:";
          cin>>tabla;
        } while ((tabla<5) or (tabla>10));

        for(i=0;i<=10;i++)
        {
          respx=tabla * i;
          cout<<i<<" X "<<tabla<<" = "<<respx<<"\n";
        }
        _flushall();

        do
        {
            cout<<"Desea Continuar...:";
            cin.get(resp);
            _flushall();

        } while ((toupper(resp) !='S') and (toupper(resp) !='N'));
  } while (toupper(resp) =='S');

    return 0;
}
