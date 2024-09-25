#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct child_identification_description_header_t; }
namespace wdf { struct wdfchildlist_t;                            }
namespace wdf { struct wdfdevice_init_t;                          }

#include "magic/child_list_create_device_callback_t.start.hpp"
namespace fx
{
    // [struct FxChildListCreateDeviceCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct child_list_create_device_callback_t            
    {                                                     
        using pfn_wdf_child_list_create_device_t = sdk::function<int32_t(struct wdf::wdfchildlist_t*, struct wdf::child_identification_description_header_t*, struct wdf::wdfdevice_init_t*)>*;         
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                
        _m00 pfn_wdf_child_list_create_device_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                          
        SDK_MAGIC_PROPERTIES( "FxChildListCreateDeviceCallback.$", 0x8, true, 0x8ba57580bdd6f694 );         
        SDK_FIXED_SIZE( child_list_create_device_callback_t, 0x8 );         
    };                                                    
};
#include "magic/child_list_create_device_callback_t.end.hpp"
SDK_VERIFY( struct fx::child_list_create_device_callback_t, 0x8 );
