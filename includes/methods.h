#ifndef METHODS_H
#define METHODS_H

#include "db_struct.h"

void getCompactInfo();
void getCompactSalesInfo(int compactId, int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay);
void getMostPurchasedCompactInfo();
void getPopularArtistSalesInfo();
void getAuthorSalesInfo();
void updateTableInfo();
void preventExcessiveSales();
void getReceivedAndSoldCompactInfo(int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay);
void getCompactSalesResults(int compactId, int startYear, int startMonth, int startDay, int endYear, int endMonth, int endDay);

#endif // METHODS_H
