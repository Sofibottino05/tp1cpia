#include "../../headers/magosH/hechiceros.hpp"

Hechicero::Hechicero() { nombre = "hechicero"; tipo = "comun"; defensa = false; vida = 100; }
void Hechicero::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Hechicero] " << e.what() << endl; }
}
