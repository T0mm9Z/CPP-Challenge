/*
 * MathChallenges.h
 *
 *  Created on: Nov 19, 2022
 *      Author: tommy
 */

#ifndef MATH_MATHCHALLENGES_H_
#define MATH_MATHCHALLENGES_H_

#include <iostream>
#include <string.h>

class MathChallenges
{
  public:
	MathChallenges ();
	virtual ~MathChallenges ();
	void printAMsg(std::string msg);
	unsigned long long int  sumOfNumDivisibleThrough3and5(int max);
	int greatestCommonDividerOwn(int a, int b);
	int gcd(int a, int b);
};

#endif /* MATH_MATHCHALLENGES_H_ */
