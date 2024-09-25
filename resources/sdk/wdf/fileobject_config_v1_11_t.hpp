#pragma once
#include <sdkgen/support_library.hpp>
#include "tri_state_t.hpp"
#include "fileobject_class_t.hpp"

#include "magic/fileobject_config_v1_11_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfrequest_t;
    struct wdffileobject_t;

    // [struct _WDF_FILEOBJECT_CONFIG_V1_11]
    // => Windows 10 v1607
    //
    struct fileobject_config_v1_11_t                                  
    {                                                                 
        using pfn_wdf_device_file_create_t = sdk::function<void(struct wdf::wdfdevice_t*, struct wdf::wdfrequest_t*, struct wdf::wdffileobject_t*)>*;                           
        using evt_file_close_t =             sdk::function<void(struct wdf::wdffileobject_t*)>*;                           
        using evt_file_cleanup_t =           sdk::function<void(struct wdf::wdffileobject_t*)>*;                           
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m00 uint32_t                      size;                        //{ +0x0000    } | .Size
        _m01 pfn_wdf_device_file_create_t  evt_device_file_create;      //{ +0x0008    } | .EvtDeviceFileCreate
        _m02 evt_file_close_t              evt_file_close;              //{ +0x0010    } | .EvtFileClose
        _m03 evt_file_cleanup_t            evt_file_cleanup;            //{ +0x0018    } | .EvtFileCleanup
        _m04 enum wdf::tri_state_t         auto_forward_cleanup_close;  //{ +0x0020    } | .AutoForwardCleanupClose
        _m05 enum wdf::fileobject_class_t  file_object_class;           //{ +0x0024    } | .FileObjectClass
                                                                      
        SDK_MAGIC_PROPERTIES( "_WDF_FILEOBJECT_CONFIG_V1_11.$", 0x0, false, 0x69e566ba7a1e4d44 );                           
        SDK_FIXED_SIZE( fileobject_config_v1_11_t, 0x28 );                           
    };                                                                
};
#include "magic/fileobject_config_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::fileobject_config_v1_11_t, 0x28 );
