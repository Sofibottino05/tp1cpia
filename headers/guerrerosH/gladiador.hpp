#ifndef GLADIADOR_HPP
#define GLADIADOR_HPP

#include "guerreros.hpp"

class Gladiador : public Guerreros { public: Gladiador(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif
