#include <iostream>
#include <string>
#include "Sucursales.h"

class Inventario{
  protected:
    string nombreproducto;
    int codigoproducto;
    double preciocompra;
    int cantidadproductos;
    double pesoproducto;
    double tamanoempaque;

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
