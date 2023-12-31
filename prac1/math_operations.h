/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MATH_OPERATIONS_H_RPCGEN
#define _MATH_OPERATIONS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct math_input {
	int num;
};
typedef struct math_input math_input;

#define MATH_PROG 0x4562877
#define MATH_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define square 1
extern  int * square_1(math_input *, CLIENT *);
extern  int * square_1_svc(math_input *, struct svc_req *);
#define square_root 2
extern  double * square_root_1(math_input *, CLIENT *);
extern  double * square_root_1_svc(math_input *, struct svc_req *);
#define factorial 3
extern  int * factorial_1(math_input *, CLIENT *);
extern  int * factorial_1_svc(math_input *, struct svc_req *);
extern int math_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define square 1
extern  int * square_1();
extern  int * square_1_svc();
#define square_root 2
extern  double * square_root_1();
extern  double * square_root_1_svc();
#define factorial 3
extern  int * factorial_1();
extern  int * factorial_1_svc();
extern int math_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_math_input (XDR *, math_input*);

#else /* K&R C */
extern bool_t xdr_math_input ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MATH_OPERATIONS_H_RPCGEN */
