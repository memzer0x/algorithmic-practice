#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include <map>
#include <cstdlib>

std::vector<std::string> letterCombinations(std::string digits) {
  std::vector<int> d = {};
  std::vector<std::string> result = {};
  std::map<int, std::string> m = {
    {2, "abc"},
    {3, "def"},
    {4, "ghi"},
    {5, "jkl"},
    {6, "mno"},
    {7, "pqrs"},
    {8, "tuv"},
    {9, "wxyz"}
  };

  std::for_each(digits.begin(), digits.end(), [&](const char& u){
                  d.push_back((int)u - 48);
                });

  std::for_each(d.begin(), d.end(), [](const int& u){
                  std::cout << u << "\n";
                });
  /* loop on each digits */
  for(int i = 0; i < d.size(); i++){
//    char currentCharacter = m[d[i]][0]; // set first character to the current currentCharacter
      std::string currentSequence = m[d[i]];
      std::for_each(currentSequence.begin(), currentSequence.end(), [](const char& k){
                      std::cout << k;
                    });
      std::cout << std::endl;
      /* loop on each characters */
      for(int j = 0; j < currentSequence.length(); j++){
        /* loop on other ones */
        for(int k = 0; k < d.size(); k++){
          for(int z = 0; z < currentSequence.length(); z++){
            std::cout << currentSequence[j] << m[d[k]][z] << std::endl;
          }
        }
      }
}

int main(int argc, char** argv){
  letterCombinations("234");
//  letterCombinations("3435");
  return 0;
}
