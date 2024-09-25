#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_FILTER_DESCRIPTOR.Ptr", ptr, 0x0, 0x40, true, 0x2331a12eb220daea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_FILTER_DESCRIPTOR.Size", size, 0x40, 0x20, true, 0x78a07be219933032)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_FILTER_DESCRIPTOR.Type", type, 0x60, 0x20, true, 0x83db570a72778ca2)
#else
#define _m00
#define _m01
#define _m02
#endif