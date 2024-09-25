#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lbr_support_t.start.hpp"
namespace etw
{
    // [struct _ETW_LBR_SUPPORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lbr_support_t                           
    {                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint32_t                lbr_handle;     //{ +0x0000    +0x0000    +0x0000    } | .LbrHandle
        _m01 uint32_t                lbr_options;    //{ +0x0004    +0x0004    +0x0004    } | .LbrOptions
        _m02 volatile uint32_t       hook_id_count;  //{ +0x0008    +0x0008    +0x0008    } | .HookIdCount
        _m03 sdk::array<uint16_t, 4> hook_id;        //{ +0x000c    +0x000c    +0x000c    } | .HookId
                                                   
        SDK_MAGIC_PROPERTIES( "_ETW_LBR_SUPPORT.$", 0x14, true, 0x1f5a07060ffb0148 );              
        SDK_FIXED_SIZE( lbr_support_t, 0x14 );              
    };                                             
};
#include "magic/lbr_support_t.end.hpp"
SDK_VERIFY( struct etw::lbr_support_t, 0x14 );
