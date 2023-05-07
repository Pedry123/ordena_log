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