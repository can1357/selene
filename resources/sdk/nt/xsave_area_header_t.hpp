#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/xsave_area_header_t.start.hpp"
namespace nt
{
    // [struct _XSAVE_AREA_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xsave_area_header_t        
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t mask;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Mask
        _m01 uint64_t compaction_mask;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompactionMask
                                      
        SDK_NONVOL_PROPERTIES( "_XSAVE_AREA_HEADER.$", 0x40, true, 0xec5dcec9dc302508 );                
        SDK_FIXED_SIZE( xsave_area_header_t, 0x40 );                
    };                                
};
#include "magic/xsave_area_header_t.end.hpp"
SDK_VERIFY( struct nt::xsave_area_header_t, 0x40 );
