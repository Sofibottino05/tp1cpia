#include "../../headers/magicasH/itemsmagicosH.hpp"

ItemsMagicos::ItemsMagicos(string n, string t, string a, int u, int d) : nombre(n), tipo(t), accion(a), activo(true), usos(u), danio(d) {}
string ItemsMagicos::getNombre() const { return nombre; }
string ItemsMagicos::getTipo() const { return tipo; }
string ItemsMagicos::getAtaque() const { return accion; }
string ItemsMagicos::getInfo() const { return nombre + " (" + tipo + ")"; }
bool ItemsMagicos::estaActivo() const { return activo; }
int ItemsMagicos::getUsos() const { return usos; }
double ItemsMagicos::getDanio() const { return danio; }
void ItemsMagicos::atacar(shared_ptr<Personajes> p) {
    if (!p || usos <= 0) return;
    if (accion == "vida") p->recibirVida(danio);
    else p->recibirDanio(danio);
    if (--usos == 0) activo = false;
}

