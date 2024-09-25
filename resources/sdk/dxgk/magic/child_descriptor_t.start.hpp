#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::child_device_type_t), "_DXGK_CHILD_DESCRIPTOR.ChildDeviceType", child_device_type, 0x0, 0x20, true, 0xabf4551a049f8bb4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::child_capabilities_t), "_DXGK_CHILD_DESCRIPTOR.ChildCapabilities", child_capabilities, 0x20, 0x80, true, 0xa50c6b9d02533869)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CHILD_DESCRIPTOR.AcpiUid", acpi_uid, 0xa0, 0x20, true, 0xe619ab6a6e9f2de6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CHILD_DESCRIPTOR.ChildUid", child_uid, 0xc0, 0x20, true, 0x4e697fd9668e0152)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif