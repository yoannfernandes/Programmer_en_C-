#include <iostream>
#include <cstdlib>
#include "CPoint.h"


//POO C++
//Class (donn�es et m�thodes)



int main()
{
	CPoint ptMonPoint;

	ptMonPoint.setX(0);
	ptMonPoint.setY(0);

	std::cout<<"X : "<<ptMonPoint.getX()<<std::endl;
	std::cout<<"Y : "<<ptMonPoint.getY()<<std::endl;


	system("pause");

	return 0;
}
