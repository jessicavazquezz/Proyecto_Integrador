
#include "Cliente.hpp"
#include <string>
using namespace std;

class Personal : public Cliente
{

private:
    string cargo;
public:
    Personal();
    Personal(string, string, string, string, string,string,string);

};
