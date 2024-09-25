#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/metarecord_t.start.hpp"
namespace tag
{
    // [struct tagMETARECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct metarecord_t                          
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint32_t                rd_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .rdSize
        _m01 uint16_t                rd_function;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .rdFunction
        _m02 sdk::array<uint16_t, 1> rd_parm;      //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .rdParm
                                                 
        SDK_NONVOL_PROPERTIES( "tagMETARECORD.$", 0x8, true, 0xefea9180e784907b );            
        SDK_FIXED_SIZE( metarecord_t, 0x8 );            
    };                                           
};
#include "magic/metarecord_t.end.hpp"
SDK_VERIFY( struct tag::metarecord_t, 0x8 );
