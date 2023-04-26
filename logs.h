#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int process_id; // id do processo
} LogRecord;

//Funcao para gerar um registro de log
LogRecord* generate_log_record() {
    //Aloca um registro de log
    LogRecord* logRecordUnit = (LogRecord*) malloc(sizeof(LogRecord));

    if (logRecordUnit == NULL) {
        printf("Erro ao alocar memoria \n");
        exit(EXIT_FAILURE);
    }
    // Gera uma data aleatoria no intervalo de 2010 a 2022
    logRecordUnit->year = rand() % 13 + 2010;
    logRecordUnit->month = rand() % 12 + 1;
    logRecordUnit->day = rand() % 31 + 1;
    // Gera um horario aleatorio no intervalo de 00:00:00 a 23:59:59
    logRecordUnit->hour = rand() % 24;
    logRecordUnit->minute = rand() % 60;
    logRecordUnit->second = rand() % 60;
    // Gera um id de processo aleatorio
    logRecordUnit->process_id = rand() % 100;
    return logRecordUnit;
}