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

int main(void)
{
	setbuf(stdout, NULL);

	int opcionElegida;
	float kilometrajeVuelo;
	char empresaElegida;
	float precioVueloLatam;
	float precioVueloAerolineas;

	do
	{
		printf("Elija una opcion: /n"
				"1- Ingresar Kilometros del vuelo /n"
				"2- Ingresar precios del vuelo /n"
				"3- Calcular todos los costos /n"
				"4- Informar resultados /n"
				"5- Carga forzada de datos /n"
				"6- Salir");
		scanf("%d", &opcionElegida);

		while(opcionElegida <1 || opcionElegida >6)
		{
			printf("ERROR, Elija una opcion: /n"
					"1- Ingresar Kilometros del vuelo /n"
					"2- Ingresar precios del vuelo /n"
					"3- Calcular todos los costos /n"
					"4- Informar resultados /n"
					"5- Carga forzada de datos /n"
					"6- Salir");
			scanf("%d", &opcionElegida);
		}
	}while(opcionElegida != 6);

	switch(opcionElegida)
	{
		case 1:
			do
			{
				printf("Ingrese los kilometros del vuelo: ");
				scanf("%f", &kilometrajeVuelo);
			}while(kilometrajeVuelo > 0);
		break;
		case 2:
			printf("Elija la empresa: /n"
					"y- Aerolineas /n"
					"z- Latam");
			scanf("%c", &empresaElegida);
			while(empresaElegida != 'y' && empresaElegida != 'z')
			{
				printf("ERROR, Elija la empresa: /n"
						"y- Aerolineas /n"
						"z- Latam");
				scanf("%c", &empresaElegida);
			}

			switch(empresaElegida)
			{
				case 'y':
					printf("Ingrese el precio de Aerolineas: ");
					scanf("%f", &precioVueloAerolineas);
				break;
				case 'z':
					printf("Ingrese el precio de Latam: ");
					scanf("%f", &precioVueloLatam);
				break;
			}


		break;
		case 3:

		break;
		case 4:

		break;
		case 5:

		break;
		case 6:

		break;


	}

	return 0;
}
