#ifndef GUERREROS_HPP
#define GUERREROS_HPP

#include "../armas.hpp"
#include "../personajes.hpp"

#include <iostream>

using std::cerr;
using std::endl;
using std::exception;


class Guerreros : public Personajes {
protected:
    string nombre, tipo;
    bool defensa;
    int vida;
    vector<shared_ptr<Armas>> armas;
public:
    string getNombre() const override;
    string getTipo() const override;
    string getPoder() const override;
    string getInfo() const override;
    bool getDefensa() const override;
    double getVida() const override;
    void recibirDanio(int d) override;
    void recibirVida(int d) override;
    void agregarArma(shared_ptr<Armas> a) override;
    void quitarVida(int v) override;
    vector<shared_ptr<Armas>> getArmas() const override;
    shared_ptr<Armas> getArmaBN(const string& n) const override;
};

#endif