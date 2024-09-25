#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"

#include "magic/control_area_wait_block_t.start.hpp"
namespace mi
{
    struct control_area_wait_block_t;

    // [struct _MI_CONTROL_AREA_WAIT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_area_wait_block_t                             
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                       
        _m00 struct mi::control_area_wait_block_t* next;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                              wait_reason;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WaitReason
        _m02 uint32_t                              wait_response;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WaitResponse
        _m03 struct nt::kgate_t                    gate;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Gate
                                                                 
        SDK_MAGIC_PROPERTIES( "_MI_CONTROL_AREA_WAIT_BLOCK.$", 0x28, true, 0xc30faf223c7a2999 );              
        SDK_FIXED_SIZE( control_area_wait_block_t, 0x28 );              
    };                                                           
};
#include "magic/control_area_wait_block_t.end.hpp"
SDK_VERIFY( struct mi::control_area_wait_block_t, 0x28 );
