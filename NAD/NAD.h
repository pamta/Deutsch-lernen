#ifndef NAD_H_

#define NAD_H_

#include <string>

#include<iostream>

using namespace std;

class Worte
{
	public:
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
		void Process();

		//Returning an object from its Zahl
		Worte wReturn(int iZahlP);

	

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

Worte :: Worte()
{
	cType = '0';

	cGattung = '0';

	cNAD ='0';

	iZahler++;

	iZahl = iZahler;
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

Worte Worte :: wReturn(int iZahlP)
{
	//Object to return
	//Worte wWorte;

	for(int i = 0; i < iZahler; i++)
	{
		
	}
}

void Worte :: Process()
{
	//Result
	bool bResult;

	//Char to store any attribute
	char cAttribute;

	//string to save the user's answer
	string sAntwort;

	cout << "Beschreibung:" << endl;

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
			cout << "Das ist richtig";

			bResult = true;
		}

		else
		{
			cout << "Das ist nicht richtig :c. Versuch es noch einmal bitte";

			bResult = false;
		}
	}while(!(bResult));
	
}
#endif
