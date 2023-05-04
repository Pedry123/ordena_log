#include<stdio.h>
#include"bubblesort.h"

void swap(LogRecord* vetor, int i, int j) {
    LogRecord aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

void ascending(LogRecord* vetor, int j) { // Ordena em ordem crescente
    if (greater(vetor[j].process_id, vetor[j + 1].process_id)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].process_id) && greater(vetor[j].year, vetor[j + 1].year)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].year) && greater(vetor[j].month, vetor[j + 1].month)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].month) && greater(vetor[j].day, vetor[j + 1].day)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].day) && greater(vetor[j].hour, vetor[j + 1].hour)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].hour) && greater(vetor[j].minute, vetor[j + 1].minute)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].minute) && greater(vetor[j].second, vetor[j + 1].second)) {
        swap(vetor, j, j + 1);
    }
}

void descending(LogRecord* vetor, int j) { // Ordena em ordem crescente
    if (lower(vetor[j].process_id, vetor[j + 1].process_id)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].process_id) && lower(vetor[j].year, vetor[j + 1].year)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].year) && lower(vetor[j].month, vetor[j + 1].month)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].month) && lower(vetor[j].day, vetor[j + 1].day)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].day) && lower(vetor[j].hour, vetor[j + 1].hour)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].hour) && lower(vetor[j].minute, vetor[j + 1].minute)) {
        swap(vetor, j, j + 1);
    } else if (equal(vetor[j].process_id, vetor[j + 1].minute) && lower(vetor[j].second, vetor[j + 1].second)) {
        swap(vetor, j, j + 1);
    }
}

void bubblesort_ascending(LogRecord* vetor) {
    for (int i = 0; i < NUM_LOG_RECORDS; i++) {
        for (int j = 0; j < NUM_LOG_RECORDS - 1; j++) {
            ascending(vetor, j);
        }
    }
}

void bubblesort_descending(LogRecord* vetor) {
    for (int i = 0; i < NUM_LOG_RECORDS; i++) {
        for (int j = 0; j < NUM_LOG_RECORDS - 1; j++) {
            descending(vetor, j);
        }
    }
}