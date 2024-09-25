#pragma once
#include <sdkgen/support_library.hpp>
#include "express_resizable_bar_entry_t.hpp"
#include "express_enhanced_capability_header_t.hpp"

#include "magic/express_resizable_bar_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_resizable_bar_capability_t                        
    {                                                                
        using entry_t = sdk::array<struct pci::express_resizable_bar_entry_t, 6>;       
                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                           
        _m00 struct pci::express_enhanced_capability_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 entry_t                                          entry;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Entry
                                                                     
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_RESIZABLE_BAR_CAPABILITY.$", 0x34, true, 0x66ecd9ce16f0957a );       
        SDK_FIXED_SIZE( express_resizable_bar_capability_t, 0x34 );       
    };                                                               
};
#include "magic/express_resizable_bar_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_resizable_bar_capability_t, 0x34 );
