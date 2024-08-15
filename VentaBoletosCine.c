#include<stdio.h>
#include <locale.h>

int main () {
	
	setlocale(LC_ALL, "");
	
	int folio, integrantes, hijos, monto = 0; 
	char nombre[50], estado[10], decision;
	float apoyoIntegrantes, apoyoHijos, total; 
	
	do {
	
	printf("Ingrese el folio de registro: ");
	scanf("%d", &folio);
	
	printf("Ingrese Nombre de la persona que proporciona la información: ");
	scanf("%s", &nombre);
	
	printf("Ingrese estado donde radica la familia afectada: ");
	scanf("%s", &estado);
	
	printf("Ingrese número de integrantes: ");
	scanf("%d", &integrantes);
	
	printf("Ingrese número de hijos menores: ");
	scanf("%d", &hijos);
	
	printf("\n=============================================================================\n\n");
	printf("\tFolio de registro: %d\n", folio);
	printf("\tNombre de la persona que proporciona información: %s\n\n", nombre);
	
	if(strcmp(estado, "Chiapas") == 0) {
        monto = 45000;
    } else if(strcmp(estado, "Guerrero") == 0) {
        monto = 60000;
    } else if(strcmp(estado, "Oaxaca") == 0) {
        monto = 80000;
    } else {
        printf("\tEstado invalido.\n");
    }
    
    printf("\tMonto inicial por estado donde radica: $%d.00\n", monto);
    
    if(integrantes >= 3 && integrantes <= 4 ) {
    	apoyoIntegrantes = monto*.10;
    } else if(integrantes >= 5 && integrantes <= 7 ) {
    	apoyoIntegrantes = monto*.15;
    } else if(integrantes > 7 ) {
    	apoyoIntegrantes = monto*.20;
    } else {
        printf("\tNumero de integrantes invalido.\n");
    }
    
    printf("\tApoyo por integrantes de familia: $%.2f\n", apoyoIntegrantes);
		
	if(hijos >= 1 && hijos <= 3 ) { 
		apoyoHijos = hijos*4500.00;
    } else if(hijos >= 4 && hijos <= 6 ) {
        apoyoHijos = hijos*3000.00;
    } else if(hijos > 6 ) {
    	apoyoHijos = hijos*2000.00;
    } else {
        printf("\tNumero de integrantes invalido.\n");
    }
    
    printf("\tApoyo por hijos menores de la familia: $%.2f\n", apoyoHijos);
    
    total = monto + apoyoIntegrantes + apoyoHijos;
    printf("\n\t---------------------------------------------------\n");
    printf("\n\t\tMonto total del apoyo: $%.2f\n", total);
    printf("\n\t---------------------------------------------------\n");
    
    printf("\n=============================================================================\n\n");
    
    printf("\n¿Desea ingresar otro registro? S(Sí) o N(No):");
    scanf(" %c", &decision);
} while (decision != 'n' && decision != 'N');

}
