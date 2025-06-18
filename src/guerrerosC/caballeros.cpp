#include "../../headers/guerrerosH/caballeros.hpp"
#include <iostream>

using std::cerr;
using std::endl;
using std::exception;


Caballero::Caballero() { nombre = "caballero"; tipo = "epico"; defensa = false; vida = 100; }
void Caballero::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Caballero] " << e.what() << endl; }
}
