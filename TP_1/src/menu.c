/*
 * menu.c
 *
 *  Created on: 11 abr. 2022
 *      Author: Santiago
 */

#include <stdio.h>
#include <stdlib.h>

int ElegirOpcion(void)
{
	int opcionElegida;

	printf("Elija una opcion: \n"
			"1- Ingresar Kilometros del vuelo \n"
			"2- Ingresar precios del vuelo \n"
			"3- Calcular todos los costos \n"
			"4- Informar resultados \n"
			"5- Carga forzada de datos \n"
			"6- Salir \n");
	scanf("%d", &opcionElegida);

	while(opcionElegida <1 || opcionElegida >6)
	{
		printf("ERROR, Elija una opcion: \n"
				"1- Ingresar Kilometros del vuelo \n"
				"2- Ingresar precios del vuelo \n"
				"3- Calcular todos los costos \n"
				"4- Informar resultados \n"
				"5- Carga forzada de datos \n"
				"6- Salir \n");
		fflush(stdin);
		scanf("%d", &opcionElegida);
	}

	return opcionElegida;
}

float PedirKilometrajeVuelo(void)
{
	float kilometrajeVuelo;

	scanf("%f", &kilometrajeVuelo);
	while(kilometrajeVuelo < 1)
	{
		scanf("%f", &kilometrajeVuelo);
	}

	return kilometrajeVuelo;
}

char ElegirEmpresa(void)
{
	char empresaElegida;

	fflush(stdin);
	scanf("%c", &empresaElegida);
	while(empresaElegida != 'y' && empresaElegida != 'z')
	{
		fflush(stdin);
		scanf("%c", &empresaElegida);
	}

	return empresaElegida;
}

float PedirDatos(float operador1)
{
	float datoIngresado;

	datoIngresado = operador1;

	fflush(stdin);
	scanf("%f", &datoIngresado);

	return datoIngresado;
}

char PedirCostoACalcular(void)
{
	char costoACalcular;

	fflush(stdin);
	scanf("%c", &costoACalcular);

	return costoACalcular;
}
