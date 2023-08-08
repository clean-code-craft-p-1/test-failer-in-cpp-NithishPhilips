#include <iostream>
#include "TShirts.h"
#include <assert.h>

using namespace TShirt;

void TestTshirts::testforTshirtSizes()
{
	assert(TShirt::size(37) == 'S');
	assert(TShirt::size(38) == 'S');
	assert(TShirt::size(40) == 'M');
	assert(TShirt::size(42) == 'M');
	assert(TShirt::size(43) == 'L');
	std::cout << "All is well (maybe!)\n";
}

int main() {

	TestTshirts::testforTshirtSizes();

	std::cout << "All is well (maybe!)\n";
	return 0;
}