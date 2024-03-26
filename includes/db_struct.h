#ifndef DB_STRUCT_H
#define DB_STRUCT_H

typedef struct {
    char singer_name[256];
    char song_name[256];
    char author[256];
    int disk_id;
} Singer;

typedef struct {
    int transaction_year;
    int transaction_month;
    int transaction_day;
    char transaction_code[2]; // 'p' for purchase or 's' for sale
    int disk_id;
    int disk_quantity;
} Sells;

typedef struct {
    int id;
    int year;
    int month;
    int day;
    int manufacturer;
    int price;
} Disk;

#endif // DB_STRUCT_H
