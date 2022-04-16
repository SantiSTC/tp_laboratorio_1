/*
 * menu.h
 *
 *  Created on: 11 abr. 2022
 *      Author: Santiago
 */

#ifndef MENU_H_
#define MENU_H_

/// @brief ElegirOpcion Determina la opcion del menu principal que elije el usuario
/// @return La opcion elegida por el usuario
int ElegirOpcion(void);


/// @brief PedirKilometrajeVuelo Permite ingresar al usuario la cantidad de kilomentros de un vuelo
/// @return La cantidad de kilometros ingresada por el usuario
float PedirKilometrajeVuelo(void);


/// @brief ElegirEmpresa Permite al usuario elegir entre las aerolineas para ingresar el precio de cada una
/// @return La opcion elegida por el usuario
char ElegirEmpresa(void);

/// @brief PedirDatos Permite al usuario ingresar el precio de la aerolinea elegida con la funcion "ElegirEmpresa"
/// @param operador1 Recibe la empresa elegida a la que se le ingresara el precio
/// @return El precio de la aerolinea elegida ingresado por el usuario
float PedirDatos(float operador1);

/// @brief PedirCostoACalcular Permite pedir el costo en particular que quiere calcular el usuario
/// @return La opcion elegida por el usuario
char PedirCostoACalcular(void);

#endif /* MENU_H_ */
