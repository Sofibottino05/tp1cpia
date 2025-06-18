#ifndef PERSONAJES_HPP
#define PERSONAJES_HPP
#include <string>
#include <memory>
#include <vector>

using namespace std;

class Armas;

class Personajes {
public:
    virtual ~Personajes() = default;
    virtual string getNombre() const = 0;
    virtual string getTipo() const = 0;
    virtual string getPoder() const = 0;
    virtual string getInfo() const = 0;
    virtual double getVida() const = 0;
    virtual bool getDefensa() const = 0;
    virtual void recibirDanio(int d) = 0;
    virtual void recibirVida(int d) = 0;
    virtual void agregarArma(shared_ptr<Armas> a) = 0;
    virtual void quitarVida(int v) = 0;
    virtual vector<shared_ptr<Armas>> getArmas() const = 0;
    virtual shared_ptr<Armas> getArmaBN(const string& n) const = 0;
    virtual void accionar(const string& arma, shared_ptr<Personajes> objetivo) = 0;
};



#endif