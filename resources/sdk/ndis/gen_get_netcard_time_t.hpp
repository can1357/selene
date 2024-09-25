#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gen_get_netcard_time_t.start.hpp"
namespace ndis
{
    // [struct _GEN_GET_NETCARD_TIME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gen_get_netcard_time_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t read_time;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadTime
                                 
        SDK_MAGIC_PROPERTIES( "_GEN_GET_NETCARD_TIME.$", 0x8, true, 0xadd63f7ef733a54f );          
        SDK_FIXED_SIZE( gen_get_netcard_time_t, 0x8 );          
    };                           
};
#include "magic/gen_get_netcard_time_t.end.hpp"
SDK_VERIFY( struct ndis::gen_get_netcard_time_t, 0x8 );
