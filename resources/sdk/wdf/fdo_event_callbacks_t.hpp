#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fdo_event_callbacks_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfcmreslist_t;
    struct wdfioresreqlist_t;

    // [struct _WDF_FDO_EVENT_CALLBACKS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fdo_event_callbacks_t                                                                              
    {                                                                                                         
        using evt_device_filter_add_resource_requirements_t =    sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*;                                               
        using evt_device_filter_remove_resource_requirements_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*;                                               
        using evt_device_remove_added_resources_t =              sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*;                                               
                                                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                                    
        _m00 uint32_t                                          size;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 evt_device_filter_add_resource_requirements_t     evt_device_filter_add_resource_requirements;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .EvtDeviceFilterAddResourceRequirements
        _m02 evt_device_filter_remove_resource_requirements_t  evt_device_filter_remove_resource_requirements;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .EvtDeviceFilterRemoveResourceRequirements
        _m03 evt_device_remove_added_resources_t               evt_device_remove_added_resources;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EvtDeviceRemoveAddedResources
                                                                                                              
        SDK_NONVOL_PROPERTIES( "_WDF_FDO_EVENT_CALLBACKS.$", 0x20, true, 0x722b182211463ef6 );                                               
        SDK_FIXED_SIZE( fdo_event_callbacks_t, 0x20 );                                                        
    };                                                                                                        
};
#include "magic/fdo_event_callbacks_t.end.hpp"
SDK_VERIFY( struct wdf::fdo_event_callbacks_t, 0x20 );
