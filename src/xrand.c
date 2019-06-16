/* This file is a part of libxrand
 *
 * Copyright 2019, Jeffery Stager
 *
 * libxrand is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libxrand is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libxrand.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "xrand.h"
#include <sized_types.h>

static int32_t XRAND = 0;

/* **************************************** */
/* Public */
/* **************************************** */

void xrand_seed(int32_t seed) {
  XRAND = seed;
}

int32_t xrand(void) {
  XRAND ^= XRAND << 13;
  XRAND ^= XRAND >> 17;
  XRAND ^= XRAND << 5;
  return XRAND;
}
