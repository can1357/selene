#pragma once
#include <sdkgen/support_library.hpp>
#include "child_list_config_t.hpp"
#include "object_attributes_t.hpp"
#include "fdo_event_callbacks_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/fdo_init_t.start.hpp"
namespace wdf
{
    // [struct FdoInit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fdo_init_t                                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct wdf::fdo_event_callbacks_t event_callbacks;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventCallbacks
        _m01 struct wdf::child_list_config_t   list_config;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ListConfig
        _m02 struct wdf::object_attributes_t   list_config_attributes;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ListConfigAttributes
        _m03 uint8_t                           filter;                  //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .Filter
        _m04 struct nt::device_object_t*       physical_device;         //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .PhysicalDevice
                                                                      
        SDK_MAGIC_PROPERTIES( "FdoInit.$", 0xc8, true, 0xa6608eacf57605b4 );                       
        SDK_FIXED_SIZE( fdo_init_t, 0xc8 );                           
    };                                                                
};
#include "magic/fdo_init_t.end.hpp"
SDK_VERIFY( struct wdf::fdo_init_t, 0xc8 );
