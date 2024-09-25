#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_rp_pio_headerlog_register_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_dpc_rp_pio_headerlog_register_t           
    {                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 sdk::array<uint32_t, 4> pio_header_log_register;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PioHeaderLogRegister
                                                             
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_RP_PIO_HEADERLOG_REGISTER.$", 0x10, true, 0x8caf0757015e3c49 );                        
        SDK_FIXED_SIZE( express_dpc_rp_pio_headerlog_register_t, 0x10 );                        
    };                                                       
};
#include "magic/express_dpc_rp_pio_headerlog_register_t.end.hpp"
SDK_VERIFY( struct pci::express_dpc_rp_pio_headerlog_register_t, 0x10 );
