#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_dpc_rp_pio_syserr_register_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_dpc_rp_pio_syserr_register_t
    {                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint1_t  cfg_ur_cpl;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .CfgURCpl
        _m01 uint1_t  cfg_ca_cpl;               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .CfgCACpl
        _m02 uint1_t  cfg_cto;                  //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .CfgCTO
        _m03 uint1_t  io_ur_cpl;                //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .IoURCpl
        _m04 uint1_t  io_ca_cpl;                //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .IoCACpl
        _m05 uint1_t  io_cto;                   //{ +0x0000@10 +0x0000@10 +0x0000@10 +0x0000@10 } | .IoCTO
        _m06 uint1_t  mem_ur_cpl;               //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .MemURCpl
        _m07 uint1_t  mem_ca_cpl;               //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .MemCACpl
        _m08 uint1_t  mem_cto;                  //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .MemCTO
        _m09 uint32_t as_ulong;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                              
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_RP_PIO_SYSERR_REGISTER.$", 0x4, true, 0x3debbbf0e372a2e );           
        SDK_FIXED_SIZE( express_dpc_rp_pio_syserr_register_t, 0x4 );           
    };                                        
};
#include "magic/express_dpc_rp_pio_syserr_register_t.end.hpp"
SDK_VERIFY( union pci::express_dpc_rp_pio_syserr_register_t, 0x4 );
