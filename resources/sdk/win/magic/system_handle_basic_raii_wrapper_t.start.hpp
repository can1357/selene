#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void const*), "SystemHandleBasicRaiiWrapper._handle", handle, 0x0, 0x40, true, 0xfd31986d200361a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint8_t), "SystemHandleBasicRaiiWrapper._idlType", idl_type, 0x40, 0x8, true, 0x18c6c7cd4ce4f6cd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "SystemHandleBasicRaiiWrapper._owned", owned, 0x48, 0x8, true, 0x7d8f374090c75eda)
#else
#define _m00
#define _m01
#define _m02
#endif