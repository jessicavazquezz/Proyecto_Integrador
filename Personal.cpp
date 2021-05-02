#include "Personal.hpp"
#include <iostream>
using namespace std;

Personal::Personal(){
    cargo= "";
}

Personal::Personal(string nom, string dir, string tel, string fechan, string genero, string _rfc, string cargo ):Cliente(nom,dir,tel,fechan,genero,_rfc){
    this->cargo = cargo;
}



