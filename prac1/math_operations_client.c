#include "math_operations.h"

void math_prog_1(char *host, int num) {
    CLIENT *clnt;
    int *result_1;
    math_input square_1_arg;
    double *result_2;
    math_input square_root_1_arg;
    int *result_3;
    math_input factorial_1_arg;

#ifndef	DEBUG
    clnt = clnt_create(host, MATH_PROG, MATH_VERS, "udp");
    if (clnt == NULL) {
        clnt_pcreateerror(host);
        exit(1);
    }
#endif	/* DEBUG */

	square_1_arg.num = num;
    result_1 = square_1(&square_1_arg, clnt);
    if (result_1 == (int *) NULL) {
        clnt_perror(clnt, "square_1 call failed");
        exit(1);

    }
    printf("square(%d) = %d\n", square_1_arg.num, *result_1);

	square_root_1_arg.num = num;
    result_2 = square_root_1(&square_root_1_arg, clnt);
    if (result_2 == (double *) NULL) 
{
        clnt_perror(clnt, "square_root_1 call failed");
        exit(1);
    }
    printf("square_root(%d) = %f\n", square_root_1_arg.num, *result_2);

	factorial_1_arg.num = num;
    result_3 = factorial_1(&factorial_1_arg, clnt);
    if (result_3 == (int *) NULL) {
        clnt_perror(clnt, "factorial_1 call failed");
        exit(1);
    }
    printf("factorial(%d) = %d\n", factorial_1_arg.num, *result_3);

#ifndef	DEBUG
    clnt_destroy(clnt);
#endif	/* DEBUG */
}

int main(int argc, char *argv[]) {
    char *host;
	int num;

    if (argc < 2) {
        printf("usage: %s server_host\n", argv[0]);
        exit(1);
    }
    host = argv[1];
	num = atoi(argv[2]);
    math_prog_1(host, num);
    exit(0);
}
