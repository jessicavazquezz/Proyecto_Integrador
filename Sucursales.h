#include <string>
using namespace std;


class Sucursales{
  private:
    string nombreSucursal;

  public:
    Sucursales();
    Sucursales(string);
    virtual void agregar(int);
    virtual void modificar();
    virtual void borrar();
    void asociaE();
    string getnombreSucursal();
    string nombresuc1();
    string nombresuc2();
    int sizeS();
    int s();



}
