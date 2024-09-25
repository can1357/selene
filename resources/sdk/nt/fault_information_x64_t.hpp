#pragma once
#include <sdkgen/support_library.hpp>
#include "fault_information_x64_flags_t.hpp"
#include "fault_information_arm64_type_t.hpp"

#include "magic/fault_information_x64_t.start.hpp"
namespace nt
{
    // [struct _FAULT_INFORMATION_X64]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fault_information_x64_t                                       
    {                                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 void*                                    domain_handle;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DomainHandle
        _m01 void*                                    fault_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FaultAddress
        _m02 struct nt::fault_information_x64_flags_t flags;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m03 enum nt::fault_information_arm64_type_t  type;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Type
        _m04 uint64_t                                 iommu_base_address;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IommuBaseAddress
        _m05 uint32_t                                 pci_segment;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PciSegment
                                                                         
        SDK_NONVOL_PROPERTIES( "_FAULT_INFORMATION_X64.$", 0x28, true, 0xaeea7f6f2af61b71 );                   
        SDK_FIXED_SIZE( fault_information_x64_t, 0x28 );                   
    };                                                                   
};
#include "magic/fault_information_x64_t.end.hpp"
SDK_VERIFY( struct nt::fault_information_x64_t, 0x28 );
