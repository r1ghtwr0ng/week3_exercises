#include "automaton.h"

Automaton::Automaton(map<char, int> A, vector<vector<int>> M, vector<int> S) : alphabet(A), transition_matrix(M), accepting_states(S) {}

bool Automaton::Read(string word)
{
    for (auto &c : word)
    {
        int j = alphabet.find(c)->second;
        state = transition_matrix[state][j];
    }

    return std::find(accepting_states.begin(), accepting_states.end(), state) != accepting_states.end();
}
