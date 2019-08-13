//
// Created by Maikol Guzman  on 2019-08-08.
//

#include <iostream>
#include "CalculoPrestamo.h"

CalculoDePrestamo::CalculoDePrestamo(){}

CalculoDePrestamo::CalculoDePrestamo(float Monto)
    
float calculoDePrestamo::obtenerPorcentaje(std::string porcentajeTXT){
    porcentajeTXT="8.40%";
    std::string str=porcentajeTXT.substr(pos: 0,n: 4);
    return std::stof(porcentajeTXT)/100;
}

float calculoDePrestamo::calcularTiempoEnMeses(std::string tiempoTXT){
    std::string str1=tiempoTXT.substr(pos: 0, n: 4);
    std::stof(tiempoTXT);
}

float  calculoDePrestamo::calcularInteresMensual(float balance,float tasaAnual){
    
    float inte=Monto*obtenerPorcentaje()/calcularTiempoEnMeses();
    return inte;
}

string reporteDeCalculo(std::string tiempoTXT,std::string porcentajeTXT){
    stringstream x;
    float monto=0;
    float total=monto+calcularInteresMensual();
    for(int i=0;i<tiempoTXT;i++){
        x<<"tasa"<<"8.40%"<<"mes"<<calculoTiempoEnMeses()<<"balance inicial"<<monto<<"interes"<<calcularInteresMensual()<<"balance nuevo"<<total<<endl;
    }
    return x.str();
}