#include "mainHeader.h"


int main(){
	std::string greeting = "Hello World!!";

	std::cout << greeting << std::endl;

	StringWork sw;
	greeting = sw.toLower("Helloe There!!464");
	std::cout << "Lower case : " << greeting << std::endl;
	greeting = sw.toUpper("Helloe There");
	std::cout << "Upper case : " << greeting << std::endl;



	//terminate program
	system("Pause");
	return 0;
}