#include <string>
#include <iostream>
#include <vector>
#include <map>

using namespace std;


class Graphe
{
public:
	vector<Sommet> getStations();
	Graphe creerGraphe();
	Graphe lireGraphe();
	Graphe extractionGraphe();

private:
	vector<Sommet> stations_;
};

class Chemin
{
public:
	int getDistanceTotale();
	vector<Sommet> getStationsChemin();
	void plusCourtChemin();

private:
	int distanceTotale_;
	vector<Sommet> stationsChemin_;
};

class Vehicule
{
public: 
	Type getType();
	int getAutonomieMax();

private:
	Type type_;
	int autonomieMax_;
	int autonomieActuel_;
};

enum Type{ ELECTRIQUE, ESSENCE, HYBRIDE};

class Sommet
{
public: 
	char getIdentifiant();
	map<Sommet, int> getArcs();
	SourceEnergie getSource();

private:
	map<Sommet, int> arcs_;
	int degreEntrant;
	int degreSortant;
	int degreDuSommet = degreEntrant + degreSortant;
	char identifiant_;
	SourceEnergie source_;
};

enum SourceEnergie {essence, elec, multi, null};

class Interface
{
public:
	void menu();
	void afficherMenu(); // switch case avec options du menu
	void afficherParcours(); // thingy with the A --> B
private:

};
