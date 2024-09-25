#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/context_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_CONTEXT_ATTR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct context_attr_t             
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    port_context;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PortContext
        _m01 void*    message_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MessageContext
        _m02 uint32_t sequence;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Sequence
        _m03 uint32_t message_id;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .MessageId
        _m04 uint32_t callback_id;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CallbackId
                                      
        SDK_NONVOL_PROPERTIES( "_ALPC_CONTEXT_ATTR.$", 0x20, true, 0x5cafa48a067404d3 );                
        SDK_FIXED_SIZE( context_attr_t, 0x20 );                
    };                                
};
#include "magic/context_attr_t.end.hpp"
SDK_VERIFY( struct alpc::context_attr_t, 0x20 );
