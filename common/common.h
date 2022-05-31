/* audit-fgets.h -- a replacement for glibc's fgets
 * Copyright 2018 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 */

#ifndef AUDIT_FGETS_HEADER
#define AUDIT_FGETS_HEADER

#include <sys/types.h>
#include "dso.h"
AUDIT_HIDDEN_START

int audit_fgets_eof(void);
int audit_fgets_more(size_t blen);
int audit_fgets(char *buf, size_t blen, int fd);

char *audit_strsplit_r(char *s, char **savedpp);
char *audit_strsplit(char *s);

AUDIT_HIDDEN_END
#endif

