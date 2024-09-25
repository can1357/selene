#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ipt_support_t.start.hpp"
namespace etw
{
    struct hw_trace_ext_interface_t;

    // [struct _ETW_IPT_SUPPORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipt_support_t                                                      
    {                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                    
        _m00 void*                                 ipt_handle;                  //{ +0x0000    +0x0000    +0x0000    } | .IptHandle
        _m01 uint64_t                              ipt_option;                  //{ +0x0008    +0x0008    +0x0008    } | .IptOption
        _m02 struct etw::hw_trace_ext_interface_t* etw_hw_trace_ext_interface;  //{ +0x0010    +0x0010    +0x0010    } | .EtwHwTraceExtInterface
        _m03 volatile uint32_t                     hook_id_count;               //{ +0x0018    +0x0018    +0x0018    } | .HookIdCount
        _m04 sdk::array<uint16_t, 4>               hook_id;                     //{ +0x001c    +0x001c    +0x001c    } | .HookId
                                                                              
        SDK_MAGIC_PROPERTIES( "_ETW_IPT_SUPPORT.$", 0x28, true, 0x11175c0070c7aa69 );                           
        SDK_FIXED_SIZE( ipt_support_t, 0x28 );                                
    };                                                                        
};
#include "magic/ipt_support_t.end.hpp"
SDK_VERIFY( struct etw::ipt_support_t, 0x28 );
