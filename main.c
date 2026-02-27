#include <stdio.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();

int main(void) {
    ejercicio4();
    return 0;
}

void ejercicio1() {
    // Desarrolle un algoritmo que permita visualizar los números del 1 al 10
    int contador = 0;
    while (contador < 10) {
        printf("%d\n", contador + 1);
        contador++;
    }
}

void ejercicio2() {
    // Desarrolle un algoritmo que permita visualizar los números impares entre el 1 y el 20
    int contador = 1;
    while (contador < 20) {
        if (contador % 2 != 0) {
            printf("%d\n", contador);
        }
        contador++;
    }
}

void ejercicio3() {
    // Desarrolle un algoritmo que permita visualizar el cuadrado de los números entre el 1 y el 10
    int contador = 0;
    while (contador < 10) {
        printf("%d\n", contador * contador);
        contador++;
    }
}

void ejercicio4() {
    // Realizar un algoritmo que permita a un profesor cargar por teclado la cantidad de notas
    // que quiera. Al finalizar, debe mostrarse el promedio de las mismas.

    int contador = 0;
    char continuar = 's';
    float promedio = 0;
    float notas = 0;

    printf("Cargue las notas que desee para calcular el promedio de las mismas: \n");
    while ( continuar == 's' ) {
        float nota = 0;

        printf("Ingrese la nota de su estudiante: \n");
        scanf("%f", &nota);
        notas += nota;
        contador += 1;

        printf("Quiere continuar cargando notas? s/n\n>>> ");
        fflush(stdin);
        scanf(" %c", &continuar);
    }
    promedio = (float)notas / contador;
    printf("\nEl promedio de las %d notas es de: %.2f", contador, promedio);
}

void ejercicio5() {
    const float MAX_PIEZA_CHICA = 9.8f;
    const float MIN_PIEZA_GRANDE = 10.2f;
    int piezas = 0;
    float tamanio = 0;
    int piezasPequenias = 0;
    int piezasMedianas = 0;
    int piezasGrandes = 0;

    printf("Ingrese las piezas expresadas en kg.\n");
    printf("Cuando desee finalizar de cargar INGRESE 0.\n");

    do {
        printf("Pieza en kg: ");
        scanf("%f", &tamanio);

        if (tamanio > 0) {
            if (tamanio < MAX_PIEZA_CHICA) {
                piezasPequenias += 1;
            } else if (tamanio > MIN_PIEZA_GRANDE) {
                piezasGrandes += 1;
            } else {
                piezasMedianas += 1;
            }
            piezas += 1;
        }

    } while (tamanio > 0);

    printf("\nCantidad total de piezas: %d\n", piezas);
    printf("Piezas pequenias: %d\n", piezasPequenias);
    printf("Piezas medianas: %d\n", piezasMedianas);
    printf("Piezas grandes: %d\n", piezasGrandes);
}

void ejercicio6() {
    int num = 0;
    int acumulador = 0;

    do {
        printf("Ingrese un numero (0 en caso de querer dejar de hacerlo): ");
        scanf("%d", &num);

        acumulador += num;
    } while (num != 0);

    printf("La suma de todos los numeros ingresados da como resultado: %d\n\n", acumulador);
}

void ejercicio7() {
    int numCuenta = 0;
    float saldo = 0;
    float saldoAcreedor = 0;
    char continuar = 's';

    do {
        printf("Ingrese el numero de cuenta: ");
        scanf("%d", &numCuenta);

        printf("Ingrese el saldo: ");
        scanf("%f", &saldo);

        printf("\nCuenta: %d\n", numCuenta);

        if (saldo > 0) {
            printf("Estado de cuenta: ACREEDOR\n\n");
            saldoAcreedor += saldo;
        } else if (saldo < 0) {
            printf("Estado de cuenta: DEUDOR\n\n");
        } else {
            printf("Estado de cuenta: NULO\n\n");
        }

        printf("Desea seguir ingresando cuentas? (s/n): ");
        scanf("  %c", &continuar);
    } while (continuar != 'n');

    printf("El saldo total ACREEDOR es de $%.4f\n", saldoAcreedor);
}