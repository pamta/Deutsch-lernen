#include "NAD.h"

using namespace std;


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
	Worte wArray[50] = {der, das, die, die2, den, das2, die3, die4, dem, dem2, der2, den2, ein, ein2, eine, einen, ein3, eine2, einem, einem2, einer, mein, mein2, meine, meine2, meinen, mein3, meine3, meine4, meinem, meinem2, meiner, meiner2};

	cout << wArray[1].getGattung() << endl;	

	//End
	return 0;
}
