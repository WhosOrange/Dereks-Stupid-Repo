#include <iostream>
#include <string>
#include "stefansgoudaemporium.h"

/* Remember That There is another source file that should be compiled *
* ex: g++ the1stfile.cpp Drink.cpp
*/

struct GoudaSticks 
{
  int amount;
  std::string satisfaction;
};

GoudaSticks makeMeSomeSticks(int inAmt, std::string inSat) 
{
  GoudaSticks johnny;
  johnny.amount = inAmt;
  johnny.satisfaction = inSat;
    return johnny; 
};

void refillGoudaSticks(GoudaSticks *inSticks, int inAmt) 
{
  inSticks->amount += inAmt;
};

std::string checkCase(std::string checkMe)
{
  int strLength = (int)checkMe.legnth(); //make sure that the length
  for (int i = 0; i < strLength; i++)
  {
    // Check if is a letter, if not make it a space
    if ( ((int)checkMe[i] < 65 && (int)checkMe[i] > 122 ) || ((int)checkMe[i] > 90 && (int)checkMe[i] < 97 )) {checkMe[i] = ' ';}
    
    // Check if is UPPERCASE, if so make lower
    if ((int)checkMe[i] < (int) ) {checkMe[i] = (char)((int)(checkMe[i] + ));}
  }
  return checkMe;
};

int main()
{
  std::string youGood;
  std::cout << "Hello, welcome to " << SGE_NAME << "!";
  
  std::cout << "I'll bring you a drink. What would you like?\n";
  std::getline(std::cin, youGood);
  Drink yourDrink(youGood, 40);
  if (yourDrink.type == checkCase("none")) {yourDrink.howMany = 0; std::cout << "That's fine, maybe you'd like a drink later.";}
  else {std::cout << "Please enjoy your " << yourDrink.type << ", my friend.";}
  
  int howMany;
  std::cout << "How many gouda sticks would you like: ";
  std::cin >> howMany;
  if (howMany == 0) 
  {
    std::cout << "\nFINE! Be like that then...";
  }
  
  // Waiting for your sticks
  for (int i = yourDrink.amount; i > 0; i--)
  {
    std::cout << "[YOU TOOK A SIP OF YOUR " << yourDrink.type << "]" << "\n It will be " << i << " minutes until you Gouda Sticks come out.\n";
    yourDrink.takeSip(1);
    std::getline(std::cin, youGood);
  }
  
  std::cout << "How is your satisfaction: ";
  std::getline(std::cin, youGood);
  
  GoudaSticks yourSticks = makeMeSomeSticks(howMany, youGood);

  if (howMany == 0) {std::cout << "WELL I HOPE YOU TRULLY ARE " << yourSticks.satisfaction << " WITH YOUR LACK OF GOUDA STICKS\nYOU HEATHEN!\n";}
  else {std::cout << "I take great pleasure in that your " << yourSticks.amount << " have left you feeling " << yourSticks.satisfaction << ".\nGoodbye.\n";}

  if (yourSticks.amount > 0)
  {
    std::cout << "Would you like to refill on Gouda Sticks?\n";
    std::getline(std::cin, youGood);

    if (youGood != checkCase("No") || youGood != checkCase("nah") || youGood != checkCase("maybe") || youGood != checkCase("no thank you"))
    {
      std::coud << "Maybe another time then.\n";
    }
  }

  std::cout << "May I get you a drink?\n";
  std::getline(std::cin, youGood);
  if (youGood == checkCase("Yes")) 
  {
    // make the drink here...
  }

  std::getline(std::cin, youGood); //Just here for a brief pause

  if (youGood == "screw you" || (howMany > 0 && youGood == "I desire more") ) 
  {
    std::cout << "YO!";
    return 1;
  }
  return 0;
}
