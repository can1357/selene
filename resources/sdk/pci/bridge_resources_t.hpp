#pragma once
#include <sdkgen/support_library.hpp>
#include "../cm/partial_resource_descriptor_t.hpp"

#include "magic/bridge_resources_t.start.hpp"
namespace pci
{
    // [union _PCI_BRIDGE_RESOURCES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union bridge_resources_t                                          
    {                                                                 
        using vga_range_t = sdk::array<struct cm::partial_resource_descriptor_t, 3>;                
        using by_index_t =  sdk::array<struct cm::partial_resource_descriptor_t, 6>;                
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                            
        _m00 struct cm::partial_resource_descriptor_t memory_window;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemoryWindow
        _m01 struct cm::partial_resource_descriptor_t prefetch_window;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PrefetchWindow
        _m02 struct cm::partial_resource_descriptor_t io_window;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoWindow
        _m03 vga_range_t                              vga_range;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .VgaRange
        _m04 by_index_t                               by_index;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ByIndex
                                                                      
        SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE_RESOURCES.$", 0x78, true, 0x5c26880c69d80c62 );                
        SDK_FIXED_SIZE( bridge_resources_t, 0x78 );                   
    };                                                                
};
#include "magic/bridge_resources_t.end.hpp"
SDK_VERIFY( union pci::bridge_resources_t, 0x78 );
