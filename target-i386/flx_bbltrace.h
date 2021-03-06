#ifndef FLX_BBLTRACE
#define FLX_BBLTRACE

#include <avl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <inttypes.h>

#include "flx_instrument.h"

#define MAX_BBLTRACE_HANDLERS 16

typedef int(*bbltrace_handler)(uint32_t, uint32_t);

extern bbltrace_handler flx_bbltrace_handler;

void flx_bbltrace_init(void);
void flx_bbltrace_register_handler(bbltrace_handler handler);
void flx_bbltrace_unregister_handler(bbltrace_handler handler);
void flx_bbltrace_enable(void);
void flx_bbltrace_disable(void);
void flx_bbltrace_event(uint32_t, uint32_t);

#endif
