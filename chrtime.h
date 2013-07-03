#ifndef CHRTIME_H
#define CHRTIME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "define.h"

#ifndef WINDOWS
#include <netdb.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#else
#include <winsock2.h>
#include <ws2tcpip.h>
#endif

#endif
