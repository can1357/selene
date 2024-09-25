#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_interface_state_change_fields_t.start.hpp"
namespace nt
{
    // [union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS]
    // => Windows 11
    //
    union iommu_interface_state_change_fields_t
    {                                          
        // Windows 11                        
        //                                   
        _m00 uint1_t  available_domain_types;    //{ +0x0000@0  } | .AvailableDomainTypes
        _m01 uint32_t as_ulong;                  //{ +0x0000    } | .AsULONG
                                               
        SDK_MAGIC_PROPERTIES( "_IOMMU_INTERFACE_STATE_CHANGE_FIELDS.$", 0x0, false, 0xaa359be01917f276 );                       
        SDK_FIXED_SIZE( iommu_interface_state_change_fields_t, 0x4 );                       
    };                                         
};
#include "magic/iommu_interface_state_change_fields_t.end.hpp"
SDK_VERIFY( union nt::iommu_interface_state_change_fields_t, 0x4 );
