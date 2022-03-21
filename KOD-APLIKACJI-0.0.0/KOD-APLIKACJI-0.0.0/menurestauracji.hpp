#ifndef MENURESTAURACJI_HPP
#define MENURESTAURACJI_HPP

class Dish
{
public:
	int number;
	string name;
	double price;
};

class DishesList
{
public:
	auto getDishes();
};

#endif // !MENU-RESTAURACJI_HPP


