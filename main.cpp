#include <iostream>

#include "./headers/combatesH/espada.hpp"
#include "./headers/magicasH/baston.hpp"
#include "./headers/guerrerosH/barbaros.hpp"
#include "./headers/magosH/hechiceros.hpp"

using namespace std;

int main(){
   
    cout<<"Incizo 1: Verifico funcionamiento de mis clases.\n ";
    auto h = make_shared<Hechicero>();
    auto b = make_shared<Barbaro>();

    h->agregarArma(make_shared<Baston>());
    b->agregarArma(make_shared<Espada>());

    h->accionar("baston", b);
    b->accionar("espada", h);

    cout << h->getInfo() << endl;
    cout << b->getInfo() << endl;
}