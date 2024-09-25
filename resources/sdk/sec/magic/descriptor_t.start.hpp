#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_DESCRIPTOR.Revision", revision, 0x0, 0x8, true, 0x31140f7224ebdaba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SECURITY_DESCRIPTOR.Sbz1", sbz1, 0x8, 0x8, true, 0x470f715df29a0625)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SECURITY_DESCRIPTOR.Control", control, 0x10, 0x10, true, 0x9936e308774b6bac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_DESCRIPTOR.Owner", owner, 0x40, 0x40, true, 0xd50cf2c57b6453e1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_SECURITY_DESCRIPTOR.Group", group, 0x80, 0x40, true, 0x98dbeb6ea5c22e13)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::acl_t*), "_SECURITY_DESCRIPTOR.Sacl", sacl, 0xc0, 0x40, true, 0x8e5d46888624c730)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::acl_t*), "_SECURITY_DESCRIPTOR.Dacl", dacl, 0x100, 0x40, true, 0xd588937edda9a044)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif