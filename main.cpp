/*
 * main.cpp
 *
 *  Created on: Nov 19, 2022
 *      Author: tommy
 */
#include <iostream>
#include "math/MathChallenges.h"
#include <memory>

int main(int argc, char **argv)
{
  int a = 3, b=66;

  std::shared_ptr<MathChallenges> mc = std::make_shared<MathChallenges>();

  std::cout << mc->sumOfNumDivisibleThrough3and5(10) << std::endl;
  mc->greatestCommonDividerOwn(a, b);
  mc->gcd(a, b);

  return 0;
}





