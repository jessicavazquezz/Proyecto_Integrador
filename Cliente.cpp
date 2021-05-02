#include <string>
#include "Sucursales.h"
#include "Inventario.h"
#include "Cliente.h"
using namespace std;




Cliente::Cliente(){
    cliente= new cliente[];
    nombre= "" ;
    telefono= "";
    fecha_nacimiento= "";
    sexo= "";
    rfc= "";
  
}

Cliente::Cliente(string nom, string dir, string tel, string fechan, string genero, string _rfc){
    nombre= nom ;
    direccion= dir;
    telefono= tel;
    fecha_nacimiento= fechan;
    sexo= genero;
    rfc= _rfc;
}

void Cliente::agregar(string nombre, string telefono, string fecha_nacimiento, string sexo,  string rfc){
    int dato0= sizeof(cliente)+1;
    string dato1 = nombre;
    string dato2= telefono;
    string dato3= fecha_nacimiento;
    string dato4= sexo;
    string dato5= rfc;
    cliente[dato0] = [dato1, dato2, dato3, dato4, dato5];

}

void Cliente::modificar(int nocliente, string nombre, string telefono, string fecha_nacimiento, string sexo,  string rfc){
    int dato0= nocliente;
    string dato1 = nombre;
    string dato2= telefono;
    string dato3= fecha_nacimiento;
    string dato4= sexo;
    string dato5= rfc;
    cliente[dato0] = [dato1, dato2, dato3, dato4, dato5];

}

void Cliente::borrar(int nocliente){
    int dato0 = nocliente;
    string dato1 = "";
    string dato2= "";
    string dato3= "";
    string dato4= "";
    string dato5= "";
    cliente[dato0] = [dato1, dato2, dato3, dato4, dato5];

}
