#pragma once
#include <sdkgen/support_library.hpp>
#include "endpoint_offload_response_event_type_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/usbd_interface_v3_t.start.hpp"
namespace wdf
{
    struct urb_t;
    struct usbdi_handle_t;
    struct usbd_interface_list_entry_t;
    struct usb_configuration_descriptor_t;

    // [struct _USBD_INTERFACE_V3]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct usbd_interface_v3_t                                                                                                                                       
    {                                                                                                                                                                
        using pfn_usbd_unregister_t =                                                                sdk::function<void(struct wdf::usbdi_handle_t*)>*;                                                                          
        using pfn_usbd_xrb_allocate_t =                                                              sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::urb_t**)>*;                                                                          
        using isoch_xrb_allocate_t =                                                                 sdk::function<int32_t(struct wdf::usbdi_handle_t*, uint32_t, struct wdf::urb_t**)>*;                                                                          
        using select_config_xrb_allocate_and_build_t =                                               sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*;                                                                          
        using select_interface_xrb_allocate_and_build_t =                                            sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*;                                                                          
        using secure_isoch_xrb_allocate_t =                                                          sdk::function<int32_t(struct wdf::usbdi_handle_t*, uint32_t, struct wdf::urb_t**)>*;                                                                          
        using pfn_usbd_select_interface_with_endpoint_offload_xrb_allocate_and_build_t =             sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, uint32_t, struct wdf::urb_t**)>*;                                                                          
        using select_interface_with_endpoint_offload_xrb_allocate_and_build_t =                      pfn_usbd_select_interface_with_endpoint_offload_xrb_allocate_and_build_t ;                                                                          
        using pfn_usbd_async_notification_request_during_endpoint_offload_xrb_allocate_and_build_t = sdk::function<int32_t(struct wdf::usbdi_handle_t*, void*, enum wdf::endpoint_offload_response_event_type_t, struct wdf::urb_t**)>*;                                                                          
        using async_notification_request_during_endpoint_offload_xrb_allocate_and_build_t =          pfn_usbd_async_notification_request_during_endpoint_offload_xrb_allocate_and_build_t ;                                                                          
                                                                                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                            
        //                                                                                                                                                           
        _m000 uint16_t                                                                     size;                                                                       //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m001 uint16_t                                                                     version;                                                                    //{ +0x0002    +0x0002    +0x0002    } | .Version
        _m002 void*                                                                        context;                                                                    //{ +0x0008    +0x0008    +0x0008    } | .Context
        _m003 sdk::function<void(void*)>*                                                  interface_reference;                                                        //{ +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m004 sdk::function<void(void*)>*                                                  interface_dereference;                                                      //{ +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m005 uint32_t                                                                     usbd_client_contract_version;                                               //{ +0x0020    +0x0020    +0x0020    } | .USBDClientContractVersion
        _m006 struct wdf::usbdi_handle_t*                                                  usbd_interface_handle;                                                      //{ +0x0028    +0x0028    +0x0028    } | .USBDInterfaceHandle
        _m007 struct nt::device_object_t*                                                  device_object;                                                              //{ +0x0030    +0x0030    +0x0030    } | .DeviceObject
        _m008 uint32_t                                                                     pool_tag;                                                                   //{ +0x0038    +0x0038    +0x0038    } | .PoolTag
        _m009 void*                                                                        context_from_client;                                                        //{ +0x0040    +0x0040    +0x0040    } | .ContextFromClient
        _m010 uint32_t                                                                     usb_verifier_enabled;                                                       //{ +0x0048    +0x0048    +0x0048    } | .UsbVerifierEnabled
        _m011 uint32_t                                                                     usb_verifier_fail_registration;                                             //{ +0x004c    +0x004c    +0x004c    } | .UsbVerifierFailRegistration
        _m012 uint32_t                                                                     usb_verifier_fail_chained_mdl_support;                                      //{ +0x0050    +0x0050    +0x0050    } | .UsbVerifierFailChainedMdlSupport
        _m013 uint32_t                                                                     usb_verifier_fail_static_stream_support;                                    //{ +0x0054    +0x0054    +0x0054    } | .UsbVerifierFailStaticStreamSupport
        _m014 uint32_t                                                                     usb_verifier_static_stream_count_override;                                  //{ +0x0058    +0x0058    +0x0058    } | .UsbVerifierStaticStreamCountOverride
        _m015 uint32_t                                                                     usb_verifier_fail_enable_static_streams;                                    //{ +0x005c    +0x005c    +0x005c    } | .UsbVerifierFailEnableStaticStreams
        _m016 uint32_t                                                                     usb_verifier_track_xrbs;                                                    //{ +0x0060    +0x0060    +0x0060    } | .UsbVerifierTrackXrbs
        _m017 pfn_usbd_unregister_t                                                        unregister;                                                                 //{ +0x0068    +0x0068    +0x0068    } | .Unregister
        _m018 pfn_usbd_xrb_allocate_t                                                      xrb_allocate;                                                               //{ +0x0070    +0x0070    +0x0070    } | .XrbAllocate
        _m019 isoch_xrb_allocate_t                                                         isoch_xrb_allocate;                                                         //{ +0x0078    +0x0078    +0x0078    } | .IsochXrbAllocate
        _m020 select_config_xrb_allocate_and_build_t                                       select_config_xrb_allocate_and_build;                                       //{ +0x0080    +0x0080    +0x0080    } | .SelectConfigXrbAllocateAndBuild
        _m021 select_interface_xrb_allocate_and_build_t                                    select_interface_xrb_allocate_and_build;                                    //{ +0x0088    +0x0088    +0x0088    } | .SelectInterfaceXrbAllocateAndBuild
        _m022 sdk::function<void(struct wdf::urb_t*)>*                                     xrb_free;                                                                   //{ +0x0090    +0x0090    +0x0090    } | .XrbFree
        _m023 secure_isoch_xrb_allocate_t                                                  secure_isoch_xrb_allocate;                                                  //{ +0x0098    +0x0098    +0x0098    } | .SecureIsochXrbAllocate
        _m024 uint32_t                                                                     usb_verifier_fail_secure_transfer_support;                                  //{ +0x00a0    +0x00a0    +0x00a0    } | .UsbVerifierFailSecureTransferSupport
        _m025 select_interface_with_endpoint_offload_xrb_allocate_and_build_t              select_interface_with_endpoint_offload_xrb_allocate_and_build;              //{ +0x00a8    +0x00a8    +0x00a8    } | .SelectInterfaceWithEndpointOffloadXrbAllocateAndBuild
        _m026 uint32_t                                                                     usb_verifier_fail_select_interface_with_endpoint_offload_support;           //{ +0x00b0    +0x00b0    +0x00b0    } | .UsbVerifierFailSelectInterfaceWithEndpointOffloadSupport
        _m027 async_notification_request_during_endpoint_offload_xrb_allocate_and_build_t  async_notification_request_during_endpoint_offload_xrb_allocate_and_build;  //{ +0x00b8    +0x00b8    +0x00b8    } | .AsyncNotificationRequestDuringEndpointOffloadXrbAllocateAndBuild
        _m028 uint32_t                                                                     usb_verifier_fail_time_sync_support;                                        //{ +0x00c0    +0x00c0    +0x00c0    } | .UsbVerifierFailTimeSyncSupport
                                                                                                                                                                     
        SDK_MAGIC_PROPERTIES( "_USBD_INTERFACE_V3.$", 0xc8, true, 0x951c5b931389fc24 );                                                                              
        SDK_FIXED_SIZE( usbd_interface_v3_t, 0xc8 );                                                                                                                 
    };                                                                                                                                                               
};
#include "magic/usbd_interface_v3_t.end.hpp"
SDK_VERIFY( struct wdf::usbd_interface_v3_t, 0xc8 );
