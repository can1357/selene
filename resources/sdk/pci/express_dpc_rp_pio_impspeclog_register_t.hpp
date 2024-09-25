#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_rp_pio_impspeclog_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_dpc_rp_pio_impspeclog_register_t
    {                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t pio_imp_spec_log;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PioImpSpecLog
                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_RP_PIO_IMPSPECLOG_REGISTER.$", 0x4, true, 0x52a19ec41038cdf8 );                 
        SDK_FIXED_SIZE( express_dpc_rp_pio_impspeclog_register_t, 0x4 );                 
    };                                            
};
#include "magic/express_dpc_rp_pio_impspeclog_register_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_rp_pio_impspeclog_register_t, 0x4 );
