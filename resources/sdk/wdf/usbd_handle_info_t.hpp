#pragma once
#include <sdkgen/support_library.hpp>
#include "sig_t.hpp"
#include "usbd_interface_v1_t.hpp"
#include "usbd_interface_v3_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/usbd_handle_info_t.start.hpp"
namespace wdf
{
    // [struct _USBD_HANDLE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_handle_info_t                                                                          
    {                                                                                                  
        using interface_t = sdk::variant<struct wdf::usbd_interface_v1_t, struct wdf::usbd_interface_v3_t>;                                                              
                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                              
        //                                                                                             
        _m00 enum wdf::sig_t             sig;                                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sig
        _m01 interface_t                 interface;                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Interface
        _m02 struct nt::device_object_t* target_device_object;                                           //{ +0x00a0    +0x00d0    +0x00d0    +0x00d0    } | .TargetDeviceObject
        _m03 uint32_t                    core_stack_usbd_interface_version;                              //{ +0x00a8    +0x00d8    +0x00d8    +0x00d8    } | .CoreStackUsbdInterfaceVersion
        _m04 int32_t                     reference_count;                                                //{ +0x00ac    +0x00dc    +0x00dc    +0x00dc    } | .ReferenceCount
        _m05 uint8_t                     is_core_stack_usbd_interface_version600_and_device_high_speed;  //{ +0x00b0    +0x00e0    +0x00e0    +0x00e0    } | .IsCoreStackUsbdInterfaceVersion600AndDeviceHighSpeed
        _m06 uint8_t                     pending_delete;                                                 //{ +0x00b1    +0x00e1    +0x00e1    +0x00e1    } | .PendingDelete
                                                                                                       
        SDK_MAGIC_PROPERTIES( "_USBD_HANDLE_INFO.$", 0xe8, true, 0xe88c831808482704 );                                                              
        SDK_DYNAMIC_SIZE( usbd_handle_info_t );                                                              
    };                                                                                                 
};
#include "magic/usbd_handle_info_t.end.hpp"
