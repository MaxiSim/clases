#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include "clases.hpp"
using namespace std;


int main (void){
    Account *cuenta = new Account;
    assert(cuenta -> balance() == 0);

    cuenta->deposit( 10 );
    assert(cuenta->balance() == 10);
    assert(cuenta->report().front() == "deposit of 10");
    assert(cuenta->report().size() == 1);

    cuenta->withdraw ( 10 );
    assert(cuenta->balance() == 0);
    assert(cuenta->report().front() == "deposit of 10");
    assert(cuenta->report().back() == "withdraw of 10");
    assert(cuenta->report().size() == 2);

    cuenta->withdraw( 10 );
    assert(cuenta->balance() == 0);
    assert(cuenta->report().front() == "deposit of 10");
    assert(cuenta->report().back() == "failed withdrawal of 10");
    assert(cuenta->report().size() == 3);

    // cuenta->printLog();

    std::cout << "Ok" << std::endl;


    delete cuenta;
    
    return 0;
}