#ifndef HECHICEROS_HPP
#define HECHICEROS_HPP

#include "magos.hpp"

class Hechicero : public Magos { public: Hechicero(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif