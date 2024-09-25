#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t&), "ACTIVATION_PROPERTIES._rclsid", rclsid, 0x0, 0x40, true, 0x891d253171528352)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "ACTIVATION_PROPERTIES._partition", partition, 0x40, 0x80, true, 0x60385bceee6f3ed7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct nt::guid_t&), "ACTIVATION_PROPERTIES._riid", riid, 0xc0, 0x40, true, 0xcf27411e2193d031)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ACTIVATION_PROPERTIES._dwFlags", dw_flags, 0x100, 0x20, true, 0x32e7c5331beaab02)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ACTIVATION_PROPERTIES._dwActvFlags", dw_actv_flags, 0x120, 0x20, true, 0x896e978547f925eb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ACTIVATION_PROPERTIES._dwContext", dw_context, 0x140, 0x20, true, 0x7cc903ad5696b0d7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ACTIVATION_PROPERTIES._dwDllServerType", dw_dll_server_type, 0x160, 0x20, true, 0x56fbbd67dc90bab1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "ACTIVATION_PROPERTIES._pwszDllServer", pwsz_dll_server, 0x180, 0x40, true, 0x492948f6a648a742)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_unknown_t**), "ACTIVATION_PROPERTIES._ppUnk", pp_unk, 0x1c0, 0x40, true, 0xf8949d77040d4816)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::i_com_class_info_t*), "ACTIVATION_PROPERTIES._pCI", p_ci, 0x200, 0x40, true, 0x9837eda796951bac)
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
#endif