#include "automaton.h"
#include <vector>
#include <map>
#include <iostream>

using std::vector;
using std::map;
using std::string;

int main()
{
    vector<vector<int>> M{{0, 1}, {0, 1}};
    map<char, int> A{{'a', 0}, {'b', 1}}; 
    vector<int> S{1};
    Automaton ends_with_b(A, M, S);

    string input;
    std::cout << "Input automata transitions: ";
    std::cin >> input;
    std::cout << "Read " << input << " ends with: " << ends_with_b.Read(input) << std::endl;

    return 0;
}