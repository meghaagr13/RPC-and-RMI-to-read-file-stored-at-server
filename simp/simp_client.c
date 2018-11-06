/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "simp.h"


void
simp_prog_1(char *host, char* fileName, int startLine,int endLine)
{
	CLIENT *clnt;
	results  *result_1;
	opnds  readfile_1_arg;
	readfile_1_arg.startLine = startLine;
	readfile_1_arg.endLine = endLine;
	readfile_1_arg.fileName = fileName;
#ifndef	DEBUG
	clnt = clnt_create (host, SIMP_PROG, SIMP_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = readfile_1(&readfile_1_arg, clnt);
	if (result_1 == (results *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	else{
		printf(" Line is %s", result_1->results_u.recvVal);
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 5) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	char *fileName = argv[2];
	int startLine = atoi(argv[3]);
	int endLine = atoi(argv[4]);

	printf("%s %d %d",fileName,startLine,endLine);
//	scanf("%d %d",startLine,endLine); 
	simp_prog_1 (host,fileName,startLine,endLine);
exit (0);
}
