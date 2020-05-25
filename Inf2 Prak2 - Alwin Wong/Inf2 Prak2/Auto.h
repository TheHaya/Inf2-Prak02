#pragma once

class Auto {
public:
	//Konstruktor
	Auto(int leistung, float preisProPsTag);

	//Getter/Setter
	int getLeistung() {
		return leistung;
	}
	void setLeistung(int leistung) {
		this->leistung = leistung;
	}
	float getPreisProPsTag() {
		return preisProPsTag;
	}
	void setPreisProPsTag(float preisProPsTag) {
		this->preisProPsTag = preisProPsTag;
	}

	//Virtuelle Funktion zur Mietberechnung
	virtual float berechneJahresmiete(unsigned anzahlTageVermietet) = 0;
	//Virtuelle Funktion zur Bildschirmausgabe
	virtual void printInfo() = 0;

private:
	int leistung;
	float preisProPsTag;
};