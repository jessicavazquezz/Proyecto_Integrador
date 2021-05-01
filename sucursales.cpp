#include <string>
#include "Sucursales.h"
using namespace std;

Sucursales::Sucursales(){
  sucursal = new sucursal[1];
  s = 1;
  sizeS = 1;
  nombre1 = "Sucursal 1";
  nombre2 = "Sucursal2";
}


void Sucursales::agregar(int s){
  return sucursal;

}

void Sucursales::modificar(){
  for(int i = 0, i < 2, i++){
    if (sucursales[i] == 1 || sucursales[i] == 2){
    }
  }
return sucursal;
}

void Sucursales::borrar(){
  for(int i = 0, i < 2, i++){
    sucursal[i] == sucursal -1;
  }
return sucursal;
}

void Sucursales::asociaE(){
  Empleadoas = 0
  for(sucursal[i], Empleadoas ++){
    Empleadoas = Empleadoas + 1;
  }
return Empleadoas;
}

string Sucursales::getnombreSucursal(int n){
  if(int n = 1){
    return nombre1;
  }
  if(int n = 2){
    return nombre2;
  }
  else(){
    cout << "La sucursal no existe";
  }
}
