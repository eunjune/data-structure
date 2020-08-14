#include <stdio.h>
#include "Point.h"

void set(Point* point, int x, int y)
{
	point->x = x;
	point->y = y;
}


void show(Point* point)
{
	printf("[%d %d]\n", point->x, point->y);
}

int compare(Point* point1, Point* point2)
{
	if (point1->x == point2->x && point1->y == point2->y)
	{
		return ALL_MATCH;
	}
	else if (point1->x == point2->x)
	{
		return X_MATCH;
	}
	else if (point1->x == point2->x)
	{
		return Y_MATCH;
	}
	
	return NON_MATCH;
}