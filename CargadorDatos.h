/*
 * CargadorDatos.h
 *
 *  Created on: 10/11/2013
 *      Author: druida
 */

#ifndef CARGADORDATOS_H_
#define CARGADORDATOS_H_
#define RUTA_FICHERO "/home/druida/workspace/PracticasEEDD/Debug/free-zipcode-database-Primary.csv"
#include <iostream>
#include <fstream>
#include <cstring>
#include "DetalleLinea.h"
#include <string>
#include <sstream>
using namespace std;
namespace EEDD {

class CargadorDatos {
private:
	ifstream *fichero;
	int* fromString(string s);
public:
	CargadorDatos();
	virtual ~CargadorDatos();
	DetalleLinea* siguienteDetalle();
};

} /* namespace EEDD */
#endif /* CARGADORDATOS_H_ */