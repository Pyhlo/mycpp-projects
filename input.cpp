#include <iostream>
#include <list>
#include <string>
#include <algorithm>

const float mars_gravity = 0.38;
const float mercury_gravity = 0.38;
const float earth_gravity = 1.0;
const float venus_gravity = 0.91;
const float jupiter_gravity = 2.34;
const float saturn_gravity = 0.93;
const float uranus_gravity = 0.92;
const float neptune_gravity = 1.12;
std::list<std::string> allowedPlanets = {"Mars", "Mercury", "Home", "Earth", "Venus", "Jupiter", "Saturn", "Uranus", "Neptune"};

bool checkIfPlanetExist(std::string planet) {
    std::list<std::string>::iterator it;

    it = std::find(allowedPlanets.begin(), allowedPlanets.end(), planet);

    if (it != allowedPlanets.end()) {
        return true; //does exist
    } else {
        return false; //does not exist
    }

}

float convertWeight(std::string planet, float weight) {
    std::cout << "Converting your weight..." << std::endl; //remove this line
    if (planet == "Mars") {
        return weight*mars_gravity;
    } else if (planet == "Mercury") {
        return weight*mercury_gravity;
    } else if (planet == "Earth" || planet == "Home") {
        return weight*earth_gravity;
    } else if (planet == "Venus") {
        return weight*venus_gravity;
    } else if (planet == "Jupiter") {
        return weight*jupiter_gravity;
    } else if (planet == "Saturn") {
        return weight*saturn_gravity;
    } else if (planet == "Uranus") {
        return weight*uranus_gravity;
    } else if (planet == "Neptune") {
        return weight*neptune_gravity;
    } else {
        return 0;
    }
    return 0;
}

std::string capitalize(std::string word) {
    //std::string capitalize;
    word[0] = toupper(word[0]);
    //std::cout << word;
    return word;
}

int main() {
    float weight;
    std::cout << "How much do you weight on earth? ";
    std::cin >> weight;
    if (std::cin.fail() == 1) {
        std::cout << "Your weight must be a normal number!";
        return 0;
    }
    std::string planet;
    std::cout << "Which planet do you want to get your weight on? ";
    std::cin >> planet;

    float mass = weight/earth_gravity;
    //std::cout << mass << std::endl;

    planet = capitalize(planet);

    if (not checkIfPlanetExist(planet)) {
        std::cout << "The planet " << planet << " doesn't exist!" << std::endl;
        return 0;
    }

    float newWeight = convertWeight(planet, mass);

    std::cout << "Your weight on the planet " << planet << " is " << newWeight << " kg" <<std::endl;
    //weight = mass*surface gravity
    return 0;
}