#include "../../headers/magosH/brujos.hpp"

Brujo::Brujo(string nombre, string tipo, bool defensa, int vida) :
    Magos(nombre, tipo, defensa, vida) {};
void Brujo::accionar(const string& arma, shared_ptr<Personajes> objetivo) {
    try { getArmaBN(arma)->atacar(objetivo); } catch (const exception& e) { cerr << "[Error Brujo] " << e.what() << endl; }
}
