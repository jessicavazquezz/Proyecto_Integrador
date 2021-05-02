#include <string>
#include "Sucursales.hpp"
#include <iostream>
using namespace std;

Sucursales::Sucursales(){
    sucursal = new Sucursales[100];
    nombresucursal = "";
    direccionsucursal= "";
    cantidadempleados = 0;
    cantidadproductos = 0;
    
    
}

Sucursales::Sucursales(string noms, string dirs, int cane, int canp){
    nombresucursal = noms;
    direccionsucursal= dirs;
    cantidadempleados = cane;
    cantidadproductos = canp;
    
}

void Sucursales::setnombresucursal(string noms){
    nombresucursal = noms;
}
void Sucursales::setdireccionsucursal(string dirs){
    direccionsucursal= dirs;
}
void Sucursales::setcantidadempleados(int cane){
    cantidadempleados = cane;
}
void Sucursales::setcantidadproductos(int canp){
    cantidadproductos = canp;
}
string Sucursales::getnombresucursal(){
    return nombresucursal;
}
string Sucursales::getdireccionsucursal(){
    return direccionsucursal;
}
int Sucursales::getcantidadempleados(){
    return cantidadempleados;
}
int Sucursales::getcantidadproductos(){
    return cantidadproductos;
}
void Sucursales::agregar(){
    int dato0= sizeof(sucursal)+1;
    string dato1 = nombresucursal;
    string dato2= direccionsucursal;
    int dato3= cantidadempleados;
    int dato4= cantidadempleados;
    sucursal[dato0] = [dato1, dato2, dato3, dato4];
}

void Sucursales::modificar(){
    for(int i = 0; i < 2; i++){
      if (sucursal[i] == 1 || sucursales[i] == 2){
      }
    }
  return sucursal;
  }
}
void Sucursales::borrar(){
    int dato0= sizeof(sucursal)-1;
    string dato1 = nombresucursal;
    string dato2= direccionsucursal;
    int dato3= cantidadempleados;
    int dato4= cantidadempleados;
    sucursal[dato0] = [dato1, dato2, dato3, dato4];
}
void Sucursales::asociaE(){
    Empleadoas = 0
    for(sucursal[i], Empleadoas ++){
      Empleadoas = Empleadoas + 1;
    }
  return Empleadoas;
  }
}
void Sucursales::transferir(){
    int Empleado = 0;
    for(int i = 0; i < 2; i++){
        for(int j=0; i<2; i++){
            if(sucursal[i] != sucursal[j]){
                Empleado = 1;
            }
        }
        if(Empleado > 0 ){
            cantidadempleados +1;
        }

            
}
    
void Sucursales::editarprodcuto(){
    int Empleado = 0;
    for(int i = 0; i < 2; i++){
        for(int j=0; i<2; i++){
            if(sucursal[i] != sucursal[j]){
                    Empleado = 1;
            }
        }
        if(Empleado > 0 ){
            cantidadempleados +1;
        }




