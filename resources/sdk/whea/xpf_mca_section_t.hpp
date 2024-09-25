#pragma once
#include <sdkgen/support_library.hpp>
#include "cpu_vendor_t.hpp"
#include "../nt/mcg_cap_t.hpp"
#include "../nt/mcg_status_t.hpp"
#include "../nt/mci_status_t.hpp"
#include "amd_extended_registers_t.hpp"
#include "../nt/xpf_recovery_info_t.hpp"

#include "magic/xpf_mca_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_MCA_SECTION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_mca_section_t                                               
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m00 uint32_t                              version_number;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VersionNumber
        _m01 enum whea::cpu_vendor_t               cpu_vendor;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CpuVendor
        _m02 int64_t                               timestamp;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Timestamp
        _m03 uint32_t                              processor_number;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessorNumber
        _m04 union nt::mcg_status_t                global_status;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .GlobalStatus
        _m05 uint64_t                              instruction_pointer;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .InstructionPointer
        _m06 uint32_t                              bank_number;              //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .BankNumber
        _m07 union nt::mci_status_t                status;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Status
        _m08 uint64_t                              address;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Address
        _m09 uint64_t                              misc;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .Misc
        _m10 uint32_t                              extended_register_count;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ExtendedRegisterCount
        _m11 sdk::array<uint64_t, 24>              extended_registers;       //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ExtendedRegisters
                                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m12 uint32_t                              apic_id;                  //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .ApicId
        _m13 struct whea::amd_extended_registers_t amd_extended_registers;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AMDExtendedRegisters
        _m14 union nt::mcg_cap_t                   global_capability;        //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .GlobalCapability
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m15 struct nt::xpf_recovery_info_t        recovery_info;            //{ +0x0110    } | .RecoveryInfo
                                                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_MCA_SECTION.$", 0x110, true, 0xc3c2aa8dcd9426c4 );                        
        SDK_DYNAMIC_SIZE( xpf_mca_section_t );                             
    };                                                                     
};
#include "magic/xpf_mca_section_t.end.hpp"
