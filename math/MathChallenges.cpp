/*
 * MathChallenges.cpp
 *
 *  Created on: Nov 19, 2022
 *      Author: tommy
 */

#include "MathChallenges.h"
#include <memory>
#include <vector>

MathChallenges::MathChallenges ()
{
  // TODO Auto-generated constructor stub

}

MathChallenges::~MathChallenges ()
{
  // TODO Auto-generated destructor stub
}

void MathChallenges::printAMsg (std::string msg)
{
  std::cout << msg << std::endl;
}

unsigned long long int MathChallenges::sumOfNumDivisibleThrough3and5 (int max)
{
  int sum = 0;

  for (int i = 0; i < max; i++)
  {
	if(i % 3 == 0 || i % 5 == 0)
	{
	  sum += i;
	}
  }

  return sum;
}

int MathChallenges::greatestCommonDividerOwn (int a, int b)
{
  int gcd = 0;
  std::vector<int> va;
  std::vector<int> vb;

  for (int i = 1; i <= a; i++)
  {
	if(a % i == 0)
	{
	  va.push_back (i);
	}
  }
  for (auto ita : va)
  {
	std::cout << "va: " << std::dec << (int) ita << std::endl;
  }

  for (int i = 2; i <= b; i++)
  {
	if(b % i == 0)
	{
	  vb.push_back (i);
	}
  }

  for (auto itb : vb)
  {
	std::cout << "vb: " << std::dec << (int) itb << std::endl;
  }

  for(auto ita : va) //take the a element of a
  {
	for(auto itb : vb) //compare it with all elements of b
	{
	  if(ita == itb)
	  {
		gcd = ita;
	  }
	}
  }
  std::cout << "gcd_own: " << std::dec << (int) gcd << std::endl;
  return gcd;

}

int MathChallenges::gcd(int a, int b)
{

  while(b != 0)
  {
	unsigned int r = a % b;
	a = b;
	b = r;
  }
  std::cout << "gcd: " << std::dec << (int) a << std::endl;
  return a;
}
