#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/save_restore_data_t.start.hpp"
namespace pci
{
    // [struct _PCI_SAVE_RESTORE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct save_restore_data_t                                   
    {                                                            
        struct u0_bridge_t                                       
        {                                                        
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
            //                                                   
            _m04 uint16_t bridge_control;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BridgeControl
            _m05 uint8_t  secondary_bus_number;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SecondaryBusNumber
            _m06 uint8_t  subordinate_bus_number;                  //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SubordinateBusNumber
                                                                 
            SDK_MAGIC_PROPERTIES( "_PCI_SAVE_RESTORE_DATA.bridge.$", 0x4, true, 0xeac72cd79650fae5 );                                       
            SDK_FIXED_SIZE( u0_bridge_t, 0x4 );                                       
        };                                                       
                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 uint16_t                            command;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Command
        _m01 uint8_t                             cache_line_size;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .CacheLineSize
        _m02 uint8_t                             latency_timer;    //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .LatencyTimer
        _m03 uint8_t                             interrupt_line;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterruptLine
        _m07 u0_bridge_t                         bridge;           //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .bridge
                                                                 
        SDK_MAGIC_PROPERTIES( "_PCI_SAVE_RESTORE_DATA.$", 0xa, true, 0x66977827c24939ab );                
        SDK_FIXED_SIZE( save_restore_data_t, 0xa );                
    };                                                           
};
#include "magic/save_restore_data_t.end.hpp"
SDK_VERIFY( struct pci::save_restore_data_t::u0_bridge_t, 0x4 );
SDK_VERIFY( struct pci::save_restore_data_t, 0xa );
