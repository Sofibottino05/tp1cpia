int generarRand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main3(){
    int indicepersonajes= generarRand(0,8);
    indicearmas = generarRand(0, 8); // arrayarmas tiene 9 elementoss

    array<string,3> arraygolpes={"Golpe fuerte","Golpe rapido","Golpe y defensa"};//array con los nombres de los tipos de golpes, para poder imprimirlos usando el indice.

    cout<<"\n\nIncizo 3: batalla entre dos personajes:\n\n";

    string G;// almacena el input del guerrero que el jugador quiera usar
    string A;// almacena el input del arma que el jugador quiera usar

    cout<<"Batalla entre usted y la PC.\nIngrese que guerrero quiere utilizar:\n";
    cin>>G;
    cout<<"Y que arma desea usar\n";
    cin>>A;    

    unique_ptr<Personajes> jugador=p.crearPersonajeArmado(G,A); //creo al personaje armado con la clase creada previamente PersonajeFactory, usnado los inputs pedidos
    unique_ptr<Personajes> pc=p.crearPersonajeArmado(arraypersonajes[indicepersonajes],arrayarmas[indicearmas]);//==, pero uso numeros generados de manera random con los int guardados por ultima vez en el inciso anterior en indicearmas e indiceguerreros.
    cout<<"Usted esta utilizando al personaje "<< jugador->getNombre()<<" con el arma "<< jugador->getArmas()[0]->getNombre();
    cout<< ". \nLa batalla va a ser contra el " << pc->getNombre()<<" con el arma "<< pc->getArmas()[0]->getNombre()<<".\n";

    int op1;// movimiento del jugador x iteracion, el cual se modifica en el while de las batallas
    int op2;// movimiento de la pc x iteracion, el cual se modifica en el while de las batallas

    while ((jugador->getVida()>0)&&(pc->getVida()>0)){ //itero hasta que uno de los dos jugadores se quede sin vida
        cout<<"Elija el movimiento que desea hacer:\n(1) Golpe fuerte\n(2) Golpe rapido\n(3) Golpe y defensa\n";
        cin>>op1;//pido por iteracion un golpe nuevo al jugador
        op2= generarRand(1,3);//genero el golpe de la pc de manera rand

        if(op1==op2){  //Todas las opciones de juego en la batalla
            cout<<"Ambos jugadores han usado el golpe "<< arraygolpes[op1]<< " y ninguno recibe danio\n";
        }if(op1==1 && op2==2){
            cout<<"El "<< jugador->getNombre()<<" ha atacado con el arma "<< jugador->getArmas()[0]->getNombre()<<" al jugador "<< pc->getNombre()<<", usando el "<< arraygolpes[0]<<"y le ha restado 10 de HP.\n";
            pc->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }if(op2==1 && op1==2){
            cout<<"El "<< pc->getNombre()<<" lo ha atacado con el arma "<< pc->getArmas()[0]->getNombre()<<", usando el "<< arraygolpes[0]<< ", y le ha restado 10 de HP.\n";
            jugador->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }if (op1==2 && op2==3){
            cout<<"El "<< jugador->getNombre()<<" ha atacado con el arma "<< jugador->getArmas()[0]->getNombre()<<" al jugador "<< pc->getNombre()<<", usando el "<< arraygolpes[1]<<"y le ha restado 10 de HP.\n";
            pc->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }if (op2==2 && op1==3){
            cout<<"El "<< pc->getNombre()<<" lo ha atacado con el arma "<< pc->getArmas()[0]->getNombre()<<", usando el "<< arraygolpes[1]<< ", y le ha restado 10 de HP.\n";
            jugador->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }if (op1==3 && op2==1){
            cout<<"El "<< jugador->getNombre()<<" ha atacado con el arma "<< jugador->getArmas()[0]->getNombre()<<" al jugador "<< pc->getNombre()<<", usando el "<< arraygolpes[2]<<" y le ha restado 10 de HP.\n";
            pc->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }if (op2==3 && op1==1){
            cout<<"El "<< pc->getNombre()<<" lo ha atacado con el arma "<< pc->getArmas()[0]->getNombre()<<", usando el "<< arraygolpes[2]<< ", y le ha restado 10 de HP.\n";
            jugador->quitarVida(10);
            cout<<"Usted tiene "<<jugador->getVida()<< " de HP y el oponente tiene "<< pc->getVida()<<" de HP.\n ";
        }
    }

    if (jugador->getVida()==0){//el jugador que tenga 0 de vida es el perdedor
        cout<<"Usted ha perdido la batalla.\n";
    }else{
        cout<<"Usted ha ganado la batalla!\n";
    }
    return 0;

}
    