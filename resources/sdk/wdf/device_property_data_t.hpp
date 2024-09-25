#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct devpropkey_t; }

#include "magic/device_property_data_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DEVICE_PROPERTY_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_property_data_t                        
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 uint32_t                       size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 const struct nt::devpropkey_t* property_key;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PropertyKey
        _m02 uint32_t                       lcid;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Lcid
        _m03 uint32_t                       flags;         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
                                                         
        SDK_NONVOL_PROPERTIES( "_WDF_DEVICE_PROPERTY_DATA.$", 0x18, true, 0x6928a3daec6dd98c );             
        SDK_FIXED_SIZE( device_property_data_t, 0x18 );             
    };                                                   
};
#include "magic/device_property_data_t.end.hpp"
SDK_VERIFY( struct wdf::device_property_data_t, 0x18 );
