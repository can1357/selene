#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/restart_attributes_t.start.hpp"
namespace ndis
{
    struct restart_attributes_t;

    // [struct _NDIS_RESTART_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct restart_attributes_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 struct ndis::restart_attributes_t* next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                           oid;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Oid
        _m02 uint32_t                           data_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DataLength
        _m03 sdk::array<uint8_t, 1>             data;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Data
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_RESTART_ATTRIBUTES.$", 0x20, true, 0xcacf3d2c2dffde87 );            
        SDK_FIXED_SIZE( restart_attributes_t, 0x20 );            
    };                                                      
};
#include "magic/restart_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::restart_attributes_t, 0x20 );
