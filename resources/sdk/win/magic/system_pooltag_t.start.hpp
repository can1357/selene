#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SYSTEM_POOLTAG.Tag", tag, 0x0, 0x20, true, 0x7acd3b12ef239063)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG.TagUlong", tag_ulong, 0x0, 0x20, true, 0xe426fd0540f35094)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG.PagedAllocs", paged_allocs, 0x20, 0x20, true, 0xe5726be10ae3e1d5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG.PagedFrees", paged_frees, 0x40, 0x20, true, 0x3d56adf1da7cb599)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_POOLTAG.PagedUsed", paged_used, 0x80, 0x40, true, 0x110b6eb272d68074)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG.NonPagedAllocs", non_paged_allocs, 0xc0, 0x20, true, 0xc54ebe5b632bcb59)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG.NonPagedFrees", non_paged_frees, 0xe0, 0x20, true, 0xfda2068d0c8ae352)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_POOLTAG.NonPagedUsed", non_paged_used, 0x100, 0x40, true, 0x965e91fb246a52df)
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