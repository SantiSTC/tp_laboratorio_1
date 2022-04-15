/*
 * Cuentas.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Santiago
 */

#ifndef CUENTAS_H_
#define CUENTAS_H_

float PagarConDebito(float precioBase);
float PagarConCredito(float precioBase);
float PagarConBitcoin(float precioBase);
float CalcularPrecioUnitario(float precioBase, int kilometrajeVuelo);
float CalcularDiferenciaPrecio(float precioBase1, float precioBase2);


#endif /* CUENTAS_H_ */
