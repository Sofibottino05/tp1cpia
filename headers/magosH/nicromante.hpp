#ifndef NIGROMANTE_HPP
#define NIGROMANTE_HPP

#include "magos.hpp"

class Nigromante : public Magos { public: Nigromante(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif