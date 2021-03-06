#ifndef PIZZA_INGREDIENT_FACTORY_H
#define PIZZA_INGREDIENT_FACTORY_H

/*******************************************************************************
* PizzaIngredientFactory.h
*
* Author: Ángel Pérez
*
* dd/mm/yyyy - Version 
*******************************************************************************/

/* Include section
*******************************************************************************/
#include "pizzas/ingredientsFactory/Dough.h"
#include "pizzas/ingredientsFactory/Sauce.h"

/* Defines section
*******************************************************************************/

class PizzaIngredientFactory {
public:
	// DESTRUCTOR
	/**
	 *
	 */
	virtual ~PizzaIngredientFactory() {};

	// MANIPULATORS
	/**
	 *
	 */
	virtual Dough * createDough() = 0;
	/**
	 *
	 */
	virtual Sauce * createSauce() = 0;

};

#endif // PIZZA_INGREDIENT_FACTORY_H