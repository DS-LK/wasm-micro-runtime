/*
 * Copyright (C) 2021 Ant Group.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef HANDLER_H
#define HANDLER_H

#include "gdbserver.h"

void
handle_generay_set(WASMGDBServer *server, char *payload);

void
handle_generay_query(WASMGDBServer *server, char *payload);

void
handle_v_packet(WASMGDBServer *server, char *payload);

void
handle_threadstop_request(WASMGDBServer *server, char *payload);

void
handle_set_current_thread(WASMGDBServer *server, char *payload);

void
handle_get_register(WASMGDBServer *server, char *payload);

void
handle_get_json_request(WASMGDBServer *server, char *payload);

void
handle_get_read_binary_memory(WASMGDBServer *server, char *payload);

void
handle_get_read_memory(WASMGDBServer *server, char *payload);

void
handle_get_write_memory(WASMGDBServer *server, char *payload);

void
handle_add_break(WASMGDBServer *server, char *payload);

void
handle_remove_break(WASMGDBServer *server, char *payload);

void
handle_continue_request(WASMGDBServer *server, char *payload);

void
handle_kill_request(WASMGDBServer *server, char *payload);

void
handle____request(WASMGDBServer *server, char *payload);
#endif
