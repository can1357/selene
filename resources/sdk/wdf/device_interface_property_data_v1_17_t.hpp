#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_17]
    // => Windows 10 v1607
    //
    struct device_interface_property_data_v1_17_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_INTERFACE_PROPERTY_DATA_V1_17.$", 0x0, false, 0x6ae5cb8d2ee9cb39 );
        SDK_FIXED_SIZE( device_interface_property_data_v1_17_t, 0x0 );
    };                                           
};
SDK_VERIFY( struct wdf::device_interface_property_data_v1_17_t, 0x0 );
