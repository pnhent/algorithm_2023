#include <stdio.h>
#include <stdlib.h>

typedef struct _Point
{
	int x;
	int y;
	int z;
} Point;

Point myPoints[10] = { {0,0,0} };
Point yourPoints[] = { {1,2,3},{4,5,6} };

Point sum(Point argPoints[], int size)
{
	Point result = { 0,0,0 };

	for (int i = 0; i < size; i++)
	{
		result.x = result.x + argPoints[i].x;
		result.y += argPoints[i].y;
		result.z += argPoints[i].z;
		return result;
	}
}

int main(void)
{
	int size = sizeof(yourPoints) / sizeof(yourPoints[0]);
	sum(yourPoints, size);
	return 0;
}

