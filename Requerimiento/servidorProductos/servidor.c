/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "interface3.h"
#include <string.h>
listaProductos misProductos;
int posVacia=0;
int bandera=0;
nodo_producto productoSubastado;
oferta ofertaMayor;

nodo_producto buscar(int id){
	nodo_producto result;
	for(int i=0 ; i<5 ;i++){
		if(misProductos.productos[i].codigoProducto == id){
			return misProductos.productos[i];
		}
	}
	result.codigoProducto=-1;
	strcpy(result.nombre, "vacio");
	result.valorProducto=-1.0;
	return result;
}

bool_t *
admregistrarproductoofertar_3_svc(nodo_producto *argp, struct svc_req *rqstp)
{
	static bool_t  result;

	printf("\n Invocando registrar producto");
	printf("\n Codigo del producto %d" ,argp->codigoProducto);
	if(posVacia<5){
		misProductos.productos[posVacia]=*argp;
		printf("\n RESPUESTA DEL SERVIDOR:");
		printf("\n Producto agregado!");
		printf("\n **************************");
		result=TRUE;
		posVacia++;
	}
	else{
		printf("\n RESPUESTA DEL SERVIDOR:");
		printf("\n No se pudo registrar el administrador.");
		printf("\n ************************************");
		return FALSE;
	}
	return &result;
}

listaProductos *
admlistarproductosofertar_3_svc(void *argp, struct svc_req *rqstp)
{
	static listaProductos  result;
	printf("\n RESPUESTA DEL SERVIDOR:");
	printf("\n Llamando a listar productos...");
	printf("\n ************************************");
	result=misProductos;
	return &result;
}

bool_t *
abrirsubasta_3_svc(int *argp, struct svc_req *rqstp)
{
	static bool_t  result;
	nodo_producto productoEncontrador = buscar(*argp);
	if(bandera == 0){
		if(productoEncontrador.codigoProducto != -1){
			bandera=1;
			productoSubastado=productoEncontrador;
			printf("\n RESPUESTA DEL SERVIDOR:");
			printf("\n Producto subastado con exito");
			printf("\n codigo: %d",productoSubastado.codigoProducto);
			printf("\n nombre: %s",productoSubastado.nombre);
			printf("\n nombre: %f",productoSubastado.valorProducto);
			printf("\n ************************************");
			result=TRUE;
		}
		else{
			printf("\n RESPUESTA DEL SERVIDOR:");
			printf("\n NO existe el producto a subastar...");
			printf("\n ************************************");
			result=FALSE;
		}
	}
	else{
		printf("\n RESPUESTA DEL SERVIDOR:");
		printf("\n ERROR , ya existe un producto en subasta...");
		printf("\n ************************************");	
	}
	
	return &result;
}

oferta *
cerrarsubasta_3_svc(void *argp, struct svc_req *rqstp)
{
	static oferta  result;

	if(bandera == 0){
		printf("\n RESPUESTA DEL SERVIDOR:");
		printf("\n ERROR , no existe una subasta...");
		printf("\n ************************************");	
	}
	else{
		if(ofertaMayor.valorPuja == 0.0){
			printf("\n RESPUESTA DEL SERVIDOR:");
			printf("\n No hubo ganador, nadie realizo una puja...");
			printf("\n ************************************");	
		}
		bandera=1;
	}

	return &result;
}

listaProductos *
clntlistarproductos_3_svc(void *argp, struct svc_req *rqstp)
{
	static listaProductos  result;

	/*
	 * insert server code here
	 */

	return &result;
}

nodo_producto *
consultarproducto_3_svc(char **argp, struct svc_req *rqstp)
{
	static nodo_producto  result;

	/*
	 * insert server code here
	 */

	return &result;
}

nodo_producto *
consultardatosproductoactualsubastando_3_svc(char **argp, struct svc_req *rqstp)
{
	static nodo_producto  result;

	/*
	 * insert server code here
	 */

	return &result;
}

void *
clntofreceroferta_3_svc(oferta *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	return (void *) &result;
}

