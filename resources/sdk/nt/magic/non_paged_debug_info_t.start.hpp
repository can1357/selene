#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NON_PAGED_DEBUG_INFO.Signature", signature, 0x0, 0x10, true, 0x5bc7660dbfa27c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NON_PAGED_DEBUG_INFO.Flags", flags, 0x10, 0x10, true, 0x6e7f080cf20ecdaa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NON_PAGED_DEBUG_INFO.Size", size, 0x20, 0x20, true, 0xd71db147cc90b357)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NON_PAGED_DEBUG_INFO.Machine", machine, 0x40, 0x10, true, 0xa10e8016e54661f7)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NON_PAGED_DEBUG_INFO.Characteristics", characteristics, 0x50, 0x10, true, 0x63e95c6ae520d028)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NON_PAGED_DEBUG_INFO.TimeDateStamp", time_date_stamp, 0x60, 0x20, true, 0x7befb5a44fa9b95)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NON_PAGED_DEBUG_INFO.CheckSum", check_sum, 0x80, 0x20, true, 0xfbc0990c5b2bbed6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NON_PAGED_DEBUG_INFO.SizeOfImage", size_of_image, 0xa0, 0x20, true, 0x28caeb62375e9471)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NON_PAGED_DEBUG_INFO.ImageBase", image_base, 0xc0, 0x40, true, 0xd8c49531ea16aaa8)
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
#endif