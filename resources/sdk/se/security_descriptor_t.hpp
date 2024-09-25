#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/security_descriptor_t.start.hpp"
namespace se
{
    // [struct _SE_SECURITY_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct security_descriptor_t          
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 void*    security_descriptor;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityDescriptor
                                          
        SDK_NONVOL_PROPERTIES( "_SE_SECURITY_DESCRIPTOR.$", 0x10, true, 0x22cab3d5723fd033 );                    
        SDK_FIXED_SIZE( security_descriptor_t, 0x10 );                    
    };                                    
};
#include "magic/security_descriptor_t.end.hpp"
SDK_VERIFY( struct se::security_descriptor_t, 0x10 );
