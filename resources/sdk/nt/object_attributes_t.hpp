#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_attributes_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_attributes_t                             
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 uint32_t          length;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 void*             root_directory;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootDirectory
        _m02 nt::unicode_view* object_name;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectName
        _m03 uint32_t          attributes;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Attributes
        _m04 void*             security_descriptor;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SecurityDescriptor
        _m05 void*             security_quality_of_service;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityQualityOfService
                                                           
        SDK_NONVOL_PROPERTIES( "_OBJECT_ATTRIBUTES.$", 0x30, true, 0x20d32b52828681dd );                            
        SDK_FIXED_SIZE( object_attributes_t, 0x30 );                            
    };                                                     
};
#include "magic/object_attributes_t.end.hpp"
SDK_VERIFY( struct nt::object_attributes_t, 0x30 );
