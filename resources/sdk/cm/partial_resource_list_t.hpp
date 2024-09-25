#pragma once
#include <sdkgen/support_library.hpp>
#include "partial_resource_descriptor_t.hpp"

#include "magic/partial_resource_list_t.start.hpp"
namespace cm
{
    // [struct _CM_PARTIAL_RESOURCE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct partial_resource_list_t                      
    {                                                   
        using partial_descriptors_t = sdk::array<struct cm::partial_resource_descriptor_t, 1>;                    
                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint16_t               version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t               revision;             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint32_t               count;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m03 partial_descriptors_t  partial_descriptors;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PartialDescriptors
                                                        
        SDK_NONVOL_PROPERTIES( "_CM_PARTIAL_RESOURCE_LIST.$", 0x1c, true, 0x7aaa819d254210ad );                    
        SDK_FIXED_SIZE( partial_resource_list_t, 0x1c );                    
    };                                                  
};
#include "magic/partial_resource_list_t.end.hpp"
SDK_VERIFY( struct cm::partial_resource_list_t, 0x1c );
