#include <iostream>
#include <string>
#include "Sucursales.h"

class Inventario{
  private:
    string nombreproducto1;
    string nombreproducto1;
    int codigoproducto1;
    int codigoproducto2;
    double preciocompra;
    int cantidadproductos;
    double peso;
    double tamano;

  public:
    Inventario();
    Inventario(string, string, int, int, double, int, double, int, double, double);
    void agregar();
    void modificar(int);
    void borrar(int);
    string getnombreproducto();
    int getcodigoproducto();
    double getpreciocompra();
    int getcantidadproductos();
    double getpeso();
    double gettamano();
    void generaorden();
    void muestraOrden();


}
