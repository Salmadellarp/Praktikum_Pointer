#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int *ptr;
	int data []={8,6,7,10,9};
	int elemen, maks;
	ptr =&data[0];
	maks =*ptr;
	for (elemen=0; elemen <=5; elemen ++)
	{
		if (*(ptr + elemen)>maks) maks=*(ptr + elemen);
		else maks=maks;
		
	}
	cout << "Nilai Maksimum		: " << maks << endl;
	return 0;
}
