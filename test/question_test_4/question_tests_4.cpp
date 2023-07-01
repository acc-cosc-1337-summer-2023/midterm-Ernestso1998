#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
#include <vector>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	std::vector<double> test_1 = {1.5, 1.0, 2.75};
	std::vector<double> test_2 = {3, 2, 5.5};
	std::vector<double> test_3 = {0.75, 0.5, 1.375};


	REQUIRE(get_cookie_ingredients(48) == test_1);
	
	REQUIRE(get_cookie_ingredients(96) == test_2);
	
	REQUIRE(get_cookie_ingredients(24) == test_3);

}
