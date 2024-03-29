/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface2.h"


void
gestion_administrador_2(char *host)
{
	CLIENT *clnt;
	bool_t  *result_1;
	nodo_administrador  registraradministrador_2_arg;
	bool_t  *result_2;
	nodo_administrador  enviardatossesionadministrador_2_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_administrador, gestion_administrador_version_2, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = registraradministrador_2(&registraradministrador_2_arg, clnt);
	if (result_1 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = enviardatossesionadministrador_2(&enviardatossesionadministrador_2_arg, clnt);
	if (result_2 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	gestion_administrador_2 (host);
exit (0);
}
