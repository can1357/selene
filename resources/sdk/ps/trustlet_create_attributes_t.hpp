#pragma once
#include <sdkgen/support_library.hpp>
#include "trustlet_attribute_data_t.hpp"

#include "magic/trustlet_create_attributes_t.start.hpp"
namespace ps
{
    // [struct _PS_TRUSTLET_CREATE_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trustlet_create_attributes_t      
    {                                        
        using attributes_t = sdk::array<struct ps::trustlet_attribute_data_t, 1>;                  
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                   
        _m00 uint64_t      trustlet_identity;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TrustletIdentity
        _m01 attributes_t  attributes;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
                                             
        SDK_MAGIC_PROPERTIES( "_PS_TRUSTLET_CREATE_ATTRIBUTES.$", 0x18, true, 0x221a27d93b211ab2 );                  
        SDK_FIXED_SIZE( trustlet_create_attributes_t, 0x18 );                  
    };                                       
};
#include "magic/trustlet_create_attributes_t.end.hpp"
SDK_VERIFY( struct ps::trustlet_create_attributes_t, 0x18 );
