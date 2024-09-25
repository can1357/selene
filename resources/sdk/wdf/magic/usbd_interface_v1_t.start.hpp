#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_INTERFACE_V1.Size", size, 0x0, 0x0, false, 0xe8ee50732abe5096)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBD_INTERFACE_V1.Version", version, 0x0, 0x0, false, 0xd5e5c110451bc674)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_INTERFACE_V1.Context", context, 0x0, 0x0, false, 0x7f06ff5ae124bbd2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBD_INTERFACE_V1.InterfaceReference", interface_reference, 0x0, 0x0, false, 0x50b49856cd492966)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBD_INTERFACE_V1.InterfaceDereference", interface_dereference, 0x0, 0x0, false, 0xae3ebcb0c15a62d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.USBDClientContractVersion", usbd_client_contract_version, 0x0, 0x0, false, 0x7e8e70229a3cc60e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::usbdi_handle_t*), "_USBD_INTERFACE_V1.USBDInterfaceHandle", usbd_interface_handle, 0x0, 0x0, false, 0xc8d6bf674589ac7b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_USBD_INTERFACE_V1.DeviceObject", device_object, 0x0, 0x0, false, 0xdef56d6b4a56c749)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.PoolTag", pool_tag, 0x0, 0x0, false, 0xc07ad84d86b00ef3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBD_INTERFACE_V1.ContextFromClient", context_from_client, 0x0, 0x0, false, 0x510dd9b1a59301c2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierEnabled", usb_verifier_enabled, 0x0, 0x0, false, 0x8c81ab929809db0b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierFailRegistration", usb_verifier_fail_registration, 0x0, 0x0, false, 0xe61c5fbfa9fa7230)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierFailChainedMdlSupport", usb_verifier_fail_chained_mdl_support, 0x0, 0x0, false, 0x9afe0c5c25c40c61)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierFailStaticStreamSupport", usb_verifier_fail_static_stream_support, 0x0, 0x0, false, 0x4e4ca58a560f7781)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierStaticStreamCountOverride", usb_verifier_static_stream_count_override, 0x0, 0x0, false, 0xd3cd5a100efa5fcc)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierFailEnableStaticStreams", usb_verifier_fail_enable_static_streams, 0x0, 0x0, false, 0xee43e00f2f5c99d2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USBD_INTERFACE_V1.UsbVerifierTrackXrbs", usb_verifier_track_xrbs, 0x0, 0x0, false, 0x4c171faa04f8e009)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_unregister_t ), "_USBD_INTERFACE_V1.Unregister", unregister, 0x0, 0x0, false, 0x14d19ab552c6baa9)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_xrb_allocate_t ), "_USBD_INTERFACE_V1.XrbAllocate", xrb_allocate, 0x0, 0x0, false, 0x33b12784d1fc206b)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_usbd_isoch_xrb_allocate_t ), "_USBD_INTERFACE_V1.IsochXrbAllocate", isoch_xrb_allocate, 0x0, 0x0, false, 0x4e020a9618c95a0)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V1.SelectConfigXrbAllocateAndBuild", select_config_xrb_allocate_and_build, 0x0, 0x0, false, 0x521ebb8a7c0759f8)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::usbdi_handle_t*, struct wdf::usb_configuration_descriptor_t*, struct wdf::usbd_interface_list_entry_t*, struct wdf::urb_t**)>*), "_USBD_INTERFACE_V1.SelectInterfaceXrbAllocateAndBuild", select_interface_xrb_allocate_and_build, 0x0, 0x0, false, 0xf429cd754fe57fa2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::urb_t*)>*), "_USBD_INTERFACE_V1.XrbFree", xrb_free, 0x0, 0x0, false, 0x1b0e5324baff4027)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif