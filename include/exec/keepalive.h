/*
 * Keepalive interfaces
 *
 * Copyright (c) 2020, Intel Corporation.
 *
 * Authors:
 *  Jason Zeng <jason.zeng@intel.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 *
 */

#ifndef EXEC_KEEPALIVE_H
#define EXEC_KEEPALIVE_H

#include "qemu/error-report.h"

typedef struct KeepaliveHandler {
    int (*check_keepalive_support)(void *opaque);
    int (*set_keepalive)(void *opaque, bool on, void *data);
} KeepaliveHandler;

int register_keepalive_handler(const char *idstr,
                               const KeepaliveHandler *ops,
                               void *opaque);
void unregister_keepalive_handler(const char *idstr,
                                  const KeepaliveHandler *ops);

void qemu_set_keepalive(bool on, void *data, Error **errp);
void qemu_keepalive_init(void);

#endif
