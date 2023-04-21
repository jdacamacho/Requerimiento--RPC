/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _INTERFACE1_H_RPCGEN
#define _INTERFACE1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXNOM 20

struct nodo_cliente {
	char login[MAXNOM];
	char contrasenia[MAXNOM];
	int identificacionClnt;
	char nombre[MAXNOM];
	char apellido[MAXNOM];
};
typedef struct nodo_cliente nodo_cliente;

#define gestion_cliente 0x20000001
#define gestion_cliente_version_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrarCliente 1
extern  bool_t * registrarcliente_1(nodo_cliente *, CLIENT *);
extern  bool_t * registrarcliente_1_svc(nodo_cliente *, struct svc_req *);
#define enviarDatosSesionCliente 2
extern  bool_t * enviardatossesioncliente_1(nodo_cliente *, CLIENT *);
extern  bool_t * enviardatossesioncliente_1_svc(nodo_cliente *, struct svc_req *);
extern int gestion_cliente_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrarCliente 1
extern  bool_t * registrarcliente_1();
extern  bool_t * registrarcliente_1_svc();
#define enviarDatosSesionCliente 2
extern  bool_t * enviardatossesioncliente_1();
extern  bool_t * enviardatossesioncliente_1_svc();
extern int gestion_cliente_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nodo_cliente (XDR *, nodo_cliente*);

#else /* K&R C */
extern bool_t xdr_nodo_cliente ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_INTERFACE1_H_RPCGEN */
