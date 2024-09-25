#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dsm_pci_ssd_led_state_t.start.hpp"
namespace stor::port
{
    // [union _DSM_PCI_SSD_LED_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union dsm_pci_ssd_led_state_t                     
    {                                                 
        struct u0_state_t                             
        {                                             
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                        
            _m00 uint1_t ok;                            //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .Ok
            _m01 uint1_t locate;                        //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .Locate
            _m02 uint1_t fail;                          //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .Fail
            _m03 uint1_t rebuild;                       //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .Rebuild
            _m04 uint1_t pfa;                           //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .PFA
            _m05 uint1_t hot_spare;                     //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .HotSpare
            _m06 uint1_t in_a_critical_array;           //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .InACriticalArray
            _m07 uint1_t in_a_failed_array;             //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .InAFailedArray
            _m08 uint1_t invalid_device;                //{ +0x0000@10 +0x0000@10 +0x0000@10 } | .InvalidDevice
                                                      
            SDK_MAGIC_PROPERTIES( "_DSM_PCI_SSD_LED_STATE.State.$", 0x4, true, 0x8af30a519bf23969 );                             
            SDK_FIXED_SIZE( u0_state_t, 0x4 );                             
        };                                            
                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m09 u0_state_t                      state;     //{ +0x0000    +0x0000    +0x0000    } | .State
        _m10 uint32_t                        as_ulong;  //{ +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                      
        SDK_MAGIC_PROPERTIES( "_DSM_PCI_SSD_LED_STATE.$", 0x4, true, 0x1d798dccd0d2354d );         
        SDK_FIXED_SIZE( dsm_pci_ssd_led_state_t, 0x4 );         
    };                                                
};
#include "magic/dsm_pci_ssd_led_state_t.end.hpp"
SDK_VERIFY( struct stor::port::dsm_pci_ssd_led_state_t::u0_state_t, 0x4 );
SDK_VERIFY( union stor::port::dsm_pci_ssd_led_state_t, 0x4 );
