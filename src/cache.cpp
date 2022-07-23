//
// Created by asuka1975 on 22/07/24.
//
#include "cache.h"

#ifdef __unix
#include <unistd.h>
#include <pwd.h>
#endif

namespace fs = std::filesystem;

namespace {
#ifdef __unix
    const char* cache_root_name = ".cache";
#else

#endif

    const char* get_home_directory() {
#ifdef __unix
        auto pw = getpwuid(getuid());
        if(pw == nullptr) return nullptr;
        return pw->pw_dir;
#else
        return nullptr;
#endif
    }
}

fs::path get_cache_directory() {
    auto home_directory = get_home_directory();
    if(home_directory == nullptr) {
        throw fs::filesystem_error(
                "can't get home directory. you have no home directory or your OS is not supported",
                std::make_error_code(std::errc::no_such_file_or_directory));
    }

    // make cache directory path
    fs::path cache_directory = home_directory;
    cache_directory.append(cache_root_name);
    cache_directory.append("glslc-p");

    return cache_directory;
}

void create_cache_directory(const std::filesystem::path& cache_directory) {
    if(!fs::exists(cache_directory)) {
        fs::create_directories(cache_directory);
    }
}