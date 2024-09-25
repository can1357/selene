#pragma once
#include <sdkgen/support_library.hpp>
#include "express_resizable_bar_control_register_t.hpp"
#include "express_resizable_bar_capability_register_t.hpp"

#include "magic/express_resizable_bar_entry_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_RESIZABLE_BAR_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_resizable_bar_entry_t
    {                                   
        using capability_t = union pci::express_resizable_bar_capability_register_t;           
        using control_t =    union pci::express_resizable_bar_control_register_t;           
                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                            
        _m00 capability_t  capability;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Capability
        _m01 control_t     control;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
                                        
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_RESIZABLE_BAR_ENTRY.$", 0x8, true, 0x533342fee05cf021 );           
        SDK_FIXED_SIZE( express_resizable_bar_entry_t, 0x8 );           
    };                                  
};
#include "magic/express_resizable_bar_entry_t.end.hpp"
SDK_VERIFY( struct pci::express_resizable_bar_entry_t, 0x8 );
