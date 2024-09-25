#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netconnectinfostruct_t.start.hpp"
namespace win
{
    // [struct _NETCONNECTINFOSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netconnectinfostruct_t      
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t cb_structure;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 uint32_t dw_flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t dw_speed;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwSpeed
        _m03 uint32_t dw_delay;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwDelay
        _m04 uint32_t dw_opt_data_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwOptDataSize
                                       
        SDK_MAGIC_PROPERTIES( "_NETCONNECTINFOSTRUCT.$", 0x14, true, 0x579420704a8eb6b1 );                 
        SDK_FIXED_SIZE( netconnectinfostruct_t, 0x14 );                 
    };                                 
};
#include "magic/netconnectinfostruct_t.end.hpp"
SDK_VERIFY( struct win::netconnectinfostruct_t, 0x14 );
