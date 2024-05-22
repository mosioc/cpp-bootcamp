#pragma once

struct Date {
	int day, month, year;
};

// operations
void init_date(Date& d, int, int, int); // initialize d
void add_year(Date& d, int); // add n years to d
void add_month(Date& d, int n); // add n months to d
void add_day(Date& d, int n); // add n days to d
// …
