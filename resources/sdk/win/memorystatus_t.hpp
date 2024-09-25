#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memorystatus_t.start.hpp"
namespace win
{
    // [struct _MEMORYSTATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memorystatus_t                
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t dw_length;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLength
        _m01 uint32_t dw_memory_load;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwMemoryLoad
        _m02 uint64_t dw_total_phys;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwTotalPhys
        _m03 uint64_t dw_avail_phys;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwAvailPhys
        _m04 uint64_t dw_total_page_file;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwTotalPageFile
        _m05 uint64_t dw_avail_page_file;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwAvailPageFile
        _m06 uint64_t dw_total_virtual;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwTotalVirtual
        _m07 uint64_t dw_avail_virtual;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwAvailVirtual
                                         
        SDK_MAGIC_PROPERTIES( "_MEMORYSTATUS.$", 0x38, true, 0xfe79135c1d3703d0 );                   
        SDK_FIXED_SIZE( memorystatus_t, 0x38 );                   
    };                                   
};
#include "magic/memorystatus_t.end.hpp"
SDK_VERIFY( struct win::memorystatus_t, 0x38 );
