
#pragma once

#include <set>
#include <string>

using namespace std;

class Module {

  private:
    const string logtag = "Module";

  public:
    Module();
    ~Module();

    int add(int x, int y);
};
