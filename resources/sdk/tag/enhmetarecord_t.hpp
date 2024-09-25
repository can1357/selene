#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enhmetarecord_t.start.hpp"
namespace tag
{
    // [struct tagENHMETARECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct enhmetarecord_t                  
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 uint32_t                i_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .iType
        _m01 uint32_t                n_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .nSize
        _m02 sdk::array<uint32_t, 1> d_parm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dParm
                                            
        SDK_NONVOL_PROPERTIES( "tagENHMETARECORD.$", 0xc, true, 0xc17b8737399839aa );       
        SDK_FIXED_SIZE( enhmetarecord_t, 0xc );       
    };                                      
};
#include "magic/enhmetarecord_t.end.hpp"
SDK_VERIFY( struct tag::enhmetarecord_t, 0xc );
