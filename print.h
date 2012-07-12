/**
 * @file print.h
 * @brief Logging support functions
 * @note Copyright (C) 2011 Richard Cochran <richardcochran@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
#ifndef HAVE_PRINT_H
#define HAVE_PRINT_H

#include <syslog.h>

void print(int level, char const *format, ...);

void print_no_syslog(void);
void print_set_level(int level);
void print_verbose(void);

#define pr_emerg(x...)   print(LOG_EMERG, x)
#define pr_alert(x...)   print(LOG_ALERT, x)
#define pr_crit(x...)    print(LOG_CRIT, x)
#define pr_err(x...)     print(LOG_ERR, x)
#define pr_warning(x...) print(LOG_WARNING, x)
#define pr_notice(x...)  print(LOG_NOTICE, x)
#define pr_info(x...)    print(LOG_INFO, x)
#define pr_debug(x...)   print(LOG_DEBUG, x)

void debug_buf_hex(void *buf, size_t n);

#endif
