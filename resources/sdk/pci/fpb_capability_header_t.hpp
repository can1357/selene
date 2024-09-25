#pragma once
#include <sdkgen/support_library.hpp>
#include "capabilities_header_t.hpp"

#include "magic/fpb_capability_header_t.start.hpp"
namespace pci
{
    // [struct _PCI_FPB_CAPABILITY_HEADER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fpb_capability_header_t                    
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                            
        _m00 struct pci::capabilities_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                      
        SDK_NONVOL_PROPERTIES( "_PCI_FPB_CAPABILITY_HEADER.$", 0x4, true, 0x57789b2159fb41d9 );       
        SDK_FIXED_SIZE( fpb_capability_header_t, 0x4 );       
    };                                                
};
#include "magic/fpb_capability_header_t.end.hpp"
SDK_VERIFY( struct pci::fpb_capability_header_t, 0x4 );
