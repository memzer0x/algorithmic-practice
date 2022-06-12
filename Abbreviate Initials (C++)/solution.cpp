#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string abbrevName(std::string name)
{
  std::string w1(1,name[0]);
  w1 += ".";
  w1.push_back(name.substr(name.find(" ") + 1, name.length())[0]);
  return w1;
}

int main(int argc, char** argv){
  std::cout << abbrevName("John Doe") << std::endl;
  std::cout << abbrevName("Jane Boe") << std::endl;
  return 0;
}
