#include "unp.h"
#include "unpthread.h"
void Pthread_mutex_lock(pthread_mutex_t *mptr)
{
    int n;
    if ((n = pthread_mutex_lock(mptr)) == 0)
        return;
    error = n;
    err_sys("pthread_mutex_lock error");
}
