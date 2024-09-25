#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_HANDLE_INFORMATION.Index", index, 0x0, 0x20, true, 0x2f7ee32068e102c3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_HANDLE_INFORMATION.Flags", flags, 0x20, 0x20, true, 0x76f59d90f9dd9386)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_HANDLE_INFORMATION.Handle", handle, 0x40, 0x20, true, 0xe1493cfc9bb936e1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_HANDLE_INFORMATION.ObjectType", object_type, 0x60, 0x20, true, 0x4bb8aeb60f83236a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_MESSAGE_HANDLE_INFORMATION.GrantedAccess", granted_access, 0x80, 0x20, true, 0x763d9a5bebddb2ad)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif