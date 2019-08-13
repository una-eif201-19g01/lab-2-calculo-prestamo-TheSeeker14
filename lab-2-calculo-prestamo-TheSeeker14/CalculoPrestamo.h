//
// Created by Maikol Guzman  on 2019-08-08.
//

#ifndef CALCULOPRESTAMO_CALCULOPRESTAMO_H
#define CALCULOPRESTAMO_CALCULOPRESTAMO_H


#include <cstdint>
#include <string>

class CalculoDePrestamo{
    float Monto;
    //default
public:
    CalculoDePrestamo;
    //basico
private:
    CalculoDePrestamo(float Monto);
    
    //publicos
    float obtenerPorcentaje(std::string porcentajeTXT){}
    
    int calcularTiempoEnMeses(std::string TiempoTXT){}
    
    float calcularInteresMensual(float balance,float tasaAnual){}
    
    string reporteDeCalculo(std::string tiempoTXT,std::string porcentajeTXT){}
    
    
  //set and get
    float getMonto(){  
    }
    
    void setMonto(monto){
    }
};



#endif //CALCULOPRESTAMO_CALCULOPRESTAMO_H
