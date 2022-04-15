/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cuentas.h"
#include "menu.h"

int main(void)
{
	setbuf(stdout, NULL);

	int opcionElegida;
	float kilometrajeVuelo;
	char empresaElegida;
	float precioVueloLatam;
	float precioVueloAerolineas;
	char costoACalcularElegido;
	int kilometrajeVueloCargaForzada;
	float precioVueloLatamCargaForzada;
	float precioVueloAerolineasCargaForzada;

	kilometrajeVuelo = 0;
	precioVueloAerolineas = 0;
	precioVueloLatam = 0;
	kilometrajeVueloCargaForzada = 7090;
	precioVueloLatamCargaForzada = 159339;
	precioVueloAerolineasCargaForzada = 162965;

	do
	{
		opcionElegida = ElegirOpcion();

		switch(opcionElegida)
			{
				case 1:
					printf("Ingrese los kilometros del vuelo: ");
					kilometrajeVuelo = PedirKilometrajeVuelo();
					while(kilometrajeVuelo < 1)
					{
						printf("ERROR, Ingrese los kilometros del vuelo: ");
						kilometrajeVuelo = PedirKilometrajeVuelo();
					}
				break;
				case 2:
					printf("Elija la empresa: \n"
							"y- Aerolineas \n"
							"z- Latam \n");
					empresaElegida = ElegirEmpresa();
					while(empresaElegida != 'y' && empresaElegida != 'z')
						{
						printf("Elija la empresa: \n"
								"y- Aerolineas \n"
								"z- Latam \n");
						empresaElegida = ElegirEmpresa();
						}

					switch(empresaElegida)
					{
						case 'y':
							printf("Ingrese el precio de Aerolineas: ");
							precioVueloAerolineas = PedirDatos(empresaElegida);
						break;
						case 'z':
							printf("Ingrese el precio de Latam: ");
							precioVueloLatam = PedirDatos(empresaElegida);
						break;
					}
				break;
				case 3:
					if(precioVueloAerolineas != 0 && precioVueloLatam != 0)
					{
						printf("Calcular todos los costos: \n"
								"a- Tarjeta de débito (descuento 10 porciento) \n"
								"b- Tarjeta de crédito (interés 25 porciento) \n"
								"c- Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n"
								"d- Mostrar precio por km (precio unitario) \n"
								"e- Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n");
						costoACalcularElegido = PedirCostoACalcular();
						while(costoACalcularElegido != 'a' && costoACalcularElegido != 'b' && costoACalcularElegido != 'c' && costoACalcularElegido != 'd' && costoACalcularElegido != 'e')
						{
							printf("Calcular todos los costos: \n"
									"a- Tarjeta de débito (descuento 10 porciento) \n"
									"b- Tarjeta de crédito (interés 25 porciento) \n"
									"c- Bitcoin (1BTC -> 4606954.55 Pesos Argentinos) \n"
									"d- Mostrar precio por km (precio unitario) \n"
									"e- Mostrar diferencia de precio ingresada (Latam - Aerolíneas) \n");
							costoACalcularElegido = PedirCostoACalcular();
						}
					}
					else
					{
						printf("ERROR, No se han ingresado los precios de los vuelos, por lo que no se puede calcular los costos. \n");
					}


					switch(costoACalcularElegido)
					{
					case 'a':
						printf("Tarjeta de débito (descuento 10 porciento): \n"
								"Latam: %.2f \n"
								"Aerolineas: %.2f \n", PagarConDebito(precioVueloLatam), PagarConDebito(precioVueloAerolineas));
					break;
					case 'b':
						printf("Tarjeta de crédito (interés 25 porciento): \n"
								"Latam: %.2f \n"
								"Aerolineas: %.2f \n", PagarConCredito(precioVueloLatam), PagarConCredito(precioVueloAerolineas));
					break;
					case 'c':
						printf("Bitcoin (1BTC -> 4606954.55 Pesos Argentinos): \n"
								"Latam: %f \n"
								"Aerolineas: %f \n", PagarConBitcoin(precioVueloLatam), PagarConBitcoin(precioVueloAerolineas));
					break;
					case 'd':
						printf("Mostrar precio por km (precio unitario): \n"
								"Latam: %.2f \n"
								"Aerolineas: %.2f \n", CalcularPrecioUnitario(precioVueloLatam, kilometrajeVuelo), CalcularPrecioUnitario(precioVueloAerolineas, kilometrajeVuelo));
					break;
					case 'e':
						printf("Mostrar diferencia de precio ingresada (Latam - Aerolíneas): %.2f \n", CalcularDiferenciaPrecio(precioVueloAerolineas, precioVueloLatam));
					break;
					}
				break;
				case 4:
					if(precioVueloAerolineas != 0 && precioVueloLatam != 0)
					{
						printf("KMs Ingresados: %.2f"
								"\n Latam: \n"
								"a)Precio con tarjeta de debito: %.2f \n"
								"b)Precio con tarjeta de credito: %.2f \n"
								"c)Precio pagando en bitcoins: %f \n"
								"d)Precio unitario: %.2f", kilometrajeVuelo, PagarConDebito(precioVueloLatam), PagarConCredito(precioVueloLatam), PagarConBitcoin(precioVueloLatam), CalcularPrecioUnitario(precioVueloLatam, kilometrajeVuelo));
						printf("\n Aerolineas: \n"
								"a)Precio con tarjeta de debito: %.2f \n"
								"b)Precio con tarjeta de credito: %.2f \n"
								"c)Precio pagando en bitcoins: %f \n"
								"d)Precio unitario: %.2f \n"
								"e)\nLa diferencia de precio es : %.2f \n", PagarConDebito(precioVueloAerolineas), PagarConCredito(precioVueloAerolineas), PagarConBitcoin(precioVueloAerolineas), CalcularPrecioUnitario(precioVueloAerolineas, kilometrajeVuelo), CalcularDiferenciaPrecio(precioVueloAerolineas, precioVueloLatam));

					}
					else
					{
						printf("ERROR, No se han ingresado los precios de los vuelos, por lo que no se puede calcular los costos. \n");
					}
				break;
				case 5:
					printf("KMs Ingresados: %d"
							"\n Latam: \n"
							"a)Precio con tarjeta de debito: %.2f \n"
							"b)Precio con tarjeta de credito: %.2f \n"
							"c)Precio pagando en bitcoins: %f \n"
							"d)Precio unitario: %.2f", kilometrajeVueloCargaForzada, PagarConDebito(precioVueloLatamCargaForzada), PagarConCredito(precioVueloLatam), PagarConBitcoin(precioVueloLatamCargaForzada), CalcularPrecioUnitario(precioVueloLatamCargaForzada, kilometrajeVueloCargaForzada));
					printf("\n Aerolineas: \n"
							"a)Precio con tarjeta de debito: %.2f \n"
							"b)Precio con tarjeta de credito: %.2f \n"
							"c)Precio pagando en bitcoins: %f \n"
							"d)Precio unitario: %.2f \n"
							"\nLa diferencia de precio es : %.2f \n", PagarConDebito(precioVueloAerolineasCargaForzada), PagarConCredito(precioVueloAerolineasCargaForzada), PagarConBitcoin(precioVueloAerolineasCargaForzada), CalcularPrecioUnitario(precioVueloAerolineasCargaForzada, kilometrajeVueloCargaForzada), CalcularDiferenciaPrecio(precioVueloAerolineasCargaForzada, precioVueloLatamCargaForzada));
				break;
			}
	}while(opcionElegida != 6);

	return 0;
}
