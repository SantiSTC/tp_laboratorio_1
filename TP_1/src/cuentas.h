/*
 * Cuentas.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Santiago
 */

#ifndef CUENTAS_H_
#define CUENTAS_H_

/// @brief Permite calcular el precio al pagar con debito
/// @param precioBase Recibe el precio base sobre el que hacer el descuento
/// @return Retorna el precio al pagar con debito
float PagarConDebito(float precioBase);


/// @brief Permite calcular el precio al pagar con credito
/// @param precioBase Recibe el precio base sobre el que hacer el aumento
/// @return Retorna el precio al pagar con credito
float PagarConCredito(float precioBase);


/// @brief Permite calcular el precio en bitcoins
/// @param precioBase Recibe el precio base sobre el que hacer la conversion de pesos a bitcoins
/// @return Retorna el precio en bitcoins
float PagarConBitcoin(float precioBase);


/// @brief Permite calcular el precio por kilometro de un vuelo
/// @param precioBase Recibe el precio base del vuelo
/// @param kilometrajeVuelo Recibe el la cantidad de kilometros del vuelo
/// @return Retorna el precio por kilometro del vuelo
float CalcularPrecioUnitario(float precioBase, int kilometrajeVuelo);


/// @brief Permite calcular la diferencia entre el precio de 2 aerolineas
/// @param precioBase1 Recibe el precio de Aerolineas
/// @param precioBase2 Recibe el precio de Latam
/// @return Retorna la diferencia de precio entre 2 aerolineas
float CalcularDiferenciaPrecio(float precioBase1, float precioBase2);


#endif /* CUENTAS_H_ */
