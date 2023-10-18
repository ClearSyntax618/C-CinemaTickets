#include<stdio.h>

char butacasIniciales(char[][9], int, int);
char reservarButacas(char[][9], int, int);
char mostrarReservas(char[][9], int, int);
int ingresarDato(int);

int main() {
    char cine[12][9];
    butacasIniciales(cine, 12, 9);
    reservarButacas(cine, 12, 9);


    return 0;
}

int ingresarDato(int lim) {
    int dato = 0;
    int band = 0;

    do {
        if (band == 1) {
            printf("Ingrese nuevamente: ");
        }
        scanf("%d", &dato);
        band = 1;
    } while(dato > lim && dato > 0);

    return dato;
}

char butacasIniciales(char cine[][9], int cf, int cc){
    int f, c;

    for(f = 0; f <= cf - 1; f++){
        for(c = 0; c <= cc - 1; c++){
            cine[f][c] = "D";
        }
    }
}

char reservarButacas(char cine[][9], int cf, int cc){
    int reservas = 0;
    int disponibles = cf * cc;

    printf("Ingresar la fila: ");
    int fila = ingresarDato(12);

    while(fila > 0) {
        printf("Ingresar la columna: ");
        int columna = ingresarDato(9);

        switch(columna) {
        case 8:
            columna = 1;
            break;
        case 6:
            columna = 2;
            break;
        case 4:
            columna = 3;
            break;
        case 2:
            columna = 4;
            break;
        case 1:
            columna = 5;
            break;
        case 3:
            columna = 6;
            break;
        case 5:
            columna = 7;
            break;
        case 7:
            columna = 8;
            break;
        case 9:
            columna = 9;
            break;
        }

        cine[fila - 1][columna - 1] = "R";
        reservas++;
        disponibles--;

        printf("Butaca reservada exitosamente.\n\n");
        mostrarReservas(cine, 12, 9);

        printf("\n\nIngresar la fila: ");
        fila = ingresarDato(12);
    }

    printf("Proceso de reserva finalizado. \n");
    printf("La cantidad de reservas es: %d \n", reservas);
    printf("La cantidad de asientos disponibles es: %d \n", disponibles);
}

char mostrarReservas(char cine[][9], int cf, int cc){
    int i, f, c;

    for(i = cc - 1; i > 0; i = i - 2){
        printf("%d \t", i);
    }

    for(i = 1; i <= cc; i = i + 2){
        printf("%d \t", i);
    }

    for(f = 0; f <= cf - 1; f++){
            printf("\n", f+1, "\t");
        for(c = 0; c <= cc - 1; c++){
            printf("%c \t", cine[f][c]);
        }
    }
}