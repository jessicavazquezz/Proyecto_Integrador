#include <iostream>
#include <string>
#include "Sucursales.h"

class Inventario{
  private:
    string nombreproducto;
    int codigoproducto;
    double preciocompra;
    int cantidadproductos;
    double peso;
    double tamano;

  public:
    Inventario();
    Inventario(string, int, double, int, double, int, double, double);
    void agregar();
    void modificar();
    void borrar();
    string getnombreproducto();
    int getcodigoproducto();
    double getpreciocompra();
    int getcantidadproductos();
    double getpeso();
    double gettamano();
    void generaorden();



}
