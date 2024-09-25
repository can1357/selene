#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class win::opaque_string_t), "ProxyStubRegistrationEntryProperties.Description", description, 0x0, 0x40, true, 0xffd78f4d9d864f06)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::expandable_string_t), "ProxyStubRegistrationEntryProperties.DllPath", dll_path, 0x40, 0x80, true, 0x7a9ce94294547566)
#else
#define _m00
#define _m01
#endif