#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::class_bind_info_t), "_WDF_CLASS_BIND_INFO2.V1", v1, 0x0, 0x80, true, 0xf7453475defb1108)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_CLASS_BIND_INFO2.MinimumVersionRequired", minimum_version_required, 0x280, 0x40, true, 0x44ceb08eaf257565)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_WDF_CLASS_BIND_INFO2.ClientVersionHigherThanFramework", client_version_higher_than_framework, 0x2c0, 0x40, true, 0x1df00cf6748d97f2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_CLASS_BIND_INFO2.FuncCountPtr", func_count_ptr, 0x300, 0x40, true, 0x91f47939eed7d4fd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_WDF_CLASS_BIND_INFO2.StructCountPtr", struct_count_ptr, 0x340, 0x40, true, 0x70d7c64508a5cdb8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t**), "_WDF_CLASS_BIND_INFO2.StructTable", struct_table, 0x380, 0x40, true, 0xab42267e664737fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif