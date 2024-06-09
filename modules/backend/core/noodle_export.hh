/* SPDX-FileCopyrightText: 2024 Noodle Contributors
 *
 * SPDX-License-Identifier: GPL-3.0-or-later */
#pragma once

/** \file
 * \ingroup backend
 */

#ifdef __cplusplus
#  define NAPI_EXTERN_C extern "C"
#else
#  define NAPI_EXTERN_C
#endif  // __cplusplus

#if defined(WIN32) && !defined(BUILD_STATIC)
#  define NAPI_EXPORT __declspec(dllexport)
#  define NAPI_IMPORT __declspec(dllimport)
#elif defined(__GNUC__) && !defined(BUILD_STATIC)
#  define NAPI_EXPORT __attribute__((visibility("default")))
#  define NAPI_IMPORT
#else
#  define NAPI_EXPORT
#  define NAPI_IMPORT
#endif

#ifdef API_EXPORTS
#  define NAPI NAPI_EXPORT
#else
#  define NAPI NAPI_IMPORT
#endif

#if defined(WIN32)
#  define NAPI_CALL __cdecl
#else
#  define NAPI_CALL
#endif
