#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hardware_pte_t.start.hpp"
namespace nt
{
    // [struct _HARDWARE_PTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hardware_pte_t                
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                               
        _m00 uint1_t   valid;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Valid
        _m01 uint1_t   write;              //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Write
        _m02 uint1_t   owner;              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Owner
        _m03 uint1_t   write_through;      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .WriteThrough
        _m04 uint1_t   cache_disable;      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .CacheDisable
        _m05 uint1_t   accessed;           //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .Accessed
        _m06 uint1_t   dirty;              //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Dirty
        _m07 uint1_t   large_page;         //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .LargePage
        _m08 uint1_t   global;             //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .Global
        _m09 uint1_t   copy_on_write;      //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .CopyOnWrite
        _m10 uint1_t   prototype;          //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .Prototype
        _m11 varuint_t page_frame_number;  //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .PageFrameNumber
        _m12 uint11_t  software_ws_index;  //{ +0x0000@52 +0x0000@52 +0x0000@52 +0x0000@52 } | .SoftwareWsIndex
        _m13 uint1_t   no_execute;         //{ +0x0000@63 +0x0000@63 +0x0000@63 +0x0000@63 } | .NoExecute
                                         
        SDK_MAGIC_PROPERTIES( "_HARDWARE_PTE.$", 0x8, true, 0x5cb8340cd26744c );                  
        SDK_FIXED_SIZE( hardware_pte_t, 0x8 );                  
    };                                   
};
#include "magic/hardware_pte_t.end.hpp"
SDK_VERIFY( struct nt::hardware_pte_t, 0x8 );
