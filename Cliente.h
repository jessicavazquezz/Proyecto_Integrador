#include <iostream>
#include <string>
#include "Sucursales.h"
//Tanto los empleadoscomo los clientes cuentan con información personalque está compuesta por: Nombre, Dirección, Teléfono, Fecha de nacimiento, Sexo.
class Cliente{
  private:
    string nombre;
    string direccion;
    int telefono;
    string fecha_nacimiento;
    string sexo;
    string tipo;
    string rfc;

  public:
    Cliente();
    Cliente(string, string, int, string, string, string, string);
    void agregar();
    void modificar();
    void borrar();
}
