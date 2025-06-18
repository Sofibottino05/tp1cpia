#include "../../headers/magosH/magos.hpp"

string Magos::getNombre() const { return nombre; }
string Magos::getTipo() const { return tipo; }
string Magos::getPoder() const { return "magia"; }
string Magos::getInfo() const { return nombre + " (" + tipo + "), vida: " + to_string(vida); }
bool Magos::getDefensa() const { return defensa; }
double Magos::getVida() const { return vida; }
void Magos::recibirDanio(int d) { vida -= d; }
void Magos::recibirVida(int d) { vida += d; }
void Magos::agregarArma(shared_ptr<Armas> a) { armas.push_back(a); }
void Magos::quitarVida(int v) { vida -= v; }
vector<shared_ptr<Armas>> Magos::getArmas() const { return armas; }
shared_ptr<Armas> Magos::getArmaBN(const string& n) const {
    for (auto& i : armas) if (i->getNombre() == n) return i;
    throw runtime_error("Item no encontrado: " + n);
}