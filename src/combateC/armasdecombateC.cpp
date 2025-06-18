#include "../../headers/combatesH/armasdecombateH.hpp"

ArmasDeCombate::ArmasDeCombate(string n, string t, string a, int u, int d) : nombre(n), tipo(t), accion(a), activo(true), usos(u), danio(d) {}
string ArmasDeCombate::getNombre() const { return nombre; }
string ArmasDeCombate::getTipo() const { return tipo; }
string ArmasDeCombate::getAtaque() const { return accion; }
string ArmasDeCombate::getInfo() const { return nombre + " (" + tipo + ")"; }
bool ArmasDeCombate::estaActivo() const { return activo; }
int ArmasDeCombate::getUsos() const { return usos; }
double ArmasDeCombate::getDanio() const { return danio; }
void ArmasDeCombate::atacar(shared_ptr<Personajes> p) {
    if (!p || usos <= 0) return;
    p->recibirDanio(danio);
    if (--usos == 0) activo = false;
}