
#define MAX_INPUTS 		(8*8)
// int FireFunction( float sum );

typedef struct _PERCEPTRON
{
	int active;
	int inputCt;
	double inputs[MAX_INPUTS]; //i0 = bias
	double weights[MAX_INPUTS]; // w0 = 1


	// (*void ) fireFunction;

} PERCEPTRON;



typedef struct _NET
{
	int valid;
} NET;

