//
// Created by asuka1975 on 22/07/24.
//

#ifndef GLSLC_P_CACHE_H
#define GLSLC_P_CACHE_H

#include <filesystem>

/**
 * @brief get cache directory
 *
 * @details get a cache directory per user without regard of OS.
 * @note In general, select the cache directory below home directory.
 *      Unix: /home/<Current User>/.cache
 *      Windows: C:\Users\<Current User>\AppData\Local
 */
std::filesystem::path get_cache_directory();

/**
 * @brief create cache directory
 *
 * @details create a cache directory if it doesn't exist.
 * @note assume that the parameter `cache_directory` is gotten from get_cache_directory().
 */
void create_cache_directory(const std::filesystem::path& cache_directory);

#endif //GLSLC_P_CACHE_H
