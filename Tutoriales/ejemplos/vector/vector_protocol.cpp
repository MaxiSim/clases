#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int main (void){
    vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }
    for (auto val = v.begin(); val != v.end(); val++){
        cout << *val << " ";
    }
    cout << endl;

    cout << "El vector tiene " << v.size() << " elementos." << endl;
    cout << "El ultimo valor del vector es: " << v.back() << endl;
    cout << "Elimino el ultimo valor: " << v[v.size()-1] << endl;
    v.pop_back();
    cout << "El vector tiene " << v.size() << " elementos." << endl;
    cout << "Inserto el numero 5 al principio." << endl;
    v.insert(v.begin(), 5);
    cout << "El primer elemento del vector es: " << v[0] << endl;
    auto x = v.empty();
    if (x == true){
        cout << "El vector está vacio." << endl;
    } else {
        cout << "El vector no esta vacio" << endl;
    }
    cout << "Limpio el vector." << endl;
    v.clear();
    x = v.empty();
    if (x == true){
        cout << "El vector está vacio." << endl;
    } else {
        cout << "El vector no esta vacio" << endl;
    }


    return 0;
}