#include "Animal.h"


int main() {
    /*Animal *a1 = new Animal;
    Animal *g1 = new Gato("Mishifus");
    a1->comer();
    g1->comer();
    */

    Animal ** animal = new Animal*[3];
    animal[0] = new Gato("Mishifus");
    animal[1] = new Gato("Michi");
    animal[2] = new Perro("Firulais");
    for(int i = 0; i < 3; i++){
        animal[i]->comer();
    }

    return 0;
}