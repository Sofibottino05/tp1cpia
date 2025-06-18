#ifndef MERCENARIOS_HPP
#define MERCENARIOS_HPP

#include "guerreros.hpp"

class Mercenario : public Guerreros { public: Mercenario(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif
