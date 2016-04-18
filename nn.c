#include <stdio.h>
#include <math.h>
#include "defs.h"
#include "perceptron.h"




int perceptronInit( PERCEPTRON *pPerceptron )
{
	if (!pPerceptron)
		return FALSE;

	memset(pPerceptron, 0, sizeof(PERCEPTRON));
	pPerceptron->inputs[0] = 1;
	pPerceptron->inputCt++;

^Ireturn TRUE;
}



double sumPerceptron( PERCEPTRON *pPerceptron )
{
	double sum;

	if (!pPerceptron)
		return UNDEFINED;

	sum = 0; //pPerceptron->inputs[0];
	for (Ix = 0; Ix < pPerceptron->inputCt; Ix++) //since the first input is treated as bias
		sum += pPerceptron->inputs[Ix] * pPerceptron->inputs[Ix];

	return sum;
}

#define e 2.71828
double sigmoid( sum )
{
	int res;
	res = 1/ 1 + pow(e, sum);

	return res;
}

int main( int argc, char *argv[] )
{
	return TRUE;
}
