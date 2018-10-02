// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl;
	cout << "The size of cows is " << cows.getSize() << endl;
	cout << "The sum of cows is " << cows.getSum() << endl << endl;


	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "The size of cows is " << cows.getSize() << endl;
	cout << "cows list  :  " << cows << endl;
	cout << "The sum of cows is " << cows.getSum() << endl;
	cows.insertAsLast(5.01);
	cows.insertAsLast(3.33);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl;
	cout << "The size of cows is " << cows.getSize() << endl;
	cout << "The sum of cows is " << cows.getSum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The size of horses is " << horses.getSize() << endl;
	cout << "The sum of horses is " << horses.getSum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "The size of horses is " << horses.getSize() << endl;
	cout << "The sum of cows is " << cows.getSum() << endl;
	cout << "The sum of horses is " << horses.getSum() << endl;
	horses.insertAsLast(8.99);
	cout << "cows list  :  " << cows << endl << endl;


	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The size of pigs is " << pigs.getSize() << endl;
	cout << "The sum of horses is " << horses.getSum() << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The size of cows is " << cows.getSize() << endl;
	cout << "The size of pigs is " << pigs.getSize() << endl;
	cout << "The sum of pigs is " << pigs.getSum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl;
	cout << "The size of horses is " << horses.getSize() << endl;
	cout << "The size of pigs is " << pigs.getSize() << endl;
	cout << "The sum of pigs is " << pigs.getSum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}

