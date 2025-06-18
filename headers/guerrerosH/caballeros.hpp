#ifndef CABALLEROS_HPP
#define CABALLEROS_HPP

#include "guerreros.hpp"

class Caballero : public Guerreros { public: Caballero(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif
