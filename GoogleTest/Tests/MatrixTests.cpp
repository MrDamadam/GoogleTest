/*
 * MatrixTests.cpp
 *
 *  Created on: Mar 3, 2019
 *      Author: Adam Aleweidat
 */

#include "gtest/gtest.h"

#include "Matrix.h"

namespace
{

class MatrixTest : public ::testing::Test
{
protected:
	Matrix matrix;
};

TEST_F(MatrixTest, Matrix)
{
	ASSERT_TRUE(matrix.foo());
}

}
