#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_interface_state_change_fields_t.hpp"

#include "magic/iommu_interface_state_change_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_INTERFACE_STATE_CHANGE]
    // => Windows 11
    //
    struct iommu_interface_state_change_t                                           
    {                                                                               
        // Windows 11                                                               
        //                                                                          
        _m00 union nt::iommu_interface_state_change_fields_t present_fields;          //{ +0x0000    } | .PresentFields
        _m01 uint32_t                                        available_domain_types;  //{ +0x0004    } | .AvailableDomainTypes
                                                                                    
        SDK_MAGIC_PROPERTIES( "_IOMMU_INTERFACE_STATE_CHANGE.$", 0x0, false, 0xf121adff6ac6e3df );                       
        SDK_FIXED_SIZE( iommu_interface_state_change_t, 0x8 );                       
    };                                                                              
};
#include "magic/iommu_interface_state_change_t.end.hpp"
SDK_VERIFY( struct nt::iommu_interface_state_change_t, 0x8 );
