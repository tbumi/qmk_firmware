// Copyright 2022 Trapsilo Bumi (@tbumi)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define ___ KC_NO

#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f,                 k0j, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d,      k1f,  k1g, k1h, k1i, k1j, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,      k2e, k2f,  k2g, k2h, k2i, k2j, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c,           k3f,  k3g, k3h, k3i,      \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b,           k4e, k4f,  k4g, k4h, k4i, k4j, \
    k50, k51, k52,           k55,                     k5a, k5b, k5c, k5d, k5e, k5f,  k5g,      k5i       \
) { \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, ___, ___, k0j }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1f, k1g, k1h, k1i, k1j }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2e, k2f, k2g, k2h, k2i, k2j }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3c, ___, k3f, k3g, k3h, k3i, ___ }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, ___, k4b, k4e, k4f, k4g, k4h, k4i, k4j }, \
    { k50, k51, k52, ___, ___, k55, ___, ___, ___, k5a, k5b, k5c, k5d, k5e, k5f, k5g, ___, k5i, ___ } \
}
