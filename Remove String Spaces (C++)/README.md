# Remove String Spaces
Simple, remove the spaces from the string, then return the resultant string.

```cpp
#include <iostream>
#include <string>

std::string no_space(const std::string& x)
{
  std::string i = x;
  if((i.find(" ")) != std::string::npos){
      do{
            i.erase(i.begin() + i.find(" "));
                } while((i.find(" ")) != std::string::npos);
        }
     return i;
}
```
