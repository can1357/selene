#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/xpf_mce_flags_t.hpp"
#include "xpf_mc_bank_descriptor_t.hpp"

#include "magic/xpf_mce_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_MCE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_mce_descriptor_t                           
    {                                                     
        using banks_t = sdk::array<struct whea::xpf_mc_bank_descriptor_t, 32>;                   
                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                
        _m00 uint16_t                  type;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                   enabled;             //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Enabled
        _m02 uint8_t                   number_of_banks;     //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .NumberOfBanks
        _m03 union nt::xpf_mce_flags_t flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m04 uint64_t                  mcg_capability;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MCG_Capability
        _m05 uint64_t                  mcg_global_control;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MCG_GlobalControl
        _m06 banks_t                   banks;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Banks
                                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_MCE_DESCRIPTOR.$", 0x398, true, 0x534440637c71547d );                   
        SDK_FIXED_SIZE( xpf_mce_descriptor_t, 0x398 );                   
    };                                                    
};
#include "magic/xpf_mce_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::xpf_mce_descriptor_t, 0x398 );
