#ifndef POINT
#define POINT

enum { NON_MATCH, X_MATCH, Y_MATCH, ALL_MATCH };

typedef struct point
{
	int x;
	int y;
} Point;

void set(Point* point, int x, int y);
void show(Point* point);
int compare(Point* point1, Point* point2);

#endif