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
  void takeSip(int howmuch);
  void refill(int howmuch);
  void spill();
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

void Drink::takeSip(int howmuch)
{
  amount -= howmuch;
  if (amount == 0) {amount = 0;}
}

void Drink::refill(int howmuch)
{
  if (price == 0)
  {
    amount = howmuch;
  }
  else
  {
    std::cout << "Refills cost " << amount << "\n";
  }
}

void Drink::spill()
{
  amount = 0;
  std::cout << "Oh dear, your " << type << " just spilled!\n";
}
