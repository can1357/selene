#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICE_DESCRIPTOR.DescriptorOffset", descriptor_offset, 0x0, 0x20, true, 0xb0b5c9672c3283b9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DEVICE_DESCRIPTOR.DescriptorLength", descriptor_length, 0x20, 0x20, true, 0xef6b4e8cbe3ad669)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_DEVICE_DESCRIPTOR.DescriptorBuffer", descriptor_buffer, 0x40, 0x40, true, 0xb4ad0eccbeb31356)
#else
#define _m00
#define _m01
#define _m02
#endif