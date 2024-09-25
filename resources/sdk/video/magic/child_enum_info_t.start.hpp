#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_ENUM_INFO.Size", size, 0x0, 0x20, true, 0x2b51712ca8fb2e25)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_ENUM_INFO.ChildDescriptorSize", child_descriptor_size, 0x20, 0x20, true, 0x42effa5a2d082689)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_ENUM_INFO.ChildIndex", child_index, 0x40, 0x20, true, 0x6586cdc61b8cc852)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_CHILD_ENUM_INFO.ACPIHwId", acpi_hw_id, 0x60, 0x20, true, 0xbca8541631dd309b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_CHILD_ENUM_INFO.ChildHwDeviceExtension", child_hw_device_extension, 0x80, 0x40, true, 0xd0b8e5a725ebddbe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif