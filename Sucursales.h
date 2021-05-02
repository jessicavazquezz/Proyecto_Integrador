#include <string>
using namespace std;


class Sucursales{
  private:
    Sucursales *sucursal;
    string nombresucursal;
    string direccionsucursal;
    int cantidadempleados;
    int cantidadproductos;
 
    
    

  public:
    Sucursales();
    Sucursales(string, string, int, int);
    void setnombresucursal(string);
    void setdireccionsucursal(string);
    void setcantidadempleados(int);
    void setcantidadproductos(int);
    string getnombresucursal();
    string getdireccionsucursal();
    int getcantidadempleados();
    int getcantidadproductos();
    virtual void agregar();
    virtual void modificar();
    virtual void borrar();
    void asociaE();
    void transferir();
    void editarproducto();

    
};
