#pragma once
#include <sdkgen/support_library.hpp>

namespace sec { struct quality_of_service_t; }

#include "magic/security_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_SECURITY_ATTR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct security_attr_t                                    
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 uint32_t                          flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 struct sec::quality_of_service_t* qo_s;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .QoS
        _m02 void*                             context_handle;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ContextHandle
                                                              
        SDK_NONVOL_PROPERTIES( "_ALPC_SECURITY_ATTR.$", 0x18, true, 0x116ad77db7259588 );               
        SDK_FIXED_SIZE( security_attr_t, 0x18 );               
    };                                                        
};
#include "magic/security_attr_t.end.hpp"
SDK_VERIFY( struct alpc::security_attr_t, 0x18 );
