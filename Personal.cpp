#include "Personal.h"
#include <iostream>
using namespace std;

Personal::Personal(){
    cargo= "";
}

Personal::Personal(string nombre, string telefono, string fecha_nacimiento, string sexo,  string rfc){
    nombre = nombre;
    telefono = telefono;
    fecha_nacimiento = fecha_nacimiento;
    sexo = sexo;
    rfc = rfc;
}



