#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct devpropkey_t; }

#include "magic/device_property_data_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_PROPERTY_DATA_V1_17]
    // => Windows 10 v1607
    //
    struct device_property_data_v1_17_t                  
    {                                                    
        // Windows 10 v1607                              
        //                                               
        _m00 uint32_t                       size;          //{ +0x0000    } | .Size
        _m01 const struct nt::devpropkey_t* property_key;  //{ +0x0008    } | .PropertyKey
        _m02 uint32_t                       lcid;          //{ +0x0010    } | .Lcid
        _m03 uint32_t                       flags;         //{ +0x0014    } | .Flags
                                                         
        SDK_MAGIC_PROPERTIES( "_WDF_DEVICE_PROPERTY_DATA_V1_17.$", 0x0, false, 0x95b3f43bc3bf64a0 );             
        SDK_FIXED_SIZE( device_property_data_v1_17_t, 0x18 );             
    };                                                   
};
#include "magic/device_property_data_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::device_property_data_v1_17_t, 0x18 );
