#ifndef HIGHLANDER_H
#define HIGHLANDER_H

#inlude <string>
using namespace std;

clas Highlander{
  private:
  string name;
static int count;

public:
Highlander();
Highlander(string n);
~Highlander();

static string speak();
string status();
};

#endif
