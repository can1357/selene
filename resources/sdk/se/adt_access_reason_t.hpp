#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adt_access_reason_t.start.hpp"
namespace se
{
    // [struct _SE_ADT_ACCESS_REASON]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adt_access_reason_t                            
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                
        _m00 uint32_t                 access_mask;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AccessMask
        _m01 sdk::array<uint32_t, 32> access_reasons;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AccessReasons
        _m02 uint32_t                 object_type_index;    //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .ObjectTypeIndex
        _m03 uint32_t                 access_granted;       //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .AccessGranted
        _m04 void*                    security_descriptor;  //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .SecurityDescriptor
                                                          
        SDK_NONVOL_PROPERTIES( "_SE_ADT_ACCESS_REASON.$", 0x98, true, 0xcf6400e1e419c9aa );                    
        SDK_FIXED_SIZE( adt_access_reason_t, 0x98 );                    
    };                                                    
};
#include "magic/adt_access_reason_t.end.hpp"
SDK_VERIFY( struct se::adt_access_reason_t, 0x98 );
