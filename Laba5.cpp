#include <iostream>
#include <vector>
using namespace std;

class Planet
{
	
	friend Planetary;

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
	private:
	Planet arr[3];
	

};