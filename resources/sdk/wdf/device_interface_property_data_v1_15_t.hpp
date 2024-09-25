#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_15]
    // => Windows 10 v1607
    //
    struct device_interface_property_data_v1_15_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_15.$", 0x0, false, 0x959c5b2ab8eb14b1 );
        SDK_FIXED_SIZE( device_interface_property_data_v1_15_t, 0x0 );
    };                                           
};
SDK_VERIFY( struct wdf::device_interface_property_data_v1_15_t, 0x0 );
