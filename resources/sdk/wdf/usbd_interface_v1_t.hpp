#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/usbd_interface_v1_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct usbdi_handle_t;
    struct usbd_interface_list_entry_t;
    struct usb_configuration_descriptor_t;

    // [struct _USBD_INTERFACE_V1]
    // => Windows 10 v1607
    //
    struct usbd_interface_v1_t                                                                    
    {                                                                                             
        using pfn_usbd_unregister_t =                     sdk::function<void(struct wdf::usbdi_handle_t*)>*;                                          
        using pfn_usbd_xrb_allocate_t =                   sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::urb_t**)>*;                                          
        using pfn_usbd_isoch_xrb_allocate_t =             sdk::function<int32_t(struct wdf::usbdi_handle_t*, uint32_t, struct wdf::urb_t**)>*;                                          
        using select_config_xrb_allocate_and_build_t =    sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*;                                          
        using select_interface_xrb_allocate_and_build_t = sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*;                                          
                                                                                                  
        // Windows 10 v1607                                                                       
        //                                                                                        
        _m00 uint16_t                                   size;                                       //{ +0x0000    } | .Size
        _m01 uint16_t                                   version;                                    //{ +0x0002    } | .Version
        _m02 void*                                      context;                                    //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*                interface_reference;                        //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*                interface_dereference;                      //{ +0x0018    } | .InterfaceDereference
        _m05 uint32_t                                   usbd_client_contract_version;               //{ +0x0020    } | .USBDClientContractVersion
        _m06 struct wdf::usbdi_handle_t*                usbd_interface_handle;                      //{ +0x0028    } | .USBDInterfaceHandle
        _m07 struct nt::device_object_t*                device_object;                              //{ +0x0030    } | .DeviceObject
        _m08 uint32_t                                   pool_tag;                                   //{ +0x0038    } | .PoolTag
        _m09 void*                                      context_from_client;                        //{ +0x0040    } | .ContextFromClient
        _m10 uint32_t                                   usb_verifier_enabled;                       //{ +0x0048    } | .UsbVerifierEnabled
        _m11 uint32_t                                   usb_verifier_fail_registration;             //{ +0x004c    } | .UsbVerifierFailRegistration
        _m12 uint32_t                                   usb_verifier_fail_chained_mdl_support;      //{ +0x0050    } | .UsbVerifierFailChainedMdlSupport
        _m13 uint32_t                                   usb_verifier_fail_static_stream_support;    //{ +0x0054    } | .UsbVerifierFailStaticStreamSupport
        _m14 uint32_t                                   usb_verifier_static_stream_count_override;  //{ +0x0058    } | .UsbVerifierStaticStreamCountOverride
        _m15 uint32_t                                   usb_verifier_fail_enable_static_streams;    //{ +0x005c    } | .UsbVerifierFailEnableStaticStreams
        _m16 uint32_t                                   usb_verifier_track_xrbs;                    //{ +0x0060    } | .UsbVerifierTrackXrbs
        _m17 pfn_usbd_unregister_t                      unregister;                                 //{ +0x0068    } | .Unregister
        _m18 pfn_usbd_xrb_allocate_t                    xrb_allocate;                               //{ +0x0070    } | .XrbAllocate
        _m19 pfn_usbd_isoch_xrb_allocate_t              isoch_xrb_allocate;                         //{ +0x0078    } | .IsochXrbAllocate
        _m20 select_config_xrb_allocate_and_build_t     select_config_xrb_allocate_and_build;       //{ +0x0080    } | .SelectConfigXrbAllocateAndBuild
        _m21 select_interface_xrb_allocate_and_build_t  select_interface_xrb_allocate_and_build;    //{ +0x0088    } | .SelectInterfaceXrbAllocateAndBuild
        _m22 sdk::function<void(struct wdf::urb_t*)>*   xrb_free;                                   //{ +0x0090    } | .XrbFree
                                                                                                  
        SDK_MAGIC_PROPERTIES( "_USBD_INTERFACE_V1.$", 0x0, false, 0xa60207659c42ff9c );                                          
        SDK_FIXED_SIZE( usbd_interface_v1_t, 0x98 );                                              
    };                                                                                            
};
#include "magic/usbd_interface_v1_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_interface_v1_t, 0x98 );
