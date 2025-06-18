#ifndef PERSONAJESFACT_HPP
#define PERSONAJESFACT_HPP

#include "includes.hpp"
#include <string>


class PersonajeFactory {
public:
    static unique_ptr<Personajes> crearPersonaje(const string& tipo);
    static shared_ptr<Armas> crearArma(const string& tipo);
    static unique_ptr<Personajes> crearPersonajeArmado(const string& tipoPersonaje, const std::string& tipoArma);
};

#endif 
