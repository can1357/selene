#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stack_creation_settings_t.start.hpp"
namespace wdf
{
    // [struct STACK_CREATION_SETTINGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_creation_settings_t      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t device_type;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceType
        _m02 void*    security_descriptor;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SecurityDescriptor
        _m03 uint32_t characteristics;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Characteristics
        _m04 uint32_t exclusivity;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Exclusivity
                                          
        SDK_MAGIC_PROPERTIES( "STACK_CREATION_SETTINGS.$", 0x18, true, 0x524d41789b67966e );                    
        SDK_FIXED_SIZE( stack_creation_settings_t, 0x18 );                    
    };                                    
};
#include "magic/stack_creation_settings_t.end.hpp"
SDK_VERIFY( struct wdf::stack_creation_settings_t, 0x18 );
