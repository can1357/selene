#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HANDLE_INFORMATION.HandleAttributes", handle_attributes, 0x0, 0x20, true, 0x33b336f9b2df7b7b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_OBJECT_HANDLE_INFORMATION.GrantedAccess", granted_access, 0x20, 0x20, true, 0x88d02abef1849c2f)
#else
#define _m00
#define _m01
#endif