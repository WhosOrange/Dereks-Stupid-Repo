#include <iostream>
#include <string>

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
  int howMany;
  std::cout << "How many gouda sticks would you like: ";
  std::cin >> howMany;
  if (howMany == 0) 
  {
    std::cout << "\nFINE! Be like that then...";
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

  std::getline(std::cin, youGood); //Just here for a brief pause

  if (youGood == "screw you" || (howMany > 0 && youGood == "I desire more") ) 
  {
    std::cout << "YO!";
    return 1;
  }
  return 0;
}
