#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_INFO.Version", version, 0x0, 0x20, true, 0x63bc0366d30f580c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_DUMP_DRIVER_INFO.Entry", entry, 0x40, 0x80, true, 0x6127c55b825cc0d3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_control_code_t, void*)>*), "_DUMP_DRIVER_INFO.LiveControl", live_control, 0xc0, 0x40, true, 0x9771236c605f6ca0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DUMP_DRIVER_INFO.Name", name, 0x100, 0x40, true, 0xeafe9e4043b55fca)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DUMP_DRIVER_INFO.BaseName", base_name, 0x140, 0x40, true, 0x4bd549043abac8f6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DUMP_DRIVER_INFO.LibraryDriverName", library_driver_name, 0x180, 0x40, true, 0x8f9cf82f3cc0ebb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_DUMP_DRIVER_INFO.LibraryDriverBaseName", library_driver_base_name, 0x1c0, 0x40, true, 0x1d6c442d407b2a87)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_INFO.Flags", flags, 0x200, 0x20, true, 0x9b005994b6d2c6cc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_DRIVER_INFO.ContextSize", context_size, 0x220, 0x20, true, 0x83b3a444671724fb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_DRIVER_INFO.Context", context, 0x240, 0x40, true, 0x36d3d60c2152eb23)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_io_mode_t, uint64_t*, void*)>*), "_DUMP_DRIVER_INFO.DumpRead", dump_read, 0x280, 0x40, true, 0x697180a074b30c98)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_io_mode_t, uint64_t*, void*, void*)>*), "_DUMP_DRIVER_INFO.DumpWrite", dump_write, 0x2c0, 0x40, true, 0x5523d982a3a483aa)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::dump_disk_info_t*, uint64_t*, uint64_t*)>*), "_DUMP_DRIVER_INFO.DumpFlush", dump_flush, 0x300, 0x40, true, 0x6382780751b2f54e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct stor::port::dump_disk_info_t*, enum stor::port::dump_control_code_t, void*)>*), "_DUMP_DRIVER_INFO.DumpControl", dump_control, 0x340, 0x40, true, 0x2f6299708b91accf)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_dump_info_t*), "_DUMP_DRIVER_INFO.DumpInfo", dump_info, 0x380, 0x40, true, 0x47cefed967d2a3ef)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::ntstor_unicode_string_t), "_DUMP_DRIVER_INFO.DriverFullPath", driver_full_path, 0x400, 0x80, true, 0xd45f93b4f5f74d2a)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::ntstor_unicode_string_t), "_DUMP_DRIVER_INFO.LibraryDriverFullPath", library_driver_full_path, 0x480, 0x80, true, 0x1cefd79f5e81779)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif