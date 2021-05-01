#include <string>
#include "Inventario.h"
using namespace std;

Inventario::Inventario(){
  producto = new producto[];
  nombre = "";
  codigo = 0;
  precio = 0;
  cantidad = 0;
  peso = 0;
  tamano = 0;
  
}


void Inventario::agregar(string nombre, int codigo, double precio, int cantidad, double peso, double tamano){
    int dato0= sizeof(producto)+1;
    string dato1 = nombre;
    string dato2= codigo;
    string dato3= precio;
    string dato4= cantidad;
    string dato5= peso;
    string dato6= tamano;
    producto[dato0] = [dato1, dato2, dato3, dato4, dato5, dato6];

}

void Inventario::modificar(int noproducto, string nombre, int codigo, double precio, int cantidad, double peso, double tamano){
    int dato0 = noproducto;
    string dato1 = nombre;
    string dato2= codigo;
    string dato3= precio;
    string dato4= cantidad;
    string dato5= peso;
    string dato6= tamano;
    producto[dato0] = [dato1, dato2, dato3, dato4, dato5, dato6];

}

void Inventario::borrar(int noproducto){
    int dato0 = noproducto;
    string dato1 = "";
    string dato2= "";
    string dato3= "";
    string dato4= "";
    string dato5= "";
    string dato6= "";
    producto[dato0] = [dato1, dato2, dato3, dato4, dato5, dato6];

}

