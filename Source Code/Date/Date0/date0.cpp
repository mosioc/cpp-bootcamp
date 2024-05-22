#include "date0.h"

// operations
void init_date(Date& d, int dd, int m, int y)
{
	d.day = dd;
	d.month = m;
	d.year = y;
}

void add_year(Date& d, int y)
{
	d.year += y;
}

void add_month(Date& d, int m)
{
	/* ... */
}

void add_day(Date& d, int dd)
{
	/* ... */
}
// other operations