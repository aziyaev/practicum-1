#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc > 1)
	{
		double x, res = 0.0;
		int k = 0;
		FILE* in = fopen(argv[1], "r");
		FILE* out = fopen(argv[2], "w");
		while (fscanf(in, "%lf", &x) == 1)
		{
			res += x;
			k++;
		}
		res = res / k;
		fclose(in);

		fprintf(out, "%lf", res);
		fclose(out);
	}
	return 0;
}