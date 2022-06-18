/*
 * cuentas.c
 */

#include <stdio.h>
#include <stdlib.h>

float PagarConDebito(float precioBase)
{
	float precioDebito;

	precioDebito = precioBase * 0.9;

	return precioDebito;
}

float PagarConCredito(float precioBase)
{
	float precioCredito;

	precioCredito = precioBase * 1.25;

	return precioCredito;
}

float PagarConBitcoin(float precioBase)
{
	float precioEnBitcoin;

	precioEnBitcoin = precioBase / 4606954.55;

	return precioEnBitcoin;
}

float CalcularPrecioUnitario(float precioBase, int kilometrajeVuelo)
{
	float precioUnitario;

	precioUnitario = precioBase / kilometrajeVuelo;

	return precioUnitario;
}

float CalcularDiferenciaPrecio(float precioBase1, float precioBase2)
{
	float diferenciaDePrecio;

	if(precioBase1 > precioBase2)
	{
		diferenciaDePrecio = precioBase1 - precioBase2;
	}
	else
	{
		diferenciaDePrecio = precioBase2 - precioBase1;
	}

	return diferenciaDePrecio;
}

