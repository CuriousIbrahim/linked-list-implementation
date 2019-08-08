#ifndef HAVEL_HAKMI_ALGORITHM_H
#define HAVEL_HAKMI_ALGORITHM_H

#include <array>
#include <vector>

typedef std::vector<int> set;

set eliminateZeros(set set);

set sortDescending(set set);

bool checkLength(int N, set set);

set frontElimination(int N, set set);

bool havelHakimiAlgorithm(set set);

#endif