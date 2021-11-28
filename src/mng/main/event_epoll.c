/* ********************************
 * Author:       Zhanglele
 * Description:  epoll的管理模块
 * create time: 2021.11.21
 ********************************/
#include <stdint.h>
#include <sys/epoll.h>
#include "log.h"

#define EPOLL_SIZE 256

int g_efd = -1;

int event_epoll_init(void)
{
    int g_efd = epoll_create(EPOLL_SIZE);
    if (g_efd <= 0) {
        diag_err("epoll create failed")
        return -1;
    }
    return 0;
}

int event_epoll_add(int efd, int lfd, uint32_t event_type)
{
    struct epoll_event ev = {0};
    ev.events = event_type;
    ev.data.fd = lfd;
    if (epoll_ctl(efd, EPOLL_CTL_ADD, lfd, &ev) == -1) {
        diag_err("epoll add failed");
        return -1;
    }
    return 0;
}

int event_epoll_wait(int efd, struct epoll_event *events, int size, int timeout)
{
    return epoll_wait(efd, events, size, timeout);
}