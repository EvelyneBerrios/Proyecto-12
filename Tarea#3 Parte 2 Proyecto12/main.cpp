#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  int tabla;
  int respx;
  char resp;
  int i;
  do
  {

  do
{
  cout<<"Tabla de multiplicar....:";
  cin>>tabla;

}while((tabla<5) or (tabla>10));

  for(i=0
      ;i<10;i++)
  {
    respx= tabla * i;
    cout<<i<<" x "<<tabla<<" = "<<respx<<"\n";
  }
  _flushall();
  do
  {
      cout<<"Desea continuar...:";
      cin.get (resp);
      _flushall();

  }while ((toupper(resp) !='s') and (toupper(resp) != 'N'));
  }while (toupper (resp) == 'S');
    return 0;
}
