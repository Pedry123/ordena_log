ComparisonCategory categories[] = { PROCESS_ID, YEAR, MONTH, DAY, HOUR, MINUTE, SECOND };

void swap(LogRecord* vetor, int i, int j) {
    LogRecord aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

int compare(LogRecord* record1, LogRecord* record2, ComparisonCategory category) {
    switch(category) {
        case PROCESS_ID:
            return record1->process_id - record2->process_id;
        case YEAR:
            return record1->year - record2->year;
        case MONTH:
            return record1->month - record2->month;
        case DAY:
            return record1->day - record2->day;
        case HOUR:
            return record1->hour - record2->hour;
        case MINUTE:
            return record1->minute - record2->minute;
        case SECOND:
            return record1->second - record2->second;
        default:
            return 0;
    }
}

void ascending(LogRecord* vetor, int j) {
    int i;
    for (i = 0; i < 7; i++) {
        ComparisonCategory category = categories[i];
        int result = compare(&vetor[j], &vetor[j + 1], category);
        if (result > 0) {
            swap(vetor, j, j + 1);
            break;
        } else if (result < 0) {
            break;
        }
    }
}

void descending(LogRecord* vetor, int j) {
    int i;
    for (i = 0; i < 7; i++) {
        ComparisonCategory category = categories[i];
        int result = compare(&vetor[j], &vetor[j + 1], category);
        if (result < 0) {
            swap(vetor, j, j + 1);
            break;
        } else if (result > 0) {
            break;
        }
    }
}


void bubblesort(LogRecord* vetor, Order order) {
    for (int i = 0; i < NUM_LOG_RECORDS; i++) {
        for (int j = 0; j < NUM_LOG_RECORDS - 1; j++) {
            if (order == DESCENDING) {
                descending(vetor, j);
            }
            else {
                ascending(vetor, j);
            }
        }
    }
}

