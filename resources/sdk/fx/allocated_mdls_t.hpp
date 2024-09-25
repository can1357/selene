#pragma once
#include <sdkgen/support_library.hpp>
#include "mdl_debug_info_t.hpp"

#include "magic/allocated_mdls_t.start.hpp"
namespace fx
{
    struct allocated_mdls_t;

    // [struct FxAllocatedMdls]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct allocated_mdls_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                                     
        _m00 sdk::array<struct fx::mdl_debug_info_t, 16> info;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Info
        _m01 uint32_t                                    count;  //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .Count
        _m02 struct fx::allocated_mdls_t*                next;   //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .Next
                                                               
        SDK_MAGIC_PROPERTIES( "FxAllocatedMdls.$", 0x190, true, 0xdd0bae89aa7670cc );      
        SDK_FIXED_SIZE( allocated_mdls_t, 0x190 );             
    };                                                         
};
#include "magic/allocated_mdls_t.end.hpp"
SDK_VERIFY( struct fx::allocated_mdls_t, 0x190 );
