#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagPGALLOCATORFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pgallocatorflags_t : int32_t
    {                                      
        pgalloc_zerobrandnewpages = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
