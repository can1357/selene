#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resizable_bar_info_t.start.hpp"
namespace pci
{
    // [struct _PCI_RESIZABLE_BAR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resizable_bar_info_t                       
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                            
        _m00 uint16_t                capability;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Capability
        _m01 sdk::array<uint32_t, 6> sizes_supported;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizesSupported
        _m02 sdk::array<uint8_t, 6>  control_register;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ControlRegister
                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_RESIZABLE_BAR_INFO.$", 0x24, true, 0xc64d3abb12a23417 );                 
        SDK_FIXED_SIZE( resizable_bar_info_t, 0x24 );                 
    };                                                
};
#include "magic/resizable_bar_info_t.end.hpp"
SDK_VERIFY( struct pci::resizable_bar_info_t, 0x24 );
