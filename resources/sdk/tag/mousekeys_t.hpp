#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mousekeys_t.start.hpp"
namespace tag
{
    // [struct tagMOUSEKEYS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mousekeys_t                    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_flags;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFlags
        _m02 uint32_t i_max_speed;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .iMaxSpeed
        _m03 uint32_t i_time_to_max_speed;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .iTimeToMaxSpeed
        _m04 uint32_t i_ctrl_speed;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iCtrlSpeed
        _m05 uint32_t dw_reserved1;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwReserved1
        _m06 uint32_t dw_reserved2;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwReserved2
                                          
        SDK_MAGIC_PROPERTIES( "tagMOUSEKEYS.$", 0x1c, true, 0xb3aada3e8b14ebfe );                    
        SDK_FIXED_SIZE( mousekeys_t, 0x1c );                    
    };                                    
};
#include "magic/mousekeys_t.end.hpp"
SDK_VERIFY( struct tag::mousekeys_t, 0x1c );
