#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_13]
    // => Windows 10 v1607
    //
    struct device_interface_property_data_v1_13_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_13.$", 0x0, false, 0x55fa9fd91dfd72c8 );
        SDK_FIXED_SIZE( device_interface_property_data_v1_13_t, 0x0 );
    };                                           
};
SDK_VERIFY( struct wdf::device_interface_property_data_v1_13_t, 0x0 );
