/*
* Hauptprogramm.cpp
*
* V1.0 / Wolfram Schenck (05.05.2016)
* V1.01 / Wolfram Schenck (13.05.2017)
* V1.02 / Wolfram Schenck (10.05.2018)
* V2.0 / Nico Migenda (17.04.2019)
*
* Hauptprogramm fuer die 2. Praktikumsaufgabe
* in INF2 im SS20
*/

#include "AutovermietungsGesellschaft.h"
#include "Elektroauto.h"
#include "PKW.h"
#include <iostream>

int main()
{
	// PKW mit einer Leistung von 160 PS, 0.71 E pro PS und mit Navigationssystem
	PKW PKW01(160, 0.71f, true);
	// PKW mit einer Leistung von 210 PS, 0.85 E pro PS und ohne Navigationssystem
	PKW PKW02(210, 0.85f, false);
	// Elektroauto mit einer Leistung von 110 PS, 2.12 E pro PS, ohne Navigationssystem, einer Akkukapazitaet
	// von 80 kWh und einem kWh Preis von 0.33 E
	Elektroauto elektroauto01(110, 2.12f, false, 80.0f, 0.33f);
	// Elektroauto mit einer Leistung von 98 PS, 2.03 E pro PS, mit Navigationssystem, einer Akkukapazitaet
	// von 95 kWh und einem kWh Preis von 0.34 E
	Elektroauto elektroauto02(98, 2.03f, true, 95.0f, 0.34f);

	AutovermietungsGesellschaft HinzKunzAutos;
	HinzKunzAutos.addAuto(&PKW01);
	HinzKunzAutos.addAuto(&PKW02);
	HinzKunzAutos.addAuto(&elektroauto01);
	HinzKunzAutos.addAuto(&elektroauto02);

	HinzKunzAutos.printListe();

	std::cout << "JAHRESMIETEINNAHMEN der Gesellschaft, wenn jedes\n"
		<< "Auto 300 Tage im Jahr vermietet ist: "
		<< HinzKunzAutos.berechneGesamtJahresmiete(300)
		<< std::endl << std::endl;

	system("PAUSE");
	return 0;
}