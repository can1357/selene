#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLIC_OBJECT_BASIC_INFORMATION.Attributes", attributes, 0x0, 0x20, true, 0x4146d6bbb9cec227)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLIC_OBJECT_BASIC_INFORMATION.GrantedAccess", granted_access, 0x20, 0x20, true, 0x16a136ec068942bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLIC_OBJECT_BASIC_INFORMATION.HandleCount", handle_count, 0x40, 0x20, true, 0x30f04d0ad98bfb85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PUBLIC_OBJECT_BASIC_INFORMATION.PointerCount", pointer_count, 0x60, 0x20, true, 0x2377effb1e0bc6be)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif