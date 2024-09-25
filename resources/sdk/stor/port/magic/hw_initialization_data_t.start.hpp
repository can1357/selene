#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.HwInitializationDataSize", hw_initialization_data_size, 0x0, 0x20, true, 0xe9bd2a94f13e17a6)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_HW_INITIALIZATION_DATA.AdapterInterfaceType", adapter_interface_type, 0x20, 0x20, true, 0x62b8680761fcc9d7)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_HW_INITIALIZATION_DATA.HwInitialize", hw_initialize, 0x40, 0x40, true, 0xc985730b4caed7b8)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(phw_startio_t ), "_HW_INITIALIZATION_DATA.HwStartIo", hw_start_io, 0x80, 0x40, true, 0x38cf0a159e6bb0ff)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_HW_INITIALIZATION_DATA.HwInterrupt", hw_interrupt, 0xc0, 0x40, true, 0xe1c2ad83c688f60d)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::function<uint32_t(void*, void*, void*, char*, struct stor::port::port_configuration_information_t*, uint8_t*)>*, void*>), "_HW_INITIALIZATION_DATA.HwFindAdapter", hw_find_adapter, 0x100, 0x40, true, 0xb36f2487eab7fca8)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, uint32_t)>*), "_HW_INITIALIZATION_DATA.HwResetBus", hw_reset_bus, 0x140, 0x40, true, 0xcbfbd6cbd99428d6)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HW_INITIALIZATION_DATA.HwDmaStarted", hw_dma_started, 0x180, 0x40, true, 0x24a416afe400ef4e)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, void*, uint8_t)>*), "_HW_INITIALIZATION_DATA.HwAdapterState", hw_adapter_state, 0x1c0, 0x40, true, 0x781c601cc74b05a2)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.DeviceExtensionSize", device_extension_size, 0x200, 0x20, true, 0x3f9ae20bbcbece06)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.SpecificLuExtensionSize", specific_lu_extension_size, 0x220, 0x20, true, 0x6ee7be8d8f59db56)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.SrbExtensionSize", srb_extension_size, 0x240, 0x20, true, 0x9d5f57c5b8655f30)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.NumberOfAccessRanges", number_of_access_ranges, 0x260, 0x20, true, 0x41129f4a3c180d14)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.MapBuffers", map_buffers, 0x2c0, 0x8, true, 0x95d02924408706b9)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.NeedPhysicalAddresses", need_physical_addresses, 0x2c8, 0x8, true, 0x43814b0cd1247ebc)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.TaggedQueuing", tagged_queuing, 0x2d0, 0x8, true, 0xaa4f5fb567b3c6e0)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.AutoRequestSense", auto_request_sense, 0x2d8, 0x8, true, 0x1b77b3b5c5a9ebe1)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.MultipleRequestPerLu", multiple_request_per_lu, 0x2e0, 0x8, true, 0xa0ea4068dea17a47)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_HW_INITIALIZATION_DATA.ReceiveEvent", receive_event, 0x2e8, 0x8, true, 0x489920769eca1f01)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HW_INITIALIZATION_DATA.VendorIdLength", vendor_id_length, 0x2f0, 0x10, true, 0x6c7a67e150f9981)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_HW_INITIALIZATION_DATA.VendorId", vendor_id, 0x300, 0x40, true, 0x8e1b741fe3f621f5)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HW_INITIALIZATION_DATA.ReservedUshort", reserved_ushort, 0x340, 0x10, true, 0x8d68f5095ba89ba3)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HW_INITIALIZATION_DATA.PortVersionFlags", port_version_flags, 0x340, 0x10, true, 0xad1291947561cab3)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_HW_INITIALIZATION_DATA.DeviceIdLength", device_id_length, 0x350, 0x10, true, 0x7089e6d396f13a47)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_HW_INITIALIZATION_DATA.DeviceId", device_id, 0x380, 0x40, true, 0x88c821a6f6559972)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(phw_adapter_control_t ), "_HW_INITIALIZATION_DATA.HwAdapterControl", hw_adapter_control, 0x3c0, 0x40, true, 0xe294b76c8631026d)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*, struct nt::scsi_request_block_t*)>*), "_HW_INITIALIZATION_DATA.HwBuildIo", hw_build_io, 0x400, 0x40, true, 0xa659b4aaf31498e0)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HW_INITIALIZATION_DATA.HwFreeAdapterResources", hw_free_adapter_resources, 0x440, 0x40, true, 0xd15fb294db4e12db)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_HW_INITIALIZATION_DATA.HwProcessServiceRequest", hw_process_service_request, 0x480, 0x40, true, 0x237e6a4516b0478f)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HW_INITIALIZATION_DATA.HwCompleteServiceIrp", hw_complete_service_irp, 0x4c0, 0x40, true, 0xe991d7f4dc5005e)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_HW_INITIALIZATION_DATA.HwInitializeTracing", hw_initialize_tracing, 0x500, 0x40, true, 0xb79764445060a889)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_HW_INITIALIZATION_DATA.HwCleanupTracing", hw_cleanup_tracing, 0x540, 0x40, true, 0x3faddcc756abb955)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_HW_INITIALIZATION_DATA.HwTracingEnabled", hw_tracing_enabled, 0x580, 0x40, true, 0x8c0109649f80f8fd)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.FeatureSupport", feature_support, 0x5c0, 0x20, true, 0x58cd05abf2869f91)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.SrbTypeFlags", srb_type_flags, 0x5e0, 0x20, true, 0x2daf91c4848d0f1f)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_HW_INITIALIZATION_DATA.AddressTypeFlags", address_type_flags, 0x600, 0x20, true, 0x864732566a967070)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<enum stor::port::scsi_unit_control_status_t(void*, enum stor::port::scsi_unit_control_type_t, void*)>*), "_HW_INITIALIZATION_DATA.HwUnitControl", hw_unit_control, 0x640, 0x40, true, 0x6bf10f66892ca982)
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
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#endif