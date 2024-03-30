#include <iostream>
#include "calculator.h"

namespace
{
	void quitWithError()
	{
		std::cout << "Niepoprawna operacja!" << std::endl;
		exit(EXIT_FAILURE);
	}
} // anonymous namespace //

// Place your definitions here //

// Funkcje na liczbach //

float add(float x, float y)
{
	return x+y;
};

float subtract(float x, float y)
{
	return x-y;
};

float multiply(float x, float y)
{
	return x*y;
};

float divide(float x, float y)
{

	if(y!=0)
        {
		return x/y;
        }
	else
        {
		quitWithError();
        }

};

float calculate(Operation operation, float x, float y)
{
	if(operation==Operation::ADD)
    {
		return add(x,y);
    }
	if(operation==Operation::SUBTRACT)
	{
		return subtract(x,y);
	}
	if(operation==Operation::MULTIPLY)
	{
		return multiply(x,y);
	}
	if(operation==Operation::DIVIDE)
	{
		return divide(x,y);
	}
	else
	{
        std::cout << "Niepoprawna operacja! \n";
        return 0;
	}
};
