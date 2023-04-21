/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface3.h"


void
gestion_productos_3(char *host)
{
	CLIENT *clnt;
	bool_t  *result_1;
	nodo_producto  admregistrarproductoofertar_3_arg;
	listaProductos  *result_2;
	char *admlistarproductosofertar_3_arg;
	bool_t  *result_3;
	int  abrirsubasta_3_arg;
	oferta  *result_4;
	char *cerrarsubasta_3_arg;
	listaProductos  *result_5;
	char *clntlistarproductos_3_arg;
	nodo_producto  *result_6;
	char * consultarproducto_3_arg;
	nodo_producto  *result_7;
	char * consultardatosproductoactualsubastando_3_arg;
	void  *result_8;
	oferta  clntofreceroferta_3_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_productos, gestion_productos_version_1, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = admregistrarproductoofertar_3(&admregistrarproductoofertar_3_arg, clnt);
	if (result_1 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = admlistarproductosofertar_3((void*)&admlistarproductosofertar_3_arg, clnt);
	if (result_2 == (listaProductos *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_3 = abrirsubasta_3(&abrirsubasta_3_arg, clnt);
	if (result_3 == (bool_t *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_4 = cerrarsubasta_3((void*)&cerrarsubasta_3_arg, clnt);
	if (result_4 == (oferta *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_5 = clntlistarproductos_3((void*)&clntlistarproductos_3_arg, clnt);
	if (result_5 == (listaProductos *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_6 = consultarproducto_3(&consultarproducto_3_arg, clnt);
	if (result_6 == (nodo_producto *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_7 = consultardatosproductoactualsubastando_3(&consultardatosproductoactualsubastando_3_arg, clnt);
	if (result_7 == (nodo_producto *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_8 = clntofreceroferta_3(&clntofreceroferta_3_arg, clnt);
	if (result_8 == (void *) NULL) {
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
	gestion_productos_3 (host);
exit (0);
}