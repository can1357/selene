#pragma once
#include <sdkgen/support_library.hpp>
#include "custom_setting_flags_t.hpp"

#include "magic/custom_settings_t.start.hpp"
namespace pci
{
    // [struct _PCI_CUSTOM_SETTINGS]
    // => Windows 11
    //
    struct custom_settings_t                                                             
    {                                                                                    
        // Windows 11                                                                    
        //                                                                               
        _m00 union pci::custom_setting_flags_t flags;                                      //{ +0x0000    } | .Flags
        _m01 uint32_t                          device_d0_delay_time_in_milliseconds;       //{ +0x0008    } | .DeviceD0DelayTimeInMilliseconds
        _m02 uint32_t                          bus_data_link_settle_time_in_milliseconds;  //{ +0x000c    } | .BusDataLinkSettleTimeInMilliseconds
                                                                                         
        SDK_MAGIC_PROPERTIES( "_PCI_CUSTOM_SETTINGS.$", 0x0, false, 0x125f40b62ea4b54e );                                          
        SDK_FIXED_SIZE( custom_settings_t, 0x10 );                                          
    };                                                                                   
};
#include "magic/custom_settings_t.end.hpp"
SDK_VERIFY( struct pci::custom_settings_t, 0x10 );
