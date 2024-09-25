#pragma once
#include <sdkgen/support_library.hpp>
#include "../cm/partial_resource_descriptor_t.hpp"

#include "magic/device_resources_t.start.hpp"
namespace pci
{
    // [union _PCI_DEVICE_RESOURCES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union device_resources_t                                                       
    {                                                                              
        struct u0_type0_t                                                          
        {                                                                          
            using vf_bars_t = sdk::array<struct cm::partial_resource_descriptor_t, 6>;                 
                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                                                     
            _m01 struct cm::partial_resource_descriptor_t rom_bar;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RomBar
            _m02 vf_bars_t                                vf_bars;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .VfBars
                                                                                   
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_RESOURCES.type0.$", 0x8c, true, 0x82103ac7843b381c );                 
            SDK_FIXED_SIZE( u0_type0_t, 0x8c );                                    
        };                                                                         
                                                                                   
        struct u4_type1_t                                                          
        {                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                                     
            _m04 struct cm::partial_resource_descriptor_t rom_bar;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RomBar
            _m05 struct cm::partial_resource_descriptor_t memory_window;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MemoryWindow
            _m06 struct cm::partial_resource_descriptor_t prefetch_window;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PrefetchWindow
            _m07 struct cm::partial_resource_descriptor_t io_window;                 //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .IoWindow
                                                                                   
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_RESOURCES.type1.$", 0x50, true, 0xfb415a966e4efea0 );                         
            SDK_FIXED_SIZE( u4_type1_t, 0x50 );                                    
        };                                                                         
                                                                                   
        struct u8_type2_t                                                          
        {                                                                          
            using memory_windows_t = sdk::array<struct cm::partial_resource_descriptor_t, 2>;                        
            using io_windows_t =     sdk::array<struct cm::partial_resource_descriptor_t, 2>;                        
                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                                     
            _m09 struct cm::partial_resource_descriptor_t socket_bar;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SocketBar
            _m10 struct cm::partial_resource_descriptor_t legacy_bar;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LegacyBar
            _m11 memory_windows_t                         memory_windows;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MemoryWindows
            _m12 io_windows_t                             io_windows;                //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .IoWindows
                                                                                   
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_RESOURCES.type2.$", 0x78, true, 0xd98fd318aa92d964 );                        
            SDK_FIXED_SIZE( u8_type2_t, 0x78 );                                    
        };                                                                         
                                                                                   
        using bars_t =     sdk::array<struct cm::partial_resource_descriptor_t, 6>;         
        using by_index_t = sdk::array<struct cm::partial_resource_descriptor_t, 13>;         
                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                                         
        _m00 bars_t                                                       bars;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bars
        _m03 u0_type0_t                                                   type0;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .type0
        _m08 u4_type1_t                                                   type1;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .type1
        _m13 u8_type2_t                                                   type2;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .type2
        _m14 by_index_t                                                   by_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ByIndex
                                                                                   
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_RESOURCES.$", 0x104, true, 0xee881a4dd80403f4 );         
        SDK_FIXED_SIZE( device_resources_t, 0x104 );                               
    };                                                                             
};
#include "magic/device_resources_t.end.hpp"
SDK_VERIFY( struct pci::device_resources_t::u0_type0_t, 0x8c );
SDK_VERIFY( struct pci::device_resources_t::u4_type1_t, 0x50 );
SDK_VERIFY( struct pci::device_resources_t::u8_type2_t, 0x78 );
SDK_VERIFY( union pci::device_resources_t, 0x104 );
