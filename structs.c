#define NUM_LOG_RECORDS 10
typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
    int process_id; // id do processo
} LogRecord;

typedef enum {
    PROCESS_ID,
    YEAR,
    MONTH,
    DAY,
    HOUR,
    MINUTE,
    SECOND
} ComparisonCategory;

typedef enum {
    ASCENDING,
    DESCENDING
} Order;
