#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc > 1)
	{
		int elem1, elem2, elem3, c1, c2, c3, b, res;
		FILE* in = fopen(argv[1], "r");
		FILE* out = fopen(argv[2], "w");

		fscanf(in, "%d", &c1);
		fscanf(in, "%d", &c2);
		fscanf(in, "%d", &c3);
		fscanf(in, "%d", &b);
		fscanf(in, "%d", &elem1);
		fscanf(in, "%d", &elem2);
		while (fscanf(in, "%d", &elem3) == 1) {
			if (c3 * elem1 + c2 * elem2 + c1 * elem3 != b) {
				res = 0;
				break;
			}
			elem1 = elem2;
			elem2 = elem3;
		}
		fclose(in);

		fprintf(out, "%d", res);
		fclose(out);
	}
	return 0;
}