#include <iostream>

// This is another source file for this C++ repo
struct Drink
{
  // Member Variables
  int amount;
  int price;
  std::string type;

  // Member Methods
  Drink();
  Drink(int howmuch, std::string whattype);
};

Drink::Drink() 
{
  amount = 10;
  price = 0;
  type = "Water";
}

Drink::Drink(int howmuch, std::string whattype)
{
  amount = howmuch;
  price = 1;
  type = whattype;
}
