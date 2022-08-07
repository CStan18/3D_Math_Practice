#include "Point.h"

// Vector addition
Point Point::AddVector(Vector v)
{
	Point destinationPoint;

	destinationPoint.x = x + v.x;
	destinationPoint.y = y + v.y;
	destinationPoint.z = z + v.z;

	return destinationPoint;
}