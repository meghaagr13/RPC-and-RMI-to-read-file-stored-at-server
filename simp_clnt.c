/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "simp.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

results *
readfile_1(argp, clnt)
	opnds *argp;
	CLIENT *clnt;
{
	static results clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call(clnt, READFILE, xdr_opnds, argp, xdr_results, &clnt_res, TIMEOUT) != RPC_SUCCESS)
		return (NULL);
	return (&clnt_res);
}