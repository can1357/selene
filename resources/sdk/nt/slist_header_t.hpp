#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/slist_header_t.start.hpp"
namespace nt
{
    // [union _SLIST_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union slist_header_t                        
    {                                           
        struct u0_header_x64_t                  
        {                                       
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                  
            _m02 uint16_t depth;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Depth
            _m03 uint48_t sequence;               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .Sequence
            _m04 uint60_t next_entry;             //{ +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  +0x0008@4  } | .NextEntry
                                                
            SDK_NONVOL_PROPERTIES( "_SLIST_HEADER.HeaderX64.$", 0x10, true, 0xe0e352d95034be33 );                      
            SDK_FIXED_SIZE( u0_header_x64_t, 0x10 );                      
        };                                      
                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint64_t                alignment;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Alignment
        _m01 uint64_t                region;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Region
        _m05 u0_header_x64_t         header_x64;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderX64
                                                
        SDK_NONVOL_PROPERTIES( "_SLIST_HEADER.$", 0x10, true, 0x301ed3b04850ea85 );           
        SDK_FIXED_SIZE( slist_header_t, 0x10 );           
    };                                          
};
#include "magic/slist_header_t.end.hpp"
SDK_VERIFY( struct nt::slist_header_t::u0_header_x64_t, 0x10 );
SDK_VERIFY( union nt::slist_header_t, 0x10 );
