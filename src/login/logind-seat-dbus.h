/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include "sd-bus.h"

#include "logind-seat.h"
#include "bus-util.h"

extern const BusObjectImplementation seat_object;

char *seat_bus_path(Seat *s);

int seat_send_signal(Seat *s, bool new_seat);
int seat_send_changed(Seat *s, const char *properties, ...) _sentinel_;

int bus_seat_method_terminate(sd_bus_message *message, void *userdata, sd_bus_error *error);
