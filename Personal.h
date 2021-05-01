#include "Cliente.h"
#include <string>
using namespace std;

class Personal : public Cliente
{

private:
    string cargo;
public: 
    Personal();
    Personal(string, string, int, string, string, string, string,string);

};
