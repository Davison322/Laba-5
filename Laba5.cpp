#include "Laba5Header.h"

int main()
{
	Planet PlanetA("PlanetA", 1488, 77777, 14.5, 123456789, 500000);
	Planet PlanetB("PlanetB", 1234, 88888, 12, 987654321, 400000);
	Planetary Magnus;

	Magnus.ListOfPlanetsAdd(PlanetA);
	Magnus.ListOfPlanetsAdd(PlanetB);
	Magnus.Print();

	Magnus.FindDistanceBetween(PlanetA, PlanetB);

	Magnus.SortByLenghtOfDay();
	Magnus.Print();
	
	double lasthope = Planetary::findAverageMass(Magnus.listOfPlanets);
	cout << lasthope << endl;
}