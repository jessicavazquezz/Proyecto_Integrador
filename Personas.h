#include <iostream>
#include <string>
#include "Sucursales.h"

class Personas{
  private:
    string nombre;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    string sexo;
    string tipo;
    string rfc;
    string cargo;

  public:
    Personas();
    Personas(string,string, int, string, string, string, string, string);
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
