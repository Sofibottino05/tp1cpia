#include <iostream>
#include <cstdlib>  
#include <ctime>    

#include "./headers/personajesFact.hpp"

using namespace std;

int generarRand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(){
  
    cout<<"\n\nIncizo 2: Pruebo la clase personajes factory.\nInfo de personajes creados: \n\n";
    PersonajeFactory p; // instancio mi clase PersonajeFactory una sola vez en todo el main, y accedo a p en todos los incizos.

    array<string,9> arraypersonajes={"hechicero","conjurador","brujo","nigromante","barbaro","paladin","caballero","mercenario","gladiador"};//arrays con los nombres de Personajes y Armas, para usar los indices numericos en iteraciones
    array<string,9> arrayarmas={"espada","hacha simple","hacha doble","lanza","garrote","baston","libro de hechizos","pocion","amuleto"};
    array<string,4> arrayguerreros={"hechicero","conjurador","brujo","nigromante"}; 
    array<string,5> arraymagos={"barbaro","paladin","caballero","mercenario","gladiador"};

    vector<unique_ptr<Personajes>> personajesmagos;
    vector<unique_ptr<Personajes>> personajesguerreros;
    vector<int> armasmagos;
    vector<int> armasguerreros;

    srand(time(nullptr)); //inicializo srand
    int cantMagos= generarRand(3,7); //genero cuantos punteros a magos y guerreros voy a crear.
    int cantGuerreros= generarRand(3,7);
    
    for (int i = 0 ; i < cantMagos; i++) {
        int indicemagos = generarRand(0,3); // arraymagos tiene 4 elementos (0–3)
        personajesmagos.push_back(p.crearPersonaje(arraymagos[indicemagos]));
        armasmagos.push_back(generarRand(0,2)); 
    }
    for (int i = 0; i < cantGuerreros; i++) { 
        int indiceguerreros = generarRand(0,4); // arrayguerreros tiene 5 elementos (0–4)
        personajesguerreros.push_back(p.crearPersonaje(arrayguerreros[indiceguerreros]));
        armasguerreros.push_back(generarRand(0,2));
    }    

    for(size_t i=0 ; i< personajesmagos.size(); i++){
        cout<<"Personaje: "<<personajesmagos[i]->getNombre()<< ", cantidad de armas asignadas: "<<armasmagos[i]<<"\n";
    }
    for(size_t i=0 ; i< personajesguerreros.size(); i++){
        cout<<"Personaje: "<<personajesguerreros[i]->getNombre()<< ", cantidad de armas asignadas: "<<armasguerreros[i]<<"\n";
    }}