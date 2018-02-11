#ifndef NAD_H_

#define NAD_H_

#include <string>

#include<iostream>

using namespace std;

class Worte
{
	public:

		Worte(char cTypeP, char cGattungP, char cNADP, string sWorteP);

		//Getters
		char getType();

		char getGattung();

		char getNAD();

		string getWorte();

		int getZahler();

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

	//Displaying the characteristics of the word
	cAttribute = getType();

	if(cAttribute == 'u')
	{
		cout << "Unbestimmter Artikel";
	}

	else if(cAttribute == 'a')
	{
		cout << "Artikel";
	}

	else if(cAttribute == 'p')
	{
		cout << "Possessivpronomen";
	}

	cout << ", ";

	cAttribute = getGattung();

	if(cAttribute == 'm')
	{
		cout << "maskulin";
	}

	else if(cAttribute == 'f')
	{
		cout << "feminin";
	}

	else if(cAttribute == 'n')
	{
		cout << "neutrale";
	}

	cout << " und ";

	cAttribute = getNAD();

	if(cAttribute == 'n')
	{
		cout << "nominativ";
	}

	else if(cAttribute == 'a')
	{
		cout << "akkusativ";
	}

	else if(cAttribute == 'd')
	{
		cout << "dativ";
	}

	//Receiving the answer

	do
	{
		cout << endl << "die Worte ist : ";

		cin >> sAntwort;

		//Checking the answer
		if(sAntwort == getWorte())
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

int main()
{
	int iZahler;


	//Aritikel-------------------------------------------------------------------------------

		//Nominativ
		Worte der('a', 'm', 'n', "der");

		Worte das('a', 'n', 'n', "das");

		Worte die('a', 'f', 'n', "die");

		Worte die2('a', 'p', 'n', "die");

		//Akkusativ
		Worte den('a', 'm', 'a', "den");

		Worte das2('a', 'n', 'a', "das");

		Worte die3('a', 'f', 'a', "die");

		Worte die4('a', 'p', 'a', "die");

		//Dativ
		Worte dem('a', 'm', 'd', "dem");

		Worte dem2('a', 'n', 'd', "dem");

		Worte der2('a', 'f', 'd', "der");

		Worte den2('a', 'p', 'd', "den");

	//Unbestimmter Artikel-------------------------------------------------------------------

		//Nominativ
		Worte ein('u', 'm', 'n', "ein");

		Worte ein2('u', 'n', 'n', "ein");

		Worte eine('u', 'f', 'n', "eine");

		//Akkusativ
		Worte einen('u', 'm', 'a', "einen");

		Worte ein3('u', 'n', 'a', "ein");

		Worte eine2('u', 'f', 'a', "eine");

		//Dativ
		Worte einem('u', 'm', 'd', "einem");

		Worte einem2('u', 'n', 'd', "einem");

		Worte einer('u', 'f', 'd', "einer");

	//Possessivpronomen--------------------------------------------------------------------

		//Nominativ
		Worte mein('p', 'm', 'n', "mein");

		Worte mein2('p', 'n', 'n', "mein");

		Worte meine('p', 'f', 'n', "meine");

		Worte meine2('p', 'p', 'n', "meine");

		//Akkusativ
		Worte meinen('p', 'm', 'a', "meinen");

		Worte mein3('p', 'n', 'a', "mein");

		Worte meine3('p', 'f', 'a', "meine");

		Worte meine4('p', 'p', 'a', "meine");

		//Dativ
		Worte meinem('p', 'm', 'd', "meinem");

		Worte meinem2('p', 'n', 'd', "meinem");

		Worte meiner('p', 'f', 'd', "meiner");

		Worte meiner2('p', 'p', 'd', "meiner");

	//iZahler = der.getZahler();

	//Creating the array of words
	//Worte wArray[] = {der, das, die, die2, den, das2, die3, die4, dem, dem2, der2, den2, ein, ein2, eine, einen, ein3, eine2, einem, einem2, einer, mein, mein2, meine, meine2, meinen, mein3, meine3, meine4, meinem, meinem2, meiner, meiner2};

	//End
	return 0;
}

#endif
