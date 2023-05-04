#include<stdio.h>
#include<stdlib.h>
#include"logs.c"
#define NUM_LOG_RECORDS 10

int main() {
    srand(time(NULL));
    LogRecord* vetor = malloc(sizeof(LogRecord) * NUM_LOG_RECORDS);
    LogRecord* x = malloc(sizeof(LogRecord));
    x = generate_log_record();
    /*
    printf("%d", x->day);
    printf("\n");
    printf("%d", x->month);
    printf("\n");
    printf("%d", x->year);
    printf("\n");
    printf("%d", x->hour);
    printf("\n");
    printf("%d", x->minute);
    printf("\n");
    printf("%d", x->second);
    printf("\n");
    printf("%d", x->process_id);
    printf("\n");
    */
    for (int i = 0; i < NUM_LOG_RECORDS; i++) {
        vetor[i] = *generate_log_record();
        printf("%d", vetor[i].day);
        printf("\n");
        printf("%d", vetor[i].month);
        printf("\n");
        printf("%d", vetor[i].year);
        printf("\n");
        printf("%d", vetor[i].hour);
        printf("\n");
        printf("%d", vetor[i].minute);
        printf("\n");
        printf("%d", vetor[i].second);
        printf("\n");
        printf("%d", vetor[i].process_id);
        printf("\n");
    }
    
    free(x);
    free(vetor);
    return 0;
}