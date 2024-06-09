/* SPDX-FileCopyrightText: 2024 Noodle Contributors
 *
 * SPDX-License-Identifier: GPL-3.0-or-later */

/** \file
 * \ingroup backend
 */

#include "core/noodle_export.hh"
#include "core/noodle_version.hh"

#include <iostream>

int main()
{
  std::cout << "Hello, Noodle! " << '(' << NAPI_VERSION_MAJOR << '.' << NAPI_VERSION_MINOR << '.'
            << NAPI_VERSION_PATCH << '.' << NAPI_VERSION_TWEAK << ')' << '\n';

  return 0;
}
