#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;

vector <int> hora_random_inicial() {
    vector <int> vec;
    srand(time(NULL));
    int segundos, minutos;
    segundos = (rand() % 59) + 1; //igual a rand() % (59 + 1 - 1) + 1
    minutos = rand() % 24;
    vec.push_back(minutos);
    vec.push_back(segundos);
    return vec;
}
void aumentar(vector <int> &entrada){
    if(entrada[0] == 23 && entrada[1] == 59) {
        entrada[0] = 00;
        entrada[1] = 00;
    }
    else if(entrada[1] == 59) {
        entrada[0]++;
        entrada[1] = 00;
    }
    else
        entrada[1]++;
}
void reducir(vector <int> &entrada){
    if(entrada[0] == 00 && entrada[1] == 00) {
        entrada[0] = 23;
        entrada[1] = 59;
    }
    else if(entrada[1] == 00) {
        entrada[0]--;
        entrada[1] = 59;
    }
    else
        entrada[1]--;
}

int main() {
    char input;
    vector <int> vec = hora_random_inicial();
    cout << "La hora inicial aleatoria es:";
    if(vec[0] < 10)
        cout << 0;
    cout << vec[0] <<  ":";
    if(vec[1] < 10)
        cout << 0;
    cout << vec[1] << endl;
    while(true){
        cout << "Presione A, R o S para (A)vanzar ,"
                " (R)etroceder o (S) alir :";
        cin >> input;
        if(input == 'A') {
            aumentar(vec);
            cout << "La nueva hora es:";
            if(vec[0] < 10)
                cout << 0;
            cout << vec[0] <<  ":";
            if(vec[1] < 10)
                cout << 0;
            cout << vec[1] << endl;
        }
        else if(input == 'R') {
            reducir(vec);
            cout << "La nueva hora es:";
            if(vec[0] < 10)
                cout << 0;
            cout << vec[0] <<  ":";
            if(vec[1] < 10)
                cout << 0;
            cout << vec[1] << endl;
        }
        else{
            cout << "Bye" << endl;
            break;
        }

    }
    return 0;
}