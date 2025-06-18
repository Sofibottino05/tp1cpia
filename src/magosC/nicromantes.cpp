#include "../../headers/magosH/nicromante.hpp"

Nigromante::Nigromante() { nombre = "nigromante"; tipo = "legendario"; defensa = false; vida = 100; }
void Nigromante::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Nigromante] " << e.what() << endl; }
}