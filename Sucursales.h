#include <string>
using namespace std;


class Sucursales{
  private:
    string nombreSucursal;

  public:
    Sucursales();
    Sucursales(string);
    void agregar();
    void modificar();
    void borrar();
    void asociaE();
    string getnombreSucursal();



}
