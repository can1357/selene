#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REFS_STREAM_EXTENT_PROPERTIES]
    //  Windows 11
    //
    enum class refs_stream_extent_properties_t : int32_t
    {                                                   
        sparse =          0x8,                            // Windows 11
        valid =           0x10,                           // Windows 11
        stream_reserved = 0x20,                           // Windows 11
        crc32 =           0x80,                           // Windows 11
        crc64 =           0x100,                          // Windows 11
        ghosted =         0x200,                          // Windows 11
        readonly =        0x400,                          // Windows 11
    };                                                  
};
