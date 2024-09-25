#pragma once
#include <sdkgen/support_library.hpp>
#include "express_sriov_caps_t.hpp"
#include "express_sriov_status_t.hpp"
#include "express_sriov_control_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "express_sriov_migration_state_array_t.hpp"

#include "magic/express_sriov_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_SRIOV_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_sriov_capability_t                                                         
    {                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                                    
        _m00 struct pci::express_enhanced_capability_header_t header;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_sriov_caps_t                  sriov_capabilities;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SRIOVCapabilities
        _m02 union pci::express_sriov_control_t               sriov_control;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SRIOVControl
        _m03 union pci::express_sriov_status_t                sriov_status;                     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .SRIOVStatus
        _m04 uint16_t                                         initial_v_fs;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .InitialVFs
        _m05 uint16_t                                         total_v_fs;                       //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .TotalVFs
        _m06 uint16_t                                         num_v_fs;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumVFs
        _m07 uint8_t                                          function_dependency_link;         //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .FunctionDependencyLink
        _m08 uint8_t                                          rsvd_p1;                          //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .RsvdP1
        _m09 uint16_t                                         first_vf_offset;                  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .FirstVFOffset
        _m10 uint16_t                                         vf_stride;                        //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .VFStride
        _m11 uint16_t                                         rsvd_p2;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RsvdP2
        _m12 uint16_t                                         vf_device_id;                     //{ +0x001a    +0x001a    +0x001a    +0x001a    +0x001a    } | .VFDeviceId
        _m13 uint32_t                                         supported_page_sizes;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .SupportedPageSizes
        _m14 uint32_t                                         system_page_size;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SystemPageSize
        _m15 sdk::array<uint32_t, 6>                          base_addresses;                   //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .BaseAddresses
        _m16 union pci::express_sriov_migration_state_array_t vf_migration_state_array_offset;  //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .VFMigrationStateArrayOffset
                                                                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_SRIOV_CAPABILITY.$", 0x40, true, 0xc8db6bef50d2710e );                                
        SDK_FIXED_SIZE( express_sriov_capability_t, 0x40 );                                   
    };                                                                                        
};
#include "magic/express_sriov_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_sriov_capability_t, 0x40 );
