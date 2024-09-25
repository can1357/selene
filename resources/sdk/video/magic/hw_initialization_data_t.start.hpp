#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HW_INITIALIZATION_DATA.HwInitDataSize", hw_init_data_size, 0x0, 0x20, true, 0x2268342f1d69095e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_VIDEO_HW_INITIALIZATION_DATA.AdapterInterfaceType", adapter_interface_type, 0x20, 0x20, true, 0x24580dc904bd7e9c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_find_adapter_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwFindAdapter", hw_find_adapter, 0x40, 0x40, true, 0x1e098d034908fd58)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_VIDEO_HW_INITIALIZATION_DATA.HwInitialize", hw_initialize, 0x80, 0x40, true, 0xc5f58741c24190e3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_VIDEO_HW_INITIALIZATION_DATA.HwInterrupt", hw_interrupt, 0xc0, 0x40, true, 0x552a1bf7efb9ed6a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_start_io_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwStartIO", hw_start_io, 0x100, 0x40, true, 0xd40aad3be6263cc1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HW_INITIALIZATION_DATA.HwDeviceExtensionSize", hw_device_extension_size, 0x140, 0x20, true, 0x23fe82ae108a8e79)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HW_INITIALIZATION_DATA.StartingDeviceNumber", starting_device_number, 0x160, 0x20, true, 0xfa0485f4605cc04d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_reset_hw_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwResetHw", hw_reset_hw, 0x180, 0x40, true, 0x2366ac46c4df7bae)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_VIDEO_HW_INITIALIZATION_DATA.HwTimer", hw_timer, 0x1c0, 0x40, true, 0x8c5f56831682132d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_start_dma_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwStartDma", hw_start_dma, 0x200, 0x40, true, 0x8fdf32109ba98232)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct video::power_management_t*)>*), "_VIDEO_HW_INITIALIZATION_DATA.HwSetPowerState", hw_set_power_state, 0x240, 0x40, true, 0x50b2ea95b5dc8b0f)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, struct video::power_management_t*)>*), "_VIDEO_HW_INITIALIZATION_DATA.HwGetPowerState", hw_get_power_state, 0x280, 0x40, true, 0xc2ae2b5b1c52f7e5)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_get_child_descriptor_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwGetVideoChildDescriptor", hw_get_video_child_descriptor, 0x2c0, 0x40, true, 0xb899e42f5e5700e7)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_query_interface_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwQueryInterface", hw_query_interface, 0x300, 0x40, true, 0x670775b74f5754ec)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HW_INITIALIZATION_DATA.HwChildDeviceExtensionSize", hw_child_device_extension_size, 0x340, 0x20, true, 0x4ff1720a98e42213)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct video::access_range_t*), "_VIDEO_HW_INITIALIZATION_DATA.HwLegacyResourceList", hw_legacy_resource_list, 0x380, 0x40, true, 0x411b9fd18126ac3f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_HW_INITIALIZATION_DATA.HwLegacyResourceCount", hw_legacy_resource_count, 0x3c0, 0x20, true, 0xfaf3cea170462949)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pvideo_hw_legacyresources_t ), "_VIDEO_HW_INITIALIZATION_DATA.HwGetLegacyResources", hw_get_legacy_resources, 0x400, 0x40, true, 0x2c609932fef071c6)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_VIDEO_HW_INITIALIZATION_DATA.AllowEarlyEnumeration", allow_early_enumeration, 0x440, 0x8, true, 0xd8964040b19e9145)
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
#endif