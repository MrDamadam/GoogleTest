/*
 * AllTests.cpp
 *
 *  Created on: Mar 3, 2019
 *      Author: Adam Aleweidat
 */

#include "gtest/gtest.h"

#include "MatrixTests.cpp"

int _main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
