/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "simp.h"

results *
readfile_1(argp, rqstp)
	opnds *argp;
	struct svc_req *rqstp;
{
	static results  result;
	int startLine = opnds->startLine;
	int endLine = opnds->endLine;
	char filename[] = opnds->fileName;
	FILE *file = fopen(opnds->fileName, "r");
	
	int count = 0;
	if( file != NULL )
	{
	    char line[256]; /* or other suitable maximum line size */
	    while (fgets(line, sizeof line, file) != NULL) /* read a line */
	    {   
	        if (count == startLine)
	        {   
	        	result->status=0;
				strcat(result->recvVal,line);
	        }
	        count++;
	    
	    }   
	    fclose(file);
	}
	else
	{
	    printf("Not exist");
	    //file doesn't exist
}

	/*
	 * insert server code here
	 */

	return(&result);
}
