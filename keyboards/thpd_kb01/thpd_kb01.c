// Copyright 2022 Trapsilo Bumi (@tbumi)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "thpd_kb01.h"

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
