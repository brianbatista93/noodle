# SPDX-FileCopyrightText: 2024 Noodle Contributors
#
# SPDX-License-Identifier: GPL-3.0-or-later

if(WITH_BACKEND)
    add_subdirectory(backend)
endif()

if(WITH_FRONTEND)
    add_subdirectory(frontend)
endif()
