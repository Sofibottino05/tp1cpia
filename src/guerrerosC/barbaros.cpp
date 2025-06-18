#include "../../headers/guerrerosH/barbaros.hpp"
#include <iostream>

using namespace std; 

Barbaro::Barbaro() { nombre = "barbaro"; tipo = "comun"; defensa = false; vida = 100; }
void Barbaro::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Barbaro] " << e.what() << endl; }
}
