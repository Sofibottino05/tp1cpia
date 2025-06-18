#include "../headers/personajesFact.hpp"
#include <stdexcept>
#include <string>

unique_ptr<Personajes> PersonajeFactory::crearPersonaje(const string& tipo) {
    // if (tipo == "hechicero") return make_unique<Hechicero>();
    // if (tipo == "conjurador") return make_unique<Conjurador>();
    if (tipo == "brujo") return make_unique<Brujo>();
    // if (tipo == "nigromante") return make_unique<Nigromante>();
    // if (tipo == "barbaro") return make_unique<Barbaro>();
    // if (tipo == "paladin") return make_unique<Paladin>();
    // if (tipo == "caballero") return make_unique<Caballero>();
    // if (tipo == "mercenario") return make_unique<Mercenario>();
    // if (tipo == "gladiador") return make_unique<Gladiador>();
    // throw invalid_argument("Tipo de personaje desconocido: " + tipo);
}

// shared_ptr<Armas> PersonajeFactory::crearArma(const string& tipo) {
//     if (tipo == "espada") return make_shared<Espada>();
//     if (tipo == "hacha simple") return make_shared<HachaSimple>();
//     if (tipo == "hacha doble") return make_shared<HachaDoble>();
//     if (tipo == "lanza") return make_shared<Lanza>();
//     if (tipo == "garrote") return make_shared<Garrote>();
//     if (tipo == "baston") return make_shared<Baston>();
//     if (tipo == "libro de hechizos") return make_shared<LibroDeHechizos>();
//     if (tipo == "pocion") return make_shared<Pocion>();
//     if (tipo == "amuleto") return make_shared<Amuleto>();
//     throw invalid_argument("Tipo de arma desconocido: " + tipo);
// }

unique_ptr<Personajes> PersonajeFactory::crearPersonajeArmado(const string& tipoPersonaje, const string& tipoArma) {
    auto personaje = crearPersonaje(tipoPersonaje);
    // personaje->agregarArma(crearArma(tipoArma));
    return personaje;
}


