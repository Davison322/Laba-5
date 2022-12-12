#include <iostream>
#include <vector>
using namespace std;

class Planet
{
	
	friend class Planetary;

	private:
		string name;
		int massInKg;
		int orbitalVelocity;
		double meanTemperature;
		double lenghtOfDay;
		int distanceFromSun;
	public:
		Planet(string namee, int mass, int velocity, double temperature, double lenghtofday, int distance)
		{
			name = namee;
			massInKg = mass;
			orbitalVelocity = velocity;
			meanTemperature = temperature;
			lenghtOfDay = lenghtofday;
			distanceFromSun = distance;
		};
};

enum type
{
	TERRESTRIAL,
	JOVIAN
};

class Planetary
{
	public:
	vector<Planet> listOfPlanets;

	public:

	void listOfPlanetsAdd(Planet somePlanet)
	{
		listOfPlanets.push_back(somePlanet);
	}

	double findDistanceBetween(Planet firstPlanet, Planet secondPlanet)
	{
		cout << firstPlanet.distanceFromSun + secondPlanet.distanceFromSun << endl;
	}

	void print()
	{
		for (int i = 0; i < listOfPlanets.size(); i++)
		{
			cout << listOfPlanets[i].name << " ";
		}
		cout << endl;
	}

	void sortByLenghtOfDay()
	{
		int i, j;
		int n = listOfPlanets.size();
		for (int i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if (listOfPlanets[j].distanceFromSun > listOfPlanets[j + 1].distanceFromSun)
				{
					swap(listOfPlanets[j], listOfPlanets[j + 1]);
				}
			}
		}

	}

	static double findAverageMass(vector<Planet> listOfPlanets)
	{
		double sum = 0;
        for (int i = 0; i < listOfPlanets.size(); i++) {
            sum += listOfPlanets[i].massInKg;
        }
		double avarege = (double)sum / listOfPlanets.size();
        return avarege;
	}


};



int main()
{
	Planet PlanetA("PlanetA", 1488, 77777, 14.5, 123456789, 500000);
	Planet PlanetB("PlanetB", 1234, 88888, 12, 987654321, 400000);
	Planetary Magnus;

	Magnus.listOfPlanetsAdd(PlanetA);
	Magnus.listOfPlanetsAdd(PlanetB);
	Magnus.print();

	Magnus.findDistanceBetween(PlanetA, PlanetB);

	Magnus.sortByLenghtOfDay();
	Magnus.print();
	
	double lasthope = Planetary::findAverageMass(Magnus.listOfPlanets);
	cout << lasthope << endl;
}