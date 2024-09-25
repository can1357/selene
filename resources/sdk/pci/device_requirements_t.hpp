#pragma once
#include <sdkgen/support_library.hpp>
#include "../io/resource_descriptor_t.hpp"

#include "magic/device_requirements_t.start.hpp"
namespace pci
{
    // [union _PCI_DEVICE_REQUIREMENTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union device_requirements_t                                                          
    {                                                                                    
        struct u0_type0_t                                                                
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                                                           
            _m01 struct io::resource_descriptor_t                rom_bar;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RomBar
            _m02 sdk::array<struct io::resource_descriptor_t, 6> vf_bars;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VfBars
                                                                                         
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_REQUIREMENTS.type0.$", 0xe0, true, 0x24b82634c891f230 );                 
            SDK_FIXED_SIZE( u0_type0_t, 0xe0 );                                          
        };                                                                               
                                                                                         
        struct u4_type1_t                                                                
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
            //                                                                           
            _m04 struct io::resource_descriptor_t rom_bar;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RomBar
            _m05 struct io::resource_descriptor_t memory_window;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MemoryWindow
            _m06 struct io::resource_descriptor_t prefetch_window;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PrefetchWindow
            _m07 struct io::resource_descriptor_t io_window;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .IoWindow
                                                                                         
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_REQUIREMENTS.type1.$", 0x80, true, 0x64983ad35cce4f76 );                         
            SDK_FIXED_SIZE( u4_type1_t, 0x80 );                                          
        };                                                                               
                                                                                         
        struct u8_type2_t                                                                
        {                                                                                
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                                                           
            _m09 struct io::resource_descriptor_t                socket_bar;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SocketBar
            _m10 struct io::resource_descriptor_t                legacy_bar;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LegacyBar
            _m11 sdk::array<struct io::resource_descriptor_t, 2> memory_windows;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MemoryWindows
            _m12 sdk::array<struct io::resource_descriptor_t, 2> io_windows;               //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .IoWindows
                                                                                         
            SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_REQUIREMENTS.type2.$", 0xc0, true, 0xd1d0c8054d9caf9e );                        
            SDK_FIXED_SIZE( u8_type2_t, 0xc0 );                                          
        };                                                                               
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                               
        _m00 sdk::array<struct io::resource_descriptor_t, 6>                    bars;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bars
        _m03 u0_type0_t                                                         type0;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .type0
        _m08 u4_type1_t                                                         type1;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .type1
        _m13 u8_type2_t                                                         type2;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .type2
        _m14 sdk::array<struct io::resource_descriptor_t, 13>                   by_index;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ByIndex
                                                                                         
        SDK_MAGIC_PROPERTIES( "_PCI_DEVICE_REQUIREMENTS.$", 0x1a0, true, 0x874aff3cab57e0b9 );         
        SDK_FIXED_SIZE( device_requirements_t, 0x1a0 );                                  
    };                                                                                   
};
#include "magic/device_requirements_t.end.hpp"
SDK_VERIFY( struct pci::device_requirements_t::u0_type0_t, 0xe0 );
SDK_VERIFY( struct pci::device_requirements_t::u4_type1_t, 0x80 );
SDK_VERIFY( struct pci::device_requirements_t::u8_type2_t, 0xc0 );
SDK_VERIFY( union pci::device_requirements_t, 0x1a0 );
