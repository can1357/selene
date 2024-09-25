#pragma once
#include <sdkgen/support_library.hpp>
#include "trustlet_attribute_type_t.hpp"

#include "magic/trustlet_attribute_header_t.start.hpp"
namespace ps
{
    // [struct _PS_TRUSTLET_ATTRIBUTE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_attribute_header_t                            
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                        
        _m00 struct ps::trustlet_attribute_type_t attribute_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AttributeType
        _m01 uint8_t                              instance_number;  //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .InstanceNumber
                                                                  
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_ATTRIBUTE_HEADER.$", 0x8, true, 0x485d8eeb55542a51 );                
        SDK_FIXED_SIZE( trustlet_attribute_header_t, 0x8 );                
    };                                                            
};
#include "magic/trustlet_attribute_header_t.end.hpp"
SDK_VERIFY( struct ps::trustlet_attribute_header_t, 0x8 );
