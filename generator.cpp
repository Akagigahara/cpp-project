#include <fstream>
#include <iostream>

using namespace std;

class generator
{
  public:
    string startBracket();
    string endBracket();
  
};

string generator::startBracket()
{
  return "{";
}

string generator::endBracket()
{
  return "}";
}