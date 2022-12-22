#include <iostream>
#include <vector>
using namespace std;

class Planet
{
	
	friend class Planetary;

	private:
		string name;
		int mass_in_kg;
		int orbital_velocity;
		double mean_temperature;
		double lenght_of_day;
		int distance_from_sun;
	public:
		Planet(string namee, int mass, int velocity, double temperature, double lenght_of_day, int distance)
		{
			name = namee;
			mass_in_kg = mass;
			orbital_velocity = velocity;
			mean_temperature = temperature;
			lenght_of_day = lenght_of_day;
			distance_from_sun = distance;
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

	void ListOfPlanetsAdd(Planet somePlanet)
	{
		listOfPlanets.push_back(somePlanet);
	}

	double FindDistanceBetween(Planet firstPlanet, Planet secondPlanet)
	{
		cout << firstPlanet.distance_from_sun + secondPlanet.distance_from_sun << endl;
	}

	void Print()
	{
		for (int i = 0; i < listOfPlanets.size(); i++)
		{
			cout << listOfPlanets[i].name << " ";
		}
		cout << endl;
	}

	void SortByLenghtOfDay()
	{
		int i, j;
		int n = listOfPlanets.size();
		for (int i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - i - 1; j++)
			{
				if (listOfPlanets[j].distance_from_sun > listOfPlanets[j + 1].distance_from_sun)
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
            sum += listOfPlanets[i].mass_in_kg;
        }
		double avarege = (double)sum / listOfPlanets.size();
        return avarege;
	}


};