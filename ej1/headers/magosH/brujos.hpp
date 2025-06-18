#ifndef BRUJOS_HPP
#define BRUJOS_HPP

#include "magos.hpp"

class Brujo : public Magos { public: Brujo(); void accionar(const string&, shared_ptr<Personajes>) override; };

#endif