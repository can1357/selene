#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xfa65f4634054d313)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xb0dc2221b0c45e6a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_DEVICE_ATTRIBUTES_DESCRIPTOR.Attributes", attributes, 0x40, 0x40, true, 0xd13cbc32a97fc6fa)
#else
#define _m00
#define _m01
#define _m02
#endif