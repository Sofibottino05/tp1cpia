#ifndef ARMASDECOMBATEH_HPP
#define ARMASDECOMBATEH_HPP

#include "../armas.hpp"
#include "../personajes.hpp"

class ArmasDeCombate : public Armas {
protected:
    string nombre, tipo, accion;
    bool activo;
    int usos, danio;
public:
    ArmasDeCombate(string n, string t, string a, int u, int d);
    string getNombre() const override;
    string getTipo() const override;
    string getAtaque() const override;
    string getInfo() const override;
    bool estaActivo() const override;
    int getUsos() const override;
    double getDanio() const override;
    void atacar(shared_ptr<Personajes> p) override;
};

#endif