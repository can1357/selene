#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_attributes64_t.start.hpp"
namespace win
{
    // [struct _OBJECT_ATTRIBUTES64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_attributes64_t                  
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t length;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint64_t root_directory;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m02 uint64_t object_name;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectName
        _m03 uint32_t attributes;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Attributes
        _m04 uint64_t security_descriptor;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SecurityDescriptor
        _m05 uint64_t security_quality_of_service;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityQualityOfService
                                                  
        SDK_NONVOL_PROPERTIES( "_OBJECT_ATTRIBUTES64.$", 0x30, true, 0xf59af3a04e7a12da );                            
        SDK_FIXED_SIZE( object_attributes64_t, 0x30 );                            
    };                                            
};
#include "magic/object_attributes64_t.end.hpp"
SDK_VERIFY( struct win::object_attributes64_t, 0x30 );
