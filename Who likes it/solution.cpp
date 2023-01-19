//Solution by https://github.com/Spion-Spion
/*You probably know the "like" system from Facebook and other pages.People can "like" blog posts, pictures or other items.We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item.It must return the display text as shown in the examples :

[] -- > "no one likes this"
["Peter"]                         -- > "Peter likes this"
["Jacob", "Alex"]                 -- > "Jacob and Alex like this"
["Max", "John", "Mark"]           -- > "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -- > "Alex, Jacob and 2 others like this"

Note: For 4 or more names, the number in "and 2 others" simply increases.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

std::string likes(const std::vector<std::string>& names)
{
    std::string str;
    if (names.size() == 0)
    {
        str = "no one likes this";
    }
    else if (names.size() == 1)
    {
        str = names[0] + " likes this";
    }
    else if (names.size() == 2)
    {
        str = names[0] + " and " + names[1] + " like this";
    }
    else if (names.size() == 3)
    {
        str = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    }
    else
    {
        str = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
    }
    return str;
}

int main()
{
    vector<string> imiona;
    imiona.push_back("Sara");
    imiona.push_back("Sar");
    imiona.push_back("Sa");
    imiona.push_back("S");
    string napis = likes(imiona);
    cout << napis << endl;
}