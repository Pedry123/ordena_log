#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"logs.c"
#include"comparators.c"
#include"bubblesort.c"

int compareLogRecords(const LogRecord a, const LogRecord b) {
    if (a.process_id != b.process_id) {
        return a.process_id - b.process_id;
    }
    if (a.year != b.year) {
        return a.year - b.year;
    }
    if (a.month != b.month) {
        return a.month - b.month;
    }
    if (a.day != b.day) {
        return a.day - b.day;
    }
    if (a.hour != b.hour) {
        return a.hour - b.hour;
    }
    if (a.minute != b.minute) {
        return a.minute - b.minute;
    }
    return a.second - b.second;
}

void insertionsort(LogRecord* vetor) {
    for (int i = 1; i < NUM_LOG_RECORDS; i++) {
        LogRecord aux = vetor[i];
        int j = i - 1;
        while (j >= 0 && compareLogRecords(vetor[j], aux) > 0) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    } 
}

/*
void insertionsort(LogRecord* vetor) {
    for (int i = 1; i < NUM_LOG_RECORDS; i++) {
        LogRecord aux = vetor[i];
        int j = i - 1;
        if (greater(vetor[j].process_id, aux.process_id)) {
            while (j >= 0) {
                vetor[j + 1] = vetor[j];
                j--;
            }
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && greater(vetor[j].year, aux.year)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && equal(vetor[j].year, aux.year) && greater(vetor[j].month, aux.month)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && equal(vetor[j].year, aux.year) && equal(vetor[j].month, aux.month) && greater(vetor[j].day, aux.day)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && equal(vetor[j].year, aux.year) && equal(vetor[j].month, aux.month) && equal(vetor[j].day, aux.day) && greater(vetor[j].hour, aux.hour)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && equal(vetor[j].year, aux.year) && equal(vetor[j].month, aux.month) && equal(vetor[j].day, aux.day) && equal(vetor[j].hour, aux.hour) && greater(vetor[j].minute, aux.minute)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        while (j >= 0 && equal(vetor[j].process_id, aux.process_id) && equal(vetor[j].year, aux.year) && equal(vetor[j].month, aux.month) && equal(vetor[j].day, aux.day) && equal(vetor[j].hour, aux.hour) && equal(vetor[j].minute, aux.minute) && greater(vetor[j].second, aux.second)) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    } 
}
*/

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
        printf("\n\n");
    }

    insertionsort(vetor);
    //bubblesort_descending(vetor);
    printf("Agora ordenado:\n");

    for (int i = 0; i < NUM_LOG_RECORDS; i++) {
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
        printf("\n\n");
    }
    
    free(x);
    free(vetor);
    return 0;
}