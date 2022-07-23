//
// Created by asuka1975 on 22/07/24.
//

#ifndef GLSLC_P_CACHE_H
#define GLSLC_P_CACHE_H

#include <filesystem>

std::filesystem::path get_cache_directory();

void create_cache_directory(const std::filesystem::path& cache_directory);

#endif //GLSLC_P_CACHE_H
