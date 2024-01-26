#ifndef AUTOMATON_H
#define AUTOMATON_H

#include <map>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::map;
using std::string;

class Automaton
{
    public: 
    Automaton(map<char, uint> A, vector<vector<uint>> M, vector<uint> S);

    bool Read(string word);

    private:
    uint state = 0;
    map<char, uint> alphabet;
    vector<vector<uint>> transition_matrix;
    vector<uint> accepting_states;
};

#endif
