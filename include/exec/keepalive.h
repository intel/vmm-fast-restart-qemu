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

void qemu_set_keepalive(bool on, void *data, Error **errp);
void qemu_keepalive_init(void);

#endif
