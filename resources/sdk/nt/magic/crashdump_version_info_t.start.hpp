#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_CRASHDUMP_VERSION_INFO.IgnoreGuardPages", ignore_guard_pages, 0x0, 0x20, true, 0x63e465ca3ab83cd4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRASHDUMP_VERSION_INFO.PointerSize", pointer_size, 0x20, 0x20, true, 0x3af34fd5ed5a98ca)
#else
#define _m00
#define _m01
#endif