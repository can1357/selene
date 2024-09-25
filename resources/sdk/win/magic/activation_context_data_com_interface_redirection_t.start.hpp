#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.Size", size, 0x0, 0x20, true, 0xb1597c5a038fc3f3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.Flags", flags, 0x20, 0x20, true, 0xa1eb07d302dca1c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.ProxyStubClsid32", proxy_stub_clsid32, 0x40, 0x80, true, 0x45d3318b5c681f67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.NumMethods", num_methods, 0xc0, 0x20, true, 0x775f1ed95f36cded)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.TypeLibraryId", type_library_id, 0xe0, 0x80, true, 0x89942781ab0e3bb7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.BaseInterface", base_interface, 0x160, 0x80, true, 0x8b24d4d97d539ddd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.NameLength", name_length, 0x1e0, 0x20, true, 0x7bc6fb09b9a26648)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.NameOffset", name_offset, 0x200, 0x20, true, 0x656923f306d9ccf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif