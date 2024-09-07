#ifndef HTTPCONNECTION_H
#define HTTPCONNECTION_H

#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/epoll.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <sys/stat.h>
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <stdarg.h>
#include <errno.h>

#include "locker.h"

class http_conn
{
public:
    //文件名的最大长度
    static const int FILENAME_LEN = 200;
    //读缓存区大小
    static const int READ_BUFFER_SIZE = 2048;
    //写缓存区大小
    static const int WRITE_BUFFER_SIZE = 1024;
    //HTTP请求方法，但我们仅支持GET
    enum METHOD{ GET = 0,POST ,HEAD,PUT,DELETE,TRACE,OPTIONS,CONNECT,PATCH };
    //解析客户请求时，主状态机所处的状态
    enum CHECK_STATE { CHECK_STATE_REQUESTLINE = 0,
                    CHECK_STATE_HEADER,
                    CHECK_STATE_CONTENT
                    };
    
};

#endif