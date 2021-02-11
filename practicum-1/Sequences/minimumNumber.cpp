#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc > 1)
	{
		float x, n;
		int res = 1, k = 2;
		FILE* in = fopen(argv[1], "r");
		FILE* out = fopen(argv[2], "w");
		bool f = fscanf(in, "%f", &n);
		while (fscanf(in, "%f", &x) == 1)
		{
			if (x <= n)
			{
				n = x;
				res = k;
			}
			k++;
		}
		fclose(in);

		fprintf(out, "%d", res);
		fclose(out);
	}
	return 0;
}
