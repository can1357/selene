#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_range_t*), "_SUPPORTED_RANGE.Next", next, 0x0, 0x40, true, 0x9da0898e65bb4ac5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SUPPORTED_RANGE.SystemAddressSpace", system_address_space, 0x40, 0x20, true, 0xacff7dbe8287ba64)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SUPPORTED_RANGE.SystemBase", system_base, 0x80, 0x40, true, 0xda6d51758b35773c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SUPPORTED_RANGE.Base", base, 0xc0, 0x40, true, 0xc0f159bb269adb7f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SUPPORTED_RANGE.Limit", limit, 0x100, 0x40, true, 0xa81606cc05abe5d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif