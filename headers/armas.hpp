
#ifndef ARMAS_HPP
#define ARMAS_HPP
#include "personajes.hpp"

using namespace std;

class Armas {
public:
    virtual ~Armas() = default;
    virtual string getNombre() const = 0;
    virtual string getTipo() const = 0;
    virtual string getAtaque() const = 0;
    virtual string getInfo() const = 0;
    virtual bool estaActivo() const = 0;
    virtual int getUsos() const = 0;
    virtual double getDanio() const = 0;
    virtual void atacar(shared_ptr<Personajes> p) = 0;
};

#endif
