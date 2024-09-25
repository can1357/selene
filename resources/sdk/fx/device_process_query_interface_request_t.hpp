#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace nt  { struct interface_t; }
namespace wdf { struct wdfdevice_t; }

#include "magic/device_process_query_interface_request_t.start.hpp"
namespace fx
{
    // [class FxDeviceProcessQueryInterfaceRequest]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_process_query_interface_request_t
    {                                             
        using pfn_wdf_device_process_query_interface_request_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct nt::guid_t*, struct nt::interface_t*, void*)>*;         
        using m_method_t =                                       pfn_wdf_device_process_query_interface_request_t ;         
                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                        
        _m00 m_method_t  m_method;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                  
        SDK_MAGIC_PROPERTIES( "FxDeviceProcessQueryInterfaceRequest.$", 0x8, true, 0xb2477971993f13c1 );         
        SDK_FIXED_SIZE( device_process_query_interface_request_t, 0x8 );         
    };                                            
};
#include "magic/device_process_query_interface_request_t.end.hpp"
SDK_VERIFY( class fx::device_process_query_interface_request_t, 0x8 );
