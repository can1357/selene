#pragma once
#include <sdkgen/support_library.hpp>
#include "trustlet_attribute_accessrights_t.hpp"

#include "magic/trustlet_attribute_type_t.start.hpp"
namespace ps
{
    // [struct _PS_TRUSTLET_ATTRIBUTE_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_attribute_type_t                                    
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                              
        _m00 uint8_t                                     version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint8_t                                     data_count;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .DataCount
        _m02 uint8_t                                     semantic_type;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SemanticType
        _m03 union ps::trustlet_attribute_accessrights_t access_rights;   //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .AccessRights
        _m04 uint32_t                                    attribute_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AttributeType
                                                                        
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_ATTRIBUTE_TYPE.$", 0x4, true, 0x25ae0c93f9eefd9c );               
        SDK_FIXED_SIZE( trustlet_attribute_type_t, 0x4 );               
    };                                                                  
};
#include "magic/trustlet_attribute_type_t.end.hpp"
SDK_VERIFY( struct ps::trustlet_attribute_type_t, 0x4 );
