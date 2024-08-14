#include <stdio.h>  /* Funciones de entrada y salida */
#include <stdlib.h> /* Funciones del sistema */
#include <locale.h> /* Configuración regional */

int main() {
    /* Configuración regional */
    setlocale(LC_ALL, "");

    /* Declaración de variables y constantes */
    const int PRECIO = 45;
    int nBoletos, total, pago, cambio;

    /* Mensaje de bienvenida */
    printf("\n\t*************** Venta de boletos CineESAD *****************\n\n");

    /* Datos de entrada */
    printf("\tProporcione el número de boletos que desea comprar:\t");
    scanf("%d", &nBoletos);

    /* Calculamos el total de la venta */
    total = nBoletos * PRECIO;
    printf("\n\t\tEl total es *** %d pesos *** \n\n", total);

    /* Leemos el pago y calculamos el cambio */
    printf("\n\t\tIndique el monto de su pago: ");
    scanf("%d", &pago);

    /* Calculamos el cambio y lo devolvemos */
    cambio = pago - total;

    if (cambio > 0) {
    	
    	 printf("\n\tEl monto de su cambio es $%d\n", cambio);
    	 
        /* Calcular y mostrar billetes de $200 */
        if (cambio / 200 > 0) {
            printf("\n\t\t%d %s de $200", cambio / 200, (cambio / 200 == 1) ? "billete" : "billetes");
            cambio = cambio % 200;
        }

        /* Calcular y mostrar billetes de $100 */
        if (cambio / 100 > 0) {
            printf("\n\t\t%d %s de $100", cambio / 100, (cambio / 100 == 1) ? "billete" : "billetes");
            cambio = cambio % 100;
        }

        /* Calcular y mostrar billetes de $50 */
        if (cambio / 50 > 0) {
            printf("\n\t\t%d %s de $50", cambio / 50, (cambio / 50 == 1) ? "billete" : "billetes");
            cambio = cambio % 50;
        }

        /* Calcular y mostrar billetes de $20 */
        if (cambio / 20 > 0) {
            printf("\n\t\t%d %s de $20", cambio / 20, (cambio / 20 == 1) ? "billete" : "billetes");
            cambio = cambio % 20;
        }

        /* Calcular y mostrar monedas de $10 */
        if (cambio / 10 > 0) {
            printf("\n\t\t%d %s de $10", cambio / 10, (cambio / 10 == 1) ? "moneda" : "monedas");
            cambio = cambio % 10;
        }

        /* Calcular y mostrar monedas de $5 */
        if (cambio / 5 > 0) {
            printf("\n\t\t%d %s de $5", cambio / 5, (cambio / 5 == 1) ? "moneda" : "monedas");
            cambio = cambio % 5;
        }

        /* Calcular y mostrar monedas de $2 */
        if (cambio / 2 > 0) {
            printf("\n\t\t%d %s de $2", cambio / 2, (cambio / 2 == 1) ? "moneda" : "monedas");
            cambio = cambio % 2;
        }

        /* Calcular y mostrar monedas de $1 */
        if (cambio > 0) {
            printf("\n\t\t%d %s de $1", cambio, (cambio == 1) ? "moneda" : "monedas");
        }
        
        printf("\n\n\tAgradecemos su preferencia, disfrute su película.\n\n");
        
    } else {
    	if (cambio < 0){
    		printf("\n\t\tDinero insuficiente. Compra cancelada.\n");
		} else {
        printf("\n\t\tNo se requiere cambio.");
        printf("\n\n\tAgradecemos su preferencia, disfrute su película.\n\n");
        	}
    }

    

    getchar(); /* Espera para que el usuario vea el resultado antes de cerrar */
    return 0;  /* Fin de la función main */
}

