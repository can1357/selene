#pragma once
#include <sdkgen/support_library.hpp>
#include "fault_information_arm64_type_t.hpp"
#include "fault_information_arm64_flags_t.hpp"

#include "magic/fault_information_arm64_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _FAULT_INFORMATION_ARM64]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fault_information_arm64_t                                           
    {                                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                     
        _m00 void*                                      domain_handle;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DomainHandle
        _m01 void*                                      fault_address;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FaultAddress
        _m02 struct nt::device_object_t*                physical_device_object;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PhysicalDeviceObject
        _m03 uint32_t                                   input_mapping_id;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InputMappingId
        _m04 struct nt::fault_information_arm64_flags_t flags;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
        _m05 enum nt::fault_information_arm64_type_t    type;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Type
        _m06 uint64_t                                   iommu_base_address;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IommuBaseAddress
                                                                               
        SDK_NONVOL_PROPERTIES( "_FAULT_INFORMATION_ARM64.$", 0x30, true, 0x71b246282972e94c );                       
        SDK_FIXED_SIZE( fault_information_arm64_t, 0x30 );                       
    };                                                                         
};
#include "magic/fault_information_arm64_t.end.hpp"
SDK_VERIFY( struct nt::fault_information_arm64_t, 0x30 );
