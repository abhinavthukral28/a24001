#!/bin/bash
# use backticks " ` ` " to execute shell command
# executing bash command without backticks
echo 'gcc -g -DRPC_SVC_FG -c -o add_clnt.o add_clnt.c'
echo 'gcc -g -DRPC_SVC_FG -c -o add_client.o add_client.c'
echo 'gcc -g -DRPC_SVC_FG -c -o add_xdr.o add_xdr.c'
echo 'gcc -g -DRPC_SVC_FG -o add_client add_clnt.o add_client.o add_xdr.o'
echo 'gcc -g -DRPC_SVC_FG -c -o add_svc.o add_svc.c'
echo 'gcc -g -DRPC_SVC_FG -c -o add_server.o add_server.c'
echo 'gcc -g -DRPC_SVC_FG -o add_server add_svc.o add_server.o add_xdr.o'

