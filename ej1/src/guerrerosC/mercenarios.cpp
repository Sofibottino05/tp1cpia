#include "../../headers/guerrerosH/mercenarios.hpp"

Mercenario::Mercenario() { nombre = "mercenario"; tipo = "epico"; defensa = false; vida = 100; }
void Mercenario::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Mercenario] " << e.what() << endl; }
}