#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t), "CPerInterfacePSFactory._iid", iid, 0xc0, 0x80, true, 0x8dd39e3b73e9a0e1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tag::proxy_file_info_t const*), "CPerInterfacePSFactory._pFileInfo", p_file_info, 0x140, 0x40, true, 0xfb3042ba590e19a4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const int32_t), "CPerInterfacePSFactory._interfaceIndex", interface_index, 0x180, 0x20, true, 0x6f5e77adb107dfbb)
#else
#define _m00
#define _m01
#define _m02
#endif