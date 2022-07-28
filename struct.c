#include <stdio.h>

/**
 * @brief this is a struct type defining a "Data".
 * This works like a simplified object.
 * 
 */
typedef struct s_data
{
    int dia;
    int mes;
    int ano;
} Data;


int main()
{
    //this way we would have to create a struc for each "object".
    struct 
    {
        int dia;
        int mes;
        int ano;
    } date;
    
    date.dia = 05;
    date.mes = 02;
    date.ano = 1988;

    Data data1;
    Data data2;

    data1.dia = 28;
    data1.mes = 07;
    data1.ano = 2022;

    data2.dia = date.dia;
    data2.mes = date.mes;
    data2.ano = date.ano;

    //works the same way for vectors.
    Data feriados[50];

    feriados[0].dia = 25;
    feriados[0].mes = 12;
    feriados[0].ano = 2022;

    printf("\n");
    printf("Date: %d/%d/%d\n", date.dia, date.mes, date.ano);
    printf("Data1: %d/%d/%d\n", data1.dia, data1.mes, data1.ano);
    printf("Data2: %d/%d/%d\n", data2.dia, data2.mes, data2.ano);
    printf("Natal: %d/%d/%d\n", feriados[0].dia, feriados[0].mes, feriados[0].ano);
    printf("\n");
    
    return 0;
}
