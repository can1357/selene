#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_element_status_descriptor_t.hpp"

#include "magic/physical_element_status_t.start.hpp"
namespace nt
{
    // [struct _PHYSICAL_ELEMENT_STATUS]
    // => WDK 10 (NV)
    //
    struct physical_element_status_t                         
    {                                                        
        using descriptors_t = sdk::array<struct nt::physical_element_status_descriptor_t, 1>;                                 
                                                             
        // WDK 10                                            
        //                                                   
        _m00 uint32_t       version;                           //{ +0x0000    } | .Version
        _m01 uint32_t       size;                              //{ +0x0004    } | .Size
        _m02 uint32_t       descriptor_count;                  //{ +0x0008    } | .DescriptorCount
        _m03 uint32_t       returned_descriptor_count;         //{ +0x000c    } | .ReturnedDescriptorCount
        _m04 uint32_t       element_identifier_being_depoped;  //{ +0x0010    } | .ElementIdentifierBeingDepoped
        _m05 descriptors_t  descriptors;                       //{ +0x0018    } | .Descriptors
                                                             
        SDK_NONVOL_PROPERTIES( "_PHYSICAL_ELEMENT_STATUS.$", 0x0, false, 0x6dac7fa919b86c31 );                                 
        SDK_FIXED_SIZE( physical_element_status_t, 0x40 );                                 
    };                                                       
};
#include "magic/physical_element_status_t.end.hpp"
SDK_VERIFY( struct nt::physical_element_status_t, 0x40 );
