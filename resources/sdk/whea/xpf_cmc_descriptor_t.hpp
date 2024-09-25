#pragma once
#include <sdkgen/support_library.hpp>
#include "xpf_mc_bank_descriptor_t.hpp"
#include "notification_descriptor_t.hpp"

#include "magic/xpf_cmc_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_XPF_CMC_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct xpf_cmc_descriptor_t                                     
    {                                                               
        using banks_t = sdk::array<struct whea::xpf_mc_bank_descriptor_t, 32>;                
                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 uint16_t                               type;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t                                enabled;          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Enabled
        _m02 uint8_t                                number_of_banks;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .NumberOfBanks
        _m03 struct whea::notification_descriptor_t notify;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Notify
        _m04 banks_t                                banks;            //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Banks
                                                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_XPF_CMC_DESCRIPTOR.$", 0x3a4, true, 0xd72d62d2f4412f6e );                
        SDK_FIXED_SIZE( xpf_cmc_descriptor_t, 0x3a4 );                
    };                                                              
};
#include "magic/xpf_cmc_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::xpf_cmc_descriptor_t, 0x3a4 );
