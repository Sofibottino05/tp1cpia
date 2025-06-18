#ifndef CONJURADOR_HPP
#define CONJURADOR_HPP

#include "magos.hpp"

class Conjurador : public Magos { public: Conjurador(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif