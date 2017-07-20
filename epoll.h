/* 
 * Copyright, TeeKee
 * Date, 2017.7.20
 */

#ifndef EPOLL_H
#define EPOLL_H

#include <sys/epoll.h>

#define MAXEVENTS 1024

int tk_epoll_create(int flags);
int tk_epoll_add(int epoll_fd, int fd, struct epoll_event *event);
int tk_epoll_mod(int epoll_fd, int fd, struct epoll_event *event);
int tk_epoll_del(int epoll_fd, int fd, struct epoll_event *event);
int tk_epoll_wait(int epoll_fd, struct epoll_event *events, int max_events, int timeout);

#endif