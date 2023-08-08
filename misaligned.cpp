#include <iostream>
#include "misaligned.h"

int Misaligned::findPair(int majorCol, int minorCol)
{
	return majorCol * 5 + minorCol;
}

int Misaligned::printColorMap() {
	int i = 0, j = 0;
    
	for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << Misaligned::findPair(i, j) << std::string((i * 5 + j < 10 ? 3 : 2), ' ').c_str() << " | " <<
				majorColor[i] << std::string((9 - strlen(majorColor[i])), ' ').c_str() << " | " << minorColor[i] << "\n";
        }
    }

    return i * j;
}

void TestMisaligned::testForMisalignment()
{
	int result = Misaligned::printColorMap();
	assert(Misaligned::findPair(0, 0) == 1);
	assert(Misaligned::findPair(5, 5) == 25);
	assert(result == 25);
	std::cout << "All is well (maybe!)\n";
}

int main() {
	 TestMisaligned::testForMisalignment();

    return 0;
}