#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.Object", object, 0x0, 0x40, true, 0x9b2b92f34a6f6d86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_LOAD_KEY_INFORMATION_V2.KeyName", key_name, 0x40, 0x40, true, 0x42e1e2581f948d66)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_REG_LOAD_KEY_INFORMATION_V2.SourceFile", source_file, 0x80, 0x40, true, 0x52b9d032f6f5a281)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_LOAD_KEY_INFORMATION_V2.Flags", flags, 0xc0, 0x20, true, 0x1cfaaba84501acd8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.TrustClassObject", trust_class_object, 0x100, 0x40, true, 0x303e3f0a432b810c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.UserEvent", user_event, 0x140, 0x40, true, 0x976dd22ecc094900)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REG_LOAD_KEY_INFORMATION_V2.DesiredAccess", desired_access, 0x180, 0x20, true, 0x187de21c76804fb2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_REG_LOAD_KEY_INFORMATION_V2.RootHandle", root_handle, 0x1c0, 0x40, true, 0x92ca644189ec9e24)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.CallContext", call_context, 0x200, 0x40, true, 0xd2d5e7b4faffab98)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.ObjectContext", object_context, 0x240, 0x40, true, 0xc9b74c5d308b5613)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_REG_LOAD_KEY_INFORMATION_V2.Version", version, 0x280, 0x40, true, 0x9cff884fc9880cb0)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_REG_LOAD_KEY_INFORMATION_V2.FileAccessToken", file_access_token, 0x2c0, 0x40, true, 0x4fd4496cc604a2ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#endif