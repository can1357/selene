#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memorystatusex_t.start.hpp"
namespace win
{
    // [struct _MEMORYSTATUSEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memorystatusex_t                      
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t dw_length;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLength
        _m01 uint32_t dw_memory_load;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMemoryLoad
        _m02 uint64_t ull_total_phys;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ullTotalPhys
        _m03 uint64_t ull_avail_phys;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ullAvailPhys
        _m04 uint64_t ull_total_page_file;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullTotalPageFile
        _m05 uint64_t ull_avail_page_file;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ullAvailPageFile
        _m06 uint64_t ull_total_virtual;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ullTotalVirtual
        _m07 uint64_t ull_avail_virtual;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ullAvailVirtual
        _m08 uint64_t ull_avail_extended_virtual;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ullAvailExtendedVirtual
                                                 
        SDK_MAGIC_PROPERTIES( "_MEMORYSTATUSEX.$", 0x40, true, 0x840da5d4844de92 );                           
        SDK_FIXED_SIZE( memorystatusex_t, 0x40 );                           
    };                                           
};
#include "magic/memorystatusex_t.end.hpp"
SDK_VERIFY( struct win::memorystatusex_t, 0x40 );
