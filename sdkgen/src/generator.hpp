#pragma once
#include <filesystem>

namespace sdk
{
    // Generates the SDK according to the configuration @ config.hpp at the given path.
    //
    void generate( const std::filesystem::path& output );
};