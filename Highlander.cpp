#include "Highlander.h"

int Highlander::count = 0;

Highlander::Highlander(){
name = "Unknown";
count++;
}

Highlander::Highlander(string n) {
name = n;
count++; 
}

Highlander::~Highlander(){
count--;
}

string Highlander::speak() {
return "There can only be one. But now there are " + to_string(count);
}

string Highlander::status(){
  if (count == 1)
    return "Immortal";

return "Murderous";
