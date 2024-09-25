#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/custom_setting_flags_t.start.hpp"
namespace pci
{
    // [union _PCI_CUSTOM_SETTING_FLAGS]
    // => Windows 11
    //
    union custom_setting_flags_t                                
    {                                                           
        // Windows 11                                           
        //                                                      
        _m00 uint1_t  custom_device_d0_delay_time_supplied;       //{ +0x0000@0  } | .CustomDeviceD0DelayTimeSupplied
        _m01 uint1_t  custom_bus_data_link_settle_time_supplied;  //{ +0x0000@1  } | .CustomBusDataLinkSettleTimeSupplied
        _m02 uint64_t as_ulonglong;                               //{ +0x0000    } | .AsULONGLONG
                                                                
        SDK_MAGIC_PROPERTIES( "_PCI_CUSTOM_SETTING_FLAGS.$", 0x0, false, 0x4bec889fae0c7b5f );                                          
        SDK_FIXED_SIZE( custom_setting_flags_t, 0x8 );                                          
    };                                                          
};
#include "magic/custom_setting_flags_t.end.hpp"
SDK_VERIFY( union pci::custom_setting_flags_t, 0x8 );
