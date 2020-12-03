#include <mpi.h>
#include <vector>

std::vector<int> getRandomVector(int size);

int maxVectorValue(std::vector<int> vec);
int maxVectorValueParallel(std::vector<int> globalVector);

