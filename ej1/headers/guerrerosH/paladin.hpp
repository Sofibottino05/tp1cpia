#ifndef PALADIN_HPP
#define PALADIN_HPP

#include "guerreros.hpp"

class Paladin : public Guerreros { public: Paladin(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif
