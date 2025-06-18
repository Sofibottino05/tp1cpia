#include "../../headers/guerrerosH/gladiador.hpp"

Gladiador::Gladiador() { nombre = "gladiador"; tipo = "legendario"; defensa = false; vida = 100; }
void Gladiador::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Gladiador] " << e.what() << endl; }
}