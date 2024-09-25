#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/driver_config_v1_0_t.start.hpp"
namespace wdf
{
    struct wdfdriver_t;
    struct wdfdevice_init_t;

    // [struct _WDF_DRIVER_CONFIG_V1_0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_config_v1_0_t                                                   
    {                                                                             
        using pfn_wdf_driver_device_add_t = sdk::function<int32_t(struct wdf::wdfdriver_t*, struct wdf::wdfdevice_init_t*)>*;                      
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                        
        _m00 uint32_t                                       size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 pfn_wdf_driver_device_add_t                    evt_driver_device_add;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtDriverDeviceAdd
        _m02 sdk::function<void(struct wdf::wdfdriver_t*)>* evt_driver_unload;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtDriverUnload
        _m03 uint32_t                                       driver_init_flags;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DriverInitFlags
                                                                                  
        SDK_MAGIC_PROPERTIES( "_WDF_DRIVER_CONFIG_V1_0.$", 0x20, true, 0xc462f6d3d7a6841d );                      
        SDK_FIXED_SIZE( driver_config_v1_0_t, 0x20 );                             
    };                                                                            
};
#include "magic/driver_config_v1_0_t.end.hpp"
SDK_VERIFY( struct wdf::driver_config_v1_0_t, 0x20 );
