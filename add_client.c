/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"


void
add_prog_1( char* host )
{
	CLIENT *clnt;
	int  *result_1;
	intpair  add_1_arg;
	clnt = clnt_create(host, ADD_PROG, ADD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror(host);
		exit(1);
	}
	add_1_arg.a = 123;
    add_1_arg.b = 22;
    result_1 = add_1(&add_1_arg, clnt);
	if (result_1 == NULL) {
		clnt_perror(clnt, "call failed:");
	}
	clnt_destroy( clnt );
}


main( int argc, char* argv[] )
{
	char *host;

	if(argc < 2) {
		printf("usage: %s server_host\n", argv[0]);
		exit(1);
	}
	host = argv[1];
	add_prog_1( host );
}
