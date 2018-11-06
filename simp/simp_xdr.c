/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "simp.h"

bool_t
xdr_opnds (XDR *xdrs, opnds *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->fileName, MAXSIZE))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->startLine))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->endLine))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_results (XDR *xdrs, results *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->status))
		 return FALSE;
	switch (objp->status) {
	case 0:
		 if (!xdr_string (xdrs, &objp->results_u.recvVal, ~0))
			 return FALSE;
		break;
	case 1:
		break;
	case 2:
		 if (!xdr_int (xdrs, &objp->results_u.reason))
			 return FALSE;
		break;
	default:
		return FALSE;
	}
	return TRUE;
}
