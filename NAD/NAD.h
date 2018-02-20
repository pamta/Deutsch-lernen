#ifndef NAD_H_

#define NAD_H_

#include <string>

#include<iostream>

#include<stdio.h>

#include<stdlib.h>

#include<time.h>

using namespace std;

class Worte
{
	public:
		//Constructors
		Worte();

		Worte(char cTypeP, char cGattungP, char cNADP, string sWorteP);

		//Getters
		char getType();

		char getGattung();

		char getNAD();

		string getWorte();

		int getZahler();

		int getZahl();

		//Making the question, receiving the answer
		void process();

		//Returning an object from its Zahl
		Worte wReturn(int iZahlP, Worte wArray[]);

		//Function to return a random number from 0 to iZahler
		int returnRandom();

	

	private:

		//Zahler
		static int iZahler;

		//die Zahl für die Worte
		int iZahl;

		//unbestimmter Artikel(u), Artikel(a) oder Possessivpronomen(p)
		char cType;

		//Maskulin(m), feminin(f), neutrale(n) oder plural(p)
		char cGattung;

		//n für Nominativ, a für Akkusativ, d für Dativ
		char cNAD;

		//die Worte
		string sWorte;

};

int Worte :: iZahler = 0;

//Constructors

//iZahler should not be increased here, problems would be caused because of the creation of an array of this class
Worte :: Worte()
{
	cType = '0';

	cGattung = '0';

	cNAD ='0';
}

Worte :: Worte(char cTypeP, char cGattungP, char cNADP, string sWorteP)
{
	cType = cTypeP;

	cGattung = cGattungP;

	cNAD = cNADP;

	sWorte = sWorteP;

	iZahler++;

	iZahl = iZahler;
}

//Getters

inline int Worte :: getZahler()
{
	return iZahler;
}

inline int Worte :: getZahl()
{
	return iZahl;
}

inline char Worte :: getType()
{
	return cType;
}

inline char Worte :: getGattung()
{
	return cGattung;
}

inline char Worte :: getNAD()
{
	return cNAD;
}

inline string Worte :: getWorte()
{
	return sWorte;
}

//Function that returns the word that has the value of iZahlP in iZahl
//Since the index number is the same.
Worte Worte :: wReturn(int iZahlP, Worte wArray[])
{
	return wArray[iZahlP];
}

//Function to return a random number between 0 and iZahler
int Worte :: returnRandom()
{
	//Variable to store the random value
	int iRandom;

	//Inizializating the seed
	srand(time(NULL));

	//Generating the number between 0 and iZahler
	iRandom = rand() % iZahler + 1;

	//Returning the random number
	return iRandom;
}

void Worte :: process()
{
	//Result
	bool bResult;

	//Char to store any attribute
	char cAttribute;

	//string to save the user's answer
	string sAntwort;

	cout << endl << "Beschreibung:" << endl;

	if(cType == 'u')
	{
		cout << "Unbestimmter Artikel";
	}

	else if(cType == 'a')
	{
		cout << "Artikel";
	}

	else if(cType == 'p')
	{
		cout << "Possessivpronomen";
	}

	cout << ", ";

	if(cGattung == 'm')
	{
		cout << "maskulin";
	}

	else if(cGattung == 'f')
	{
		cout << "feminin";
	}

	else if(cGattung == 'n')
	{
		cout << "neutrale";
	}

	else if(cGattung == 'p')
	{
		cout << "plural";
	}

	cout << " und ";

	if(cNAD == 'n')
	{
		cout << "nominativ";
	}

	else if(cNAD == 'a')
	{
		cout << "akkusativ";
	}

	else if(cNAD == 'd')
	{
		cout << "dativ";
	}

	//Receiving the answer

	do
	{
		cout << endl << "die Worte ist : ";

		cin >> sAntwort;

		//Checking the answer
		if(sAntwort == sWorte)
		{
			cout << "Das ist richtig!" << endl;

			bResult = true;
		}

		else
		{
			cout << "Das ist nicht richtig :c. Versuch es noch einmal bitte" << endl;

			bResult = false;
		}
	}while(!(bResult));
	
}
#endif
