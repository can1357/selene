#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct access_state_t;       }
namespace sec { struct quality_of_service_t; }

#include "magic/security_context_t.start.hpp"
namespace io
{
    // [struct _IO_SECURITY_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct security_context_t                                      
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                         
        _m00 struct sec::quality_of_service_t* security_qos;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityQos
        _m01 struct nt::access_state_t*        access_state;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessState
        _m02 uint32_t                          desired_access;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DesiredAccess
        _m03 uint32_t                          full_create_options;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FullCreateOptions
                                                                   
        SDK_NONVOL_PROPERTIES( "_IO_SECURITY_CONTEXT.$", 0x18, true, 0x4045d0c1e6fc8a5 );                    
        SDK_FIXED_SIZE( security_context_t, 0x18 );                    
    };                                                             
};
#include "magic/security_context_t.end.hpp"
SDK_VERIFY( struct io::security_context_t, 0x18 );
