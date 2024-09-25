#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_attributes32_t.start.hpp"
namespace win
{
    // [struct _OBJECT_ATTRIBUTES32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_attributes32_t                  
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t length;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t root_directory;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RootDirectory
        _m02 uint32_t object_name;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectName
        _m03 uint32_t attributes;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Attributes
        _m04 uint32_t security_descriptor;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityDescriptor
        _m05 uint32_t security_quality_of_service;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .SecurityQualityOfService
                                                  
        SDK_NONVOL_PROPERTIES( "_OBJECT_ATTRIBUTES32.$", 0x18, true, 0x9d1aac24802dbb40 );                            
        SDK_FIXED_SIZE( object_attributes32_t, 0x18 );                            
    };                                            
};
#include "magic/object_attributes32_t.end.hpp"
SDK_VERIFY( struct win::object_attributes32_t, 0x18 );
