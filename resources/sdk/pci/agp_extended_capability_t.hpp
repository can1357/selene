#pragma once
#include <sdkgen/support_library.hpp>
#include "agp_control_t.hpp"
#include "agp_isoch_status_t.hpp"
#include "agp_isoch_command_t.hpp"
#include "agp_aperture_page_size_t.hpp"

#include "magic/agp_extended_capability_t.start.hpp"
namespace pci
{
    // [struct PCI_AGP_EXTENDED_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_extended_capability_t                                 
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                           
        _m00 struct pci::agp_isoch_status_t       isoch_status;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IsochStatus
        _m01 struct pci::agp_control_t            agp_control;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AgpControl
        _m02 uint16_t                             aperture_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ApertureSize
        _m03 struct pci::agp_aperture_page_size_t aperture_page_size;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .AperturePageSize
        _m04 uint32_t                             gart_low;            //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .GartLow
        _m05 uint32_t                             gart_high;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .GartHigh
        _m06 struct pci::agp_isoch_command_t      isoch_command;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .IsochCommand
                                                                     
        SDK_NONVOL_PROPERTIES( "PCI_AGP_EXTENDED_CAPABILITY.$", 0x18, true, 0x6ea5c744cf6891e2 );                   
        SDK_FIXED_SIZE( agp_extended_capability_t, 0x18 );                   
    };                                                               
};
#include "magic/agp_extended_capability_t.end.hpp"
SDK_VERIFY( struct pci::agp_extended_capability_t, 0x18 );
