#pragma once
#include <sdkgen/support_library.hpp>
#include "pmc_t.hpp"
#include "pmcsr_t.hpp"
#include "pmcsr_bse_t.hpp"
#include "capabilities_header_t.hpp"

#include "magic/pm_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_PM_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pm_capability_t                                        
    {                                                             
        union u0_pmc_t                                            
        {                                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                                    
            _m01 struct pci::pmc_t capabilities;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capabilities
            _m02 uint16_t          as_ushort;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                                  
            SDK_NONVOL_PROPERTIES( "_PCI_PM_CAPABILITY.PMC.$", 0x2, true, 0x2b580c94cc5a61de );                       
            SDK_FIXED_SIZE( u0_pmc_t, 0x2 );                       
        };                                                        
                                                                  
        union u5_pmcsr_t                                          
        {                                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                    
            _m04 struct pci::pmcsr_t control_status;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlStatus
            _m05 uint16_t            as_ushort;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUSHORT
                                                                  
            SDK_NONVOL_PROPERTIES( "_PCI_PM_CAPABILITY.PMCSR.$", 0x2, true, 0xebd51b48193c2e2f );                         
            SDK_FIXED_SIZE( u5_pmcsr_t, 0x2 );                         
        };                                                        
                                                                  
        union u10_pmcsr_bse_t                                     
        {                                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                    
            _m07 struct pci::pmcsr_bse_t bridge_support;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BridgeSupport
            _m08 uint8_t                 as_uchar;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUCHAR
                                                                  
            SDK_NONVOL_PROPERTIES( "_PCI_PM_CAPABILITY.PMCSR_BSE.$", 0x1, true, 0xba92bc3db674de60 );                         
            SDK_FIXED_SIZE( u10_pmcsr_bse_t, 0x1 );                         
        };                                                        
                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                        
        _m00 struct pci::capabilities_header_t          header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m03 u0_pmc_t                                   pmc;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .PMC
        _m06 u5_pmcsr_t                                 pmcsr;      //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PMCSR
        _m09 u10_pmcsr_bse_t                            pmcsr_bse;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .PMCSR_BSE
        _m10 uint8_t                                    data;       //{ +0x0007    +0x0007    +0x0007    +0x0007    +0x0007    } | .Data
                                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_PM_CAPABILITY.$", 0x8, true, 0x8ecae98cd18d69e4 );          
        SDK_FIXED_SIZE( pm_capability_t, 0x8 );                   
    };                                                            
};
#include "magic/pm_capability_t.end.hpp"
SDK_VERIFY( union pci::pm_capability_t::u0_pmc_t, 0x2 );
SDK_VERIFY( union pci::pm_capability_t::u5_pmcsr_t, 0x2 );
SDK_VERIFY( union pci::pm_capability_t::u10_pmcsr_bse_t, 0x1 );
SDK_VERIFY( struct pci::pm_capability_t, 0x8 );
