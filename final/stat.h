/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _STAT_H_RPCGEN
#define _STAT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define STATS 0x23451111
#define STATSVER 1

#if defined(__STDC__) || defined(__cplusplus)
#define search 1
extern  int * search_1(char **, CLIENT *);
extern  int * search_1_svc(char **, struct svc_req *);
#define zero 2
extern  int * zero_1(char **, CLIENT *);
extern  int * zero_1_svc(char **, struct svc_req *);
#define sum 3
extern  int * sum_1(char **, CLIENT *);
extern  int * sum_1_svc(char **, struct svc_req *);
#define median 4
extern  int * median_1(char **, CLIENT *);
extern  int * median_1_svc(char **, struct svc_req *);
#define average 5
extern  int * average_1(char **, CLIENT *);
extern  int * average_1_svc(char **, struct svc_req *);
#define stdDev 6
extern  int * stddev_1(char **, CLIENT *);
extern  int * stddev_1_svc(char **, struct svc_req *);
extern int stats_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define search 1
extern  int * search_1();
extern  int * search_1_svc();
#define zero 2
extern  int * zero_1();
extern  int * zero_1_svc();
#define sum 3
extern  int * sum_1();
extern  int * sum_1_svc();
#define median 4
extern  int * median_1();
extern  int * median_1_svc();
#define average 5
extern  int * average_1();
extern  int * average_1_svc();
#define stdDev 6
extern  int * stddev_1();
extern  int * stddev_1_svc();
extern int stats_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_STAT_H_RPCGEN */