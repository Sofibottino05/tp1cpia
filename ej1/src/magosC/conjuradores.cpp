#include "../../headers/magosH/conjuradores.hpp"

Conjurador::Conjurador() { nombre = "conjurador"; tipo = "epico"; defensa = false; vida = 100; }
void Conjurador::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Conjurador] " << e.what() << endl; }
}
