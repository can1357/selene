#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_INTERFACE_V3.Size", size, 0x0, 0x10, true, 0xe7b791a5e8da9c0a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_INTERFACE_V3.Version", version, 0x10, 0x10, true, 0xbe986bb2ecac5e54)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_INTERFACE_V3.Context", context, 0x40, 0x40, true, 0x74bb242e40794b24)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBD_INTERFACE_V3.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xa9e32a1755809517)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBD_INTERFACE_V3.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xfe42079f4ca8b76a)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.USBDClientContractVersion", usbd_client_contract_version, 0x100, 0x20, true, 0x9ad3abfaca5829d6)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbdi_handle_t*), "_USBD_INTERFACE_V3.USBDInterfaceHandle", usbd_interface_handle, 0x140, 0x40, true, 0x3ed4617ef1a70673)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_USBD_INTERFACE_V3.DeviceObject", device_object, 0x180, 0x40, true, 0x67c85797b769d6d8)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.PoolTag", pool_tag, 0x1c0, 0x20, true, 0x2f043482d2f1eb6d)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_INTERFACE_V3.ContextFromClient", context_from_client, 0x200, 0x40, true, 0x98b1342b5a5c9edb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierEnabled", usb_verifier_enabled, 0x240, 0x20, true, 0x55d59aa5550a7159)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailRegistration", usb_verifier_fail_registration, 0x260, 0x20, true, 0x670529355020c7de)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailChainedMdlSupport", usb_verifier_fail_chained_mdl_support, 0x280, 0x20, true, 0x2c6e359ad6ad419c)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailStaticStreamSupport", usb_verifier_fail_static_stream_support, 0x2a0, 0x20, true, 0xcd3a61560c435c6d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierStaticStreamCountOverride", usb_verifier_static_stream_count_override, 0x2c0, 0x20, true, 0xc859a05baa29d55c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailEnableStaticStreams", usb_verifier_fail_enable_static_streams, 0x2e0, 0x20, true, 0xef8822cccc361793)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierTrackXrbs", usb_verifier_track_xrbs, 0x300, 0x20, true, 0xc1906ebbd9df5991)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_unregister_t ), "_USBD_INTERFACE_V3.Unregister", unregister, 0x340, 0x40, true, 0xc822879db5a1f1a9)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_xrb_allocate_t ), "_USBD_INTERFACE_V3.XrbAllocate", xrb_allocate, 0x380, 0x40, true, 0x2344436e59804d14)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, uint32_t, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V3.IsochXrbAllocate", isoch_xrb_allocate, 0x3c0, 0x40, true, 0x2c5d45d042517f9)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V3.SelectConfigXrbAllocateAndBuild", select_config_xrb_allocate_and_build, 0x400, 0x40, true, 0xccf3576b0947d971)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V3.SelectInterfaceXrbAllocateAndBuild", select_interface_xrb_allocate_and_build, 0x440, 0x40, true, 0x43088a744abb50aa)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::urb_t*)>*), "_USBD_INTERFACE_V3.XrbFree", xrb_free, 0x480, 0x40, true, 0x799daf4965ad72ba)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, uint32_t, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V3.SecureIsochXrbAllocate", secure_isoch_xrb_allocate, 0x4c0, 0x40, true, 0xd3a05b0f9ce6ace9)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailSecureTransferSupport", usb_verifier_fail_secure_transfer_support, 0x500, 0x20, true, 0xd89cf446c619c934)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_select_interface_with_endpoint_offload_xrb_allocate_and_build_t ), "_USBD_INTERFACE_V3.SelectInterfaceWithEndpointOffloadXrbAllocateAndBuild", select_interface_with_endpoint_offload_xrb_allocate_and_build, 0x540, 0x40, true, 0x80477248d82bbcaf)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailSelectInterfaceWithEndpointOffloadSupport", usb_verifier_fail_select_interface_with_endpoint_offload_support, 0x580, 0x20, true, 0x1038cd07a333d708)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_async_notification_request_during_endpoint_offload_xrb_allocate_and_build_t ), "_USBD_INTERFACE_V3.AsyncNotificationRequestDuringEndpointOffloadXrbAllocateAndBuild", async_notification_request_during_endpoint_offload_xrb_allocate_and_build, 0x5c0, 0x40, true, 0x9744467dc29ed93c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V3.UsbVerifierFailTimeSyncSupport", usb_verifier_fail_time_sync_support, 0x600, 0x20, true, 0xbafa681c87b28b4c)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#endif