#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::express_device_type_t), "_EXPRESS_COMPATIBILITY_PORT.DeviceType", device_type, 0x0, 0x20, true, 0xa4211e65ea190cc4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::device_t*), "_EXPRESS_COMPATIBILITY_PORT.Device", device, 0x40, 0x40, true, 0xa797135732ccd9f9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_control_register_t), "_EXPRESS_COMPATIBILITY_PORT.DeviceControl", device_control, 0x80, 0x10, true, 0x417cb94e9f251bcd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_device_capabilities_register_t), "_EXPRESS_COMPATIBILITY_PORT.DeviceCapabilities", device_capabilities, 0xa0, 0x20, true, 0x276211e8ef6a10ed)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_EXPRESS_COMPATIBILITY_PORT.ExpressLinkValid", express_link_valid, 0xc0, 0x8, true, 0x76caefc061f107ae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_link_capabilities_register_t), "_EXPRESS_COMPATIBILITY_PORT.LinkCapabilities", link_capabilities, 0xe0, 0x20, true, 0xb34fc04d8357a238)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_link_control_register_t), "_EXPRESS_COMPATIBILITY_PORT.LinkControl", link_control, 0x100, 0x10, true, 0xd14f33b80044fdc4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pci::express_link_status_register_t), "_EXPRESS_COMPATIBILITY_PORT.LinkStatus", link_status, 0x110, 0x10, true, 0xe0b7857ef870827c)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EXPRESS_COMPATIBILITY_PORT.BaseVersion11OrGreater", base_version11_or_greater, 0x120, 0x1, true, 0x694c6379bef45c6e, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_COMPATIBILITY_PORT.AerCapability", aer_capability, 0x140, 0x10, true, 0x6c72a9a3c4686417)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_COMPATIBILITY_PORT.ThunderboltCapability", thunderbolt_capability, 0x160, 0x10, true, 0xc0b17f5c992458e9)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::resizable_bar_info_t), "_EXPRESS_COMPATIBILITY_PORT.ResizableBar", resizable_bar, 0x180, 0x20, true, 0xeb09cd21a2a662f3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_COMPATIBILITY_PORT.ExpressPcCapability", express_pc_capability, 0x150, 0x10, true, 0x4a21c93baae8038a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_COMPATIBILITY_PORT.NpemCapability", npem_capability, 0x2a0, 0x10, true, 0x4a12a6b69eb3361f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_interface_context_t), "_EXPRESS_COMPATIBILITY_PORT.NpemInterfaceContext", npem_interface_context, 0x2c0, 0x80, true, 0x35af17bfa810173a)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::npem_control_t), "_EXPRESS_COMPATIBILITY_PORT.NpemControlBlock", npem_control_block, 0x340, 0x40, true, 0xe0d3bcecfb130693)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EXPRESS_COMPATIBILITY_PORT.L1PmSsCapability", l1_pm_ss_capability, 0x480, 0x10, true, 0x4f9fdea326e1316d)
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
#endif