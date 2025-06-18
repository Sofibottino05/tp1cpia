#ifndef BARBAROS_HPP
#define BARBAROS_HPP

#include "guerreros.hpp"

class Barbaro : public Guerreros { public: Barbaro(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif
