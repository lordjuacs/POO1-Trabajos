

#include "Abarrote.h"
#include "Hongos.h"
#include "Lembas.h"
#include "Manzana.h"
#include "Melon.h"
#include "Otros.h"
#include "HoneyCake.h"

int main() {

    cout<<"Gandalf come ciertos alimentos: "<<endl;

    auto arroz = new Abarrote("arroz");
    auto caramelo = new HoneyCake("dulce");
    //auto hongo = new Hongos("hongos");
    //auto pan_integral = new Lembas("pan");
    //auto manzana = new Manzana("manzana");
    //auto melon = new Melon("melon");
    //auto otros_alimentos = new Otros("otros");

    caramelo->estadoAnimo();

    return 0;
}

