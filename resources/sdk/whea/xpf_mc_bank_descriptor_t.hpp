#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/xpf_mc_bank_flags_t.hpp"

#include "magic/xpf_mc_bank_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_MC_BANK_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_mc_bank_descriptor_t                                
    {                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                         
        _m00 uint8_t                       bank_number;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BankNumber
        _m01 uint8_t                       clear_on_initialization;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ClearOnInitialization
        _m02 uint8_t                       status_data_format;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StatusDataFormat
        _m03 union nt::xpf_mc_bank_flags_t flags;                    //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Flags
        _m04 uint32_t                      control_msr;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ControlMsr
        _m05 uint32_t                      status_msr;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StatusMsr
        _m06 uint32_t                      address_msr;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .AddressMsr
        _m07 uint32_t                      misc_msr;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MiscMsr
        _m08 uint64_t                      control_data;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ControlData
                                                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_MC_BANK_DESCRIPTOR.$", 0x1c, true, 0xdf62511d87244236 );                        
        SDK_FIXED_SIZE( xpf_mc_bank_descriptor_t, 0x1c );                        
    };                                                             
};
#include "magic/xpf_mc_bank_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::xpf_mc_bank_descriptor_t, 0x1c );
