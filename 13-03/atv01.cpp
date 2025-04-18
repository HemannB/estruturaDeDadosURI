#include <iostream>

int main()
{
	int number, number2, number3, bigger, smaller;
	std::cout<<"Digite 3 números inteiros"<<std::endl;
	std::cin>>number >> number2 >> number3;
	
	bigger = number;
	if(number2 > bigger)
	{
		bigger = number2;
	}
	if(number3 > bigger)
	{
		bigger = number3;
	}
	
	smaller = number;
	if(number2 < smaller)
	{
		smaller = number2;
	}
	if(number3 < smaller)
	{
		smaller = number3;
	}
	
	std::cout<< "O maior é " << bigger<< std::endl << "O menor é " <<smaller<<std::endl;
	
	if(number == number2 && number2 == number3)
	{
		std::cout<< "Números 1, 2 e 3 são iguais";
	}
	else if(number == number2)
	{
		std::cout<<"Números 1 e 2 são iguais";
	}
	else if(number == number3)
	{
		std::cout<<"Números 1 e 3 são iguais";
	}
	else if(number2 == number3)
	{
		std::cout<<"Números 2 e 3 são iguais";
	}
	
	return 0;
}