#include "../../headers/guerrerosH/paladin.hpp"

Paladin::Paladin() { nombre = "paladin"; tipo = "comun"; defensa = false; vida = 100; }
void Paladin::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Paladin] " << e.what() << endl; }
}
