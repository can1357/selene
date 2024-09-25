#pragma once
#include <sdkgen/support_library.hpp>
#include "object_attributes_t.hpp"
#include "cx_file_object_init_t.hpp"
#include "cx_pnp_power_callbacks_init_t.hpp"

namespace fx { struct cx_device_info_t;      }
namespace fx { struct driver_globals_t;      }
namespace fx { struct irp_preprocess_info_t; }

#include "magic/wdfcxdevice_init_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfrequest_t;

    // [struct WDFCXDEVICE_INIT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfcxdevice_init_t                                                        
    {                                                                                
        using pfn_wdf_io_in_caller_context_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfrequest_t*)>*;                              
                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                           
        _m00 nt::list_entry_t                          list_entry;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct fx::driver_globals_t*              client_driver_globals;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientDriverGlobals
        _m02 struct fx::driver_globals_t*              cx_driver_globals;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CxDriverGlobals
        _m03 struct fx::irp_preprocess_info_t*         preprocess_info;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PreprocessInfo
        _m04 pfn_wdf_io_in_caller_context_t            io_in_caller_context_callback;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoInCallerContextCallback
        _m05 struct wdf::object_attributes_t           request_attributes;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RequestAttributes
        _m06 struct wdf::cx_file_object_init_t         file_object;                    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .FileObject
        _m07 struct wdf::cx_pnp_power_callbacks_init_t pnp_power_callbacks;            //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .PnpPowerCallbacks
        _m08 struct fx::cx_device_info_t*              cx_device_info;                 //{ +0x01a8    +0x0288    +0x0288    +0x0288    } | .CxDeviceInfo
                                                                                     
        SDK_MAGIC_PROPERTIES( "WDFCXDEVICE_INIT.$", 0x290, true, 0x2a515e9fe70322c0 );                              
        SDK_DYNAMIC_SIZE( wdfcxdevice_init_t );                                      
    };                                                                               
};
#include "magic/wdfcxdevice_init_t.end.hpp"
