#include <stdio.h>
#include <stdlib.h>

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

/**
 * @brief this type defines a agenda that contains
 * nElem elements, with its "descricoes"
 * and respective "datas"
 * 
 */
typedef struct s_agenda
{
    int nElem;
    int elemAtual;
    char **descricoes;
    Data *datas;
} Agenda;

Agenda criaAgenda(int nElements) {
    Agenda agenda;

    agenda.elemAtual = 0;
    agenda.nElem = nElements;
    agenda.descricoes = (char**) malloc(sizeof(char*) * nElements);
    agenda.datas = (Data*) malloc(sizeof(Data) * nElements);

    return agenda;
}

Data criaData(int dia, int mes, int ano) {

    Data d;

    d.dia = dia;
    d.mes = mes;
    d.ano = ano;

    return d;
}

void insereData(Agenda *agenda, Data d, char* descricao) {

    agenda->datas[agenda->elemAtual] = d;
    agenda->descricoes[agenda->elemAtual] = descricao;

    agenda->elemAtual++;

}

int main()
{
    Agenda myAgenda = criaAgenda(1);


    insereData(&myAgenda, criaData(28, 07, 2022), "Aula");


    for(int i = 0; i < myAgenda.nElem; i++){
        printf("==============\n"); 
        printf("Data: %d/%d/%d\n", myAgenda.datas[i].dia+1, myAgenda.datas[i].mes, myAgenda.datas[i].ano, myAgenda.descricoes[i]); 
        printf("Descricao: %s", myAgenda.descricoes[i]); 
        printf("\n");
    }

    return 0;
}
