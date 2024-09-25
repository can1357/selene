#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/provider_info_t.start.hpp"
namespace win
{
    struct val_context_t;

    // [struct provider_info]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct provider_info_t                   
    {                                        
        using pqueryhandler_t = sdk::function<uint32_t(void*, struct win::val_context_t*, uint32_t, void*, uint32_t*, uint32_t)>*;               
        using pqueryhandler_t = sdk::function<uint32_t(void*, struct win::val_context_t*, uint32_t, void*, uint32_t*, uint32_t)>*;               
        using pqueryhandler_t = sdk::function<uint32_t(void*, struct win::val_context_t*, uint32_t, void*, uint32_t*, uint32_t)>*;               
        using pqueryhandler_t = sdk::function<uint32_t(void*, struct win::val_context_t*, uint32_t, void*, uint32_t*, uint32_t)>*;               
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                   
        _m00 pqueryhandler_t  pi_r0_1val;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pi_R0_1val
        _m01 pqueryhandler_t  pi_r0_allvals;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pi_R0_allvals
        _m02 pqueryhandler_t  pi_r3_1val;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pi_R3_1val
        _m03 pqueryhandler_t  pi_r3_allvals;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pi_R3_allvals
        _m04 uint32_t         pi_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pi_flags
        _m05 void*            pi_key_context;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pi_key_context
                                             
        SDK_MAGIC_PROPERTIES( "provider_info.$", 0x30, true, 0xc2ba836e6e63307b );               
        SDK_FIXED_SIZE( provider_info_t, 0x30 );               
    };                                       
};
#include "magic/provider_info_t.end.hpp"
SDK_VERIFY( struct win::provider_info_t, 0x30 );
