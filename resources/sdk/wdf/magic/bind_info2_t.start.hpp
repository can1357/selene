#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::bind_info_t), "_WDF_BIND_INFO2.V1", v1, 0x0, 0x80, true, 0x8bc1b4c4aecf7f92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_BIND_INFO2.MinimumVersionRequired", minimum_version_required, 0x180, 0x40, true, 0x32ff84301fe5597e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WDF_BIND_INFO2.ClientVersionHigherThanFramework", client_version_higher_than_framework, 0x1c0, 0x40, true, 0xe08fdffa57c1548)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_BIND_INFO2.FuncCountPtr", func_count_ptr, 0x200, 0x40, true, 0xccf222952df2f502)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_BIND_INFO2.StructCountPtr", struct_count_ptr, 0x240, 0x40, true, 0xd586e4a4d2d4edd6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t**), "_WDF_BIND_INFO2.StructTable", struct_table, 0x280, 0x40, true, 0xc30aaf52ee7260af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif