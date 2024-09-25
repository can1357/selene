#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_SECURITY_DESCRIPTOR.Size", size, 0x0, 0x20, true, 0xb8e3b1cf7fcc4e05)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SE_SECURITY_DESCRIPTOR.Flags", flags, 0x20, 0x20, true, 0x63e9384698637ccb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SE_SECURITY_DESCRIPTOR.SecurityDescriptor", security_descriptor, 0x40, 0x40, true, 0xa74b7484fd164ad3)
#else
#define _m00
#define _m01
#define _m02
#endif