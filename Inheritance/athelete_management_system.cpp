#include <iostream>
#include <string>
#include <vector>
using namespace std;

// TODO 1: Define the base class Athlete
class Athlete 
{
protected:
    string name;
    int age;
    string sport;

public:
    // TODO 2: Define constructor to initialize name, age, and sport
    Athlete(string n, int a, string s) 
    {
        name = n;
        age = a;
        sport = s;
    }

    // TODO 3: Define printInfo() to display basic athlete info
    void printInfo() const 
    {
        cout << "Name: " << name << ", Age: " << age << ", Sport: " << sport << endl;   
    }

    // TODO 4: Define train() with a generic message
    void train() 
    {
        // Example: Athlete is doing general training.
        cout << name << " is doing general training." << endl;
    }
};

// TODO 5: Define class Runner : public Athlete
class Runner : public Athlete 
{
private:
    double topSpeed;

public:
    // TODO 6: Constructor with initializer list
    Runner(string n, int a, double speed) : Athlete(n, a, "Running"), topSpeed(speed) {}

    // TODO 7: Override train() with specific message
    void train() const 
    {
        cout << "Runner " << name << " is sprinting at " << topSpeed << " km/h." << endl;
    }
};

// TODO 8: Define class Swimmer : public Athlete
class Swimmer : public Athlete 
{
private:
    string strokeType;

public:
    // TODO 9: Constructor with initializer list
    Swimmer(string n, int a, string stroke) : Athlete(n, a, "Swimming"), strokeType(stroke) {}

    // TODO 10: Override train() with specific message
    void train() const 
    {
        // Example: Swimmer Mia is swimming freestyle stroke.
        cout << "Swimmer " << name << " is training in " << strokeType << " stroke." << endl;
    }
};

// TODO 11: Define class BasketballPlayer : public Athlete
class BasketballPlayer : public Athlete 
{
private:
    int verticalLeap;

public:
    // TODO 12: Constructor with initializer list
    BasketballPlayer(string n, int a, int leap) : Athlete(n, a, "Basketball"), verticalLeap(leap) {}

    // TODO 13: Override train() with specific message
    void train() const 
    {
        cout << "Basketball player " << name << " is training vertical leap of " << verticalLeap << " inches." << endl;
    }
};

int main() 
{
    // TODO 14: Create vectors for each athlete type
    vector<Runner> runners;
    vector<Swimmer> swimmers;
    vector<BasketballPlayer> basketballPlayers;

    // TODO 15: Add at least 2 objects to each vector
    runners.push_back(Runner("Usain Bolt", 34, 44.72));
    runners.push_back(Runner("Florence Griffith-Joyner", 38, 39.5));

    swimmers.push_back(Swimmer("Katie Ledecky", 24, "Freestyle"));
    swimmers.push_back(Swimmer("Michael Phelps", 36, "Butterfly"));

    basketballPlayers.push_back(BasketballPlayer("LeBron James", 36, 40));
    basketballPlayers.push_back(BasketballPlayer("Kawhi Leonard", 30, 35));
    

    // TODO 16: Loop through runners and call printInfo() and train()
    for (auto& runner : runners) 
    {
        runner.printInfo();
        runner.train();
    }

    // TODO 17: Loop through swimmers and call printInfo() and train()
    for (auto& swimmer : swimmers) 
    {
        swimmer.printInfo();
        swimmer.train();
    }

    // TODO 18: Loop through basketball players and call printInfo() and train()
    for (const auto& player : basketballPlayers) 
    {
        player.printInfo();
        player.train();
    }

    return 0;
}