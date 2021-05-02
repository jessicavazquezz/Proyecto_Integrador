#include <iostream>
#include "Sucursales.hpp"
#include "Cliente.hpp"
#include "Inventario.hpp"
#include "Personal.hpp"


int main() {
    Personal persona1("Diego", "Monterrey", "8115143250", "Enero 24 2001", "Hombre", "345303", "Gerente");
    Personal persona2("David", "Guadalajara", "7898909890", "Febrero 23 2000", "Hombre", "567788", "vendedor");
    Personal persona3("Ana", "Queretaro", "776545678", "Marzo 23 2000", "Mujer", "0987", "Administrador");
    
    Sucursales sucursal1("Sucursal Monterrey", "Alfonso Reyes 310", 5,10);
    Sucursales sucursal2("Sucursal Guadalajara", "Lopez Mateos 435", 6, 12);
    
    Inventario::agregar("Chorizo",23423,20.3,15,300,40);
    Inventario::agregar("Pierna",323211,19.3,27,250,23);
    Inventario::agregar("Chistorra",123432,8,15,170,15);
    Inventario::agregar("Pepino",3344,40,12,135,17);
    
    
    Cliente::agregar("Susanita", "Guerrero", "7723232378", "Junio 27 2001", "Mujer", "1787");
    Cliente::agregar("Pedro", "Guadalajara", "3232378090", "Junio 20 2003", "Hombre", "1787");
    Cliente::agregar("Susanita", "Guerrero", "7723232378", "Junio 27 2001", "Mujer", "1787");
    
    Personal persona1(cliente);
    
    
}
