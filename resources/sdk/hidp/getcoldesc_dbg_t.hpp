#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getcoldesc_dbg_t.start.hpp"
namespace hidp
{
    // [struct _HIDP_GETCOLDESC_DBG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct getcoldesc_dbg_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint32_t                break_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BreakOffset
        _m01 uint32_t                error_code;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ErrorCode
        _m02 sdk::array<uint32_t, 6> args;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Args
                                                  
        SDK_MAGIC_PROPERTIES( "_HIDP_GETCOLDESC_DBG.$", 0x20, true, 0x118796e5fa053068 );             
        SDK_FIXED_SIZE( getcoldesc_dbg_t, 0x20 );             
    };                                            
};
#include "magic/getcoldesc_dbg_t.end.hpp"
SDK_VERIFY( struct hidp::getcoldesc_dbg_t, 0x20 );
