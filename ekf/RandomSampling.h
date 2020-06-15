#pragma once
#ifndef _RANDOM_SAMPLING_H
#define _RANDOM_SAMPLING_H

class RandomSampling
{
public:
	//RandomSampling(); // default constructor
	virtual int generate_random_seq(int) = 0;
};

class GaussianRandomSampling : public RandomSampling {
public:
	int generate_random_seq(int);
};

#endif



