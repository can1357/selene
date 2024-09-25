#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_DATA_DESCRIPTOR.Ptr", ptr, 0x0, 0x40, true, 0xe0c964683259d638)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_DATA_DESCRIPTOR.Size", size, 0x40, 0x20, true, 0x14f363ed8be902f9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EVENT_DATA_DESCRIPTOR.Type", type, 0x60, 0x8, true, 0xcb6bdc2f646ca406)
#else
#define _m00
#define _m01
#define _m02
#endif