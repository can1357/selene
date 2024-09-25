#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_rp_pio_tlpprefixlog_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_dpc_rp_pio_tlpprefixlog_register_t            
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                       
        _m00 sdk::array<uint32_t, 4> pio_tlp_prefix_log_register;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PioTlpPrefixLogRegister
                                                                 
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_RP_PIO_TLPPREFIXLOG_REGISTER.$", 0x10, true, 0xda0f2275ed65427c );                            
        SDK_FIXED_SIZE( express_dpc_rp_pio_tlpprefixlog_register_t, 0x10 );                            
    };                                                           
};
#include "magic/express_dpc_rp_pio_tlpprefixlog_register_t.end.hpp"
SDK_VERIFY( struct pci::express_dpc_rp_pio_tlpprefixlog_register_t, 0x10 );
