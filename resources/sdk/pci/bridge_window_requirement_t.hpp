#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bridge_window_requirement_t.start.hpp"
namespace pci
{
    // [struct _PCI_BRIDGE_WINDOW_REQUIREMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bridge_window_requirement_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint8_t  disabled;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Disabled
        _m01 uint64_t size;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 uint64_t alignment;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Alignment
        _m03 uint64_t length_below4gb;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LengthBelow4GB
                                      
        SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE_WINDOW_REQUIREMENT.$", 0x20, true, 0x913e8fd3e4a6bda0 );                
        SDK_FIXED_SIZE( bridge_window_requirement_t, 0x20 );                
    };                                
};
#include "magic/bridge_window_requirement_t.end.hpp"
SDK_VERIFY( struct pci::bridge_window_requirement_t, 0x20 );
