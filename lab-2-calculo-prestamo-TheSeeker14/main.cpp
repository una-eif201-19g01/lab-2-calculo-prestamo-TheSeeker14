#include <iostream>
#include "CalculoPrestamo.h"

int main() {
    CalculoDePrestamo pres1;
    float mon;
    cout<<"calculo de prestamo"<<endl;
    cout<<"ingrese un monto"<<endl;
    cin>>mon;
    cout<<pres1.reporteDeCalculo();
    return 0;
}