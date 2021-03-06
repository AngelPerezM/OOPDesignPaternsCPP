/*******************************************************************************
* .cpp
*
* Author: Ángel Pérez
*
* 14/08/2020 - Version 1
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "NYPizzaStore.h"				// Creator class.
#include "ChicagoPizzaStore.h"			// Creator class.
#include <iostream>

/* Defines section
*******************************************************************************/

/* Function definitions
*******************************************************************************/
int main() {
	// NY
	PizzaStore *pizzaStore = new NYPizzaStore();

	std::cout << std::endl;
	Pizza *pizza =  pizzaStore->orderPizza("Cheese");		
	delete pizza;

	std::cout << std::endl;
	pizza =  pizzaStore->orderPizza("Pepperoni");	
	delete pizza;

	delete pizzaStore;

	// Chicago
	pizzaStore = new ChicagoPizzaStore();

	std::cout << std::endl;
	pizza =  pizzaStore->orderPizza("Cheese");	
	delete pizza;

	std::cout << std::endl;
	pizza =  pizzaStore->orderPizza("Pepperoni");	
	delete pizza;
	
	delete pizzaStore;
}