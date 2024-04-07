#include <iostream>
#include <string>

struct GoudaSticks 
{
  int amount;
  std::string satisfaction;
};

GoudaSticks makeMeSomeSticks(int inAmt, std::string inSat) 
{
  GoudaStick johnny;
  johnny.amount = inAmt;
  johnny.satisfaction = inSat;
    return johnny; 
};

int main()
{
  std::string youGood;
  int howMany;
  std::cout << "How many gouda sticks would you like: ";
  std::cin >> howMany;
  if (howMany == 0) 
  {
    std::cout << "\nFINE! Be like that then...";
  }
  std::cout << "How is your satisfaction: ";
  std::getline(std::cin, youGood);
  
  GoudaStick yourSticks = makeMeSomeSticks(howMany, youGood);

  if (howMany == 0) {std::cout << "WELL I HOPE YOU TRULLY ARE " << yourSticks.satisfaction << " WITH YOUR LACK OF GOUDA STICKS\nYOU HEATHEN!\n";}
  else {std::cout << "I take great pleasure in that your " << yourSticks.amount << " have left you feeling " << yourSticks.satisfaction << ".\nGoodbye.\n";}

  std::getline(std::cin, youGood); //Just here for a brief pause

  if (youGood == "screw you") {return 1;}
  return 0;
}
