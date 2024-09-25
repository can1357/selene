#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct sid_and_attributes_t; }

#include "magic/capabilities_t.start.hpp"
namespace sec
{
    // [struct _SECURITY_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct capabilities_t                                       
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                      
        _m00 void*                            app_container_sid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AppContainerSid
        _m01 struct nt::sid_and_attributes_t* capabilities;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Capabilities
        _m02 uint32_t                         capability_count;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CapabilityCount
                                                                
        SDK_MAGIC_PROPERTIES( "_SECURITY_CAPABILITIES.$", 0x18, true, 0xc5b1635a9c738fb9 );                  
        SDK_FIXED_SIZE( capabilities_t, 0x18 );                  
    };                                                          
};
#include "magic/capabilities_t.end.hpp"
SDK_VERIFY( struct sec::capabilities_t, 0x18 );
