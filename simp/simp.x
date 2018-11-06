

const MAXSIZE = 512;

struct opnds { 
	string fileName<MAXSIZE>;
	int startLine;
	int endLine;

};

typedef struct opnds opnds;

const MAXBUF=512;
union results switch (int status) {
 	case 0: string recvVal<>; 
 	case 1: void;
	case 2: int reason;
 };



program SIMP_PROG {
   version SIMP_VERS {
		results READFILE(opnds) = 1;
	} = 1;
} = 0x33897645;

