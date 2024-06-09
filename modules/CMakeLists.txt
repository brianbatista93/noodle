# SPDX-FileCopyrightText: 2024 Noodle Authors
#
# SPDX-License-Identifier: GPL-3.0-or-later

if(WITH_BACKEND)
    add_subdirectory(backend)
endif()

if(WITH_FRONTEND)
    add_subdirectory(frontend)
endif()
