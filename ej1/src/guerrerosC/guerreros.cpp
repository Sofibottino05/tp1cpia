#include "../../headers/guerrerosH/guerreros.hpp"

string Guerreros::getNombre() const { return nombre; }
string Guerreros::getTipo() const { return tipo; }
string Guerreros::getPoder() const { return "fuerza"; }
string Guerreros::getInfo() const { return nombre + " (" + tipo + "), vida: " + to_string(vida); }
bool Guerreros::getDefensa() const { return defensa; }
double Guerreros::getVida() const { return vida; }
void Guerreros::recibirDanio(int d) { vida -= d; }
void Guerreros::recibirVida(int d) { vida += d; }
void Guerreros::agregarArma(shared_ptr<Armas> a) { armas.push_back(a); }
void Guerreros::quitarVida(int v) { vida -= v; }
vector<shared_ptr<Armas>> Guerreros::getArmas() const { return armas; }
shared_ptr<Armas> Guerreros::getArmaBN(const string& n) const {
    for (auto& i : armas) if (i->getNombre() == n) return i;
    throw runtime_error("Arma no encontrada: " + n);
}