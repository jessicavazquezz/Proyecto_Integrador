#include <iostream>
#include <string>
#include "Sucursales.h"

class Personas{
  private:
    string nombre1;
    string nombre2;
    string nombre3;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    string sexo;
    string tipo;
    string rfc1;
    string rfc2;
    string rfc3;
    string cargo1;
    string cargo2;
    string cargo3;

  public:
    Personas();
    Personas(string,string, string, string, int, string, string, string, string, string, string, string, string, string);
    string getnombre();
    string getdireccion();
    int gettelefono();
    string getfecha_nacimiento();
    string getsexo();
    string gettipo();
    string getrfc();
    string getcargo();
    void agregar();
    void modificar();
    void borrar();
}
