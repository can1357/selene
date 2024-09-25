#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_attribute_mgmt_action_t.hpp"

#include "magic/storage_attribute_mgmt_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ATTRIBUTE_MGMT]
    // => WDK 10 (NV)
    //
    struct storage_attribute_mgmt_t                             
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint32_t                                 version;    //{ +0x0000    } | .Version
        _m01 uint32_t                                 size;       //{ +0x0004    } | .Size
        _m02 enum nt::storage_attribute_mgmt_action_t action;     //{ +0x0008    } | .Action
        _m03 uint32_t                                 attribute;  //{ +0x000c    } | .Attribute
                                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_ATTRIBUTE_MGMT.$", 0x0, false, 0xd595e5182a46a653 );          
        SDK_FIXED_SIZE( storage_attribute_mgmt_t, 0x10 );          
    };                                                          
};
#include "magic/storage_attribute_mgmt_t.end.hpp"
SDK_VERIFY( struct nt::storage_attribute_mgmt_t, 0x10 );
