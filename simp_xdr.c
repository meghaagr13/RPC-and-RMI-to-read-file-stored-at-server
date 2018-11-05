/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "simp.h"

bool_t
xdr_opnds(xdrs, objp)
	XDR *xdrs;
	opnds *objp;
{

	if (!xdr_string(xdrs, &objp->fileName, MAXSIZE))
		return (FALSE);
	if (!xdr_int(xdrs, &objp->startLine))
		return (FALSE);
	if (!xdr_int(xdrs, &objp->endLine))
		return (FALSE);
	return (TRUE);
}

bool_t
xdr_results(xdrs, objp)
	XDR *xdrs;
	results *objp;
{

	if (!xdr_int(xdrs, &objp->status))
		return (FALSE);
	switch (objp->status) {
	case 0:
		if (!xdr_vector(xdrs, (char *)objp->results_u.recvVal, MAXBUF, sizeof(char), (xdrproc_t)xdr_char))
			return (FALSE);
		break;
	case 1:
		break;
	case 2:
		if (!xdr_int(xdrs, &objp->results_u.reason))
			return (FALSE);
		break;
	default:
		return (FALSE);
	}
	return (TRUE);
}
