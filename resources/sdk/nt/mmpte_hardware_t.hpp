#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpte_hardware_t.start.hpp"
namespace nt
{
    // [struct _MMPTE_HARDWARE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpte_hardware_t                  
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                   
        _m00 uint1_t   valid;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t   dirty1;                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Dirty1
        _m02 uint1_t   owner;                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Owner
        _m03 uint1_t   write_through;          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .WriteThrough
        _m04 uint1_t   cache_disable;          //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CacheDisable
        _m05 uint1_t   accessed;               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Accessed
        _m06 uint1_t   dirty;                  //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Dirty
        _m07 uint1_t   large_page;             //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .LargePage
        _m08 uint1_t   global;                 //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Global
        _m09 uint1_t   copy_on_write;          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .CopyOnWrite
        _m10 uint1_t   write;                  //{ +0x0000@11 +0x0000@11 +0x0000@11 +0x0000@11 } | .Write
        _m11 varuint_t page_frame_number;      //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PageFrameNumber
        _m12 uint1_t   no_execute;             //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .NoExecute
                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                   
        _m13 uint4_t   reserved_for_software;  //{ +0x0000@52 +0x0000@52 +0x0000@52 } | .ReservedForSoftware
        _m14 uint4_t   wsle_age;               //{ +0x0000@56 +0x0000@56 +0x0000@56 } | .WsleAge
        _m15 uint3_t   wsle_protection;        //{ +0x0000@60 +0x0000@60 +0x0000@60 } | .WsleProtection
                                             
        // Windows 10 v2004, Windows 10 v20H2                      
        //                                   
        _m16 uint4_t   reserved_for_hardware;  //{ +0x0000@48 +0x0000@48 } | .ReservedForHardware
                                             
        // Windows 10 v1607                      
        //                                   
        _m17 uint11_t  software_ws_index;      //{ +0x0000@52 } | .SoftwareWsIndex
                                             
        SDK_MAGIC_PROPERTIES( "_MMPTE_HARDWARE.$", 0x8, true, 0x984479d403feb09c );                      
        SDK_FIXED_SIZE( mmpte_hardware_t, 0x8 );                      
    };                                       
};
#include "magic/mmpte_hardware_t.end.hpp"
SDK_VERIFY( struct nt::mmpte_hardware_t, 0x8 );
