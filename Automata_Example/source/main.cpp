#include "automaton.h"
#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::string;

int main()
{
    vector<vector<uint>> M{{0, 1}, {0, 1}};
    map<char, uint> A{{'a', 0}, {'b', 1}}; 
    vector<uint> S{1};
    Automaton ends_with_b(A, M, S);

    string input;
    std::cout << "Input automata transitions: ";
    std::cin >> input;

    bool retval = ends_with_b.Read(input);
    if (retval)
    {
        std::cout << "Automata transitions " << input << " are valid" << std::endl;
    } else 
    {
        std::cout << "Automata transitions " << input << " are invalid" << std::endl;
    }
    

    return 0;
}