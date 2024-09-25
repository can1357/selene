#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MUISTRINGPOOL.TotalSize", total_size, 0x0, 0x20, true, 0xba78642ec6b3d46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUISTRINGPOOL.MaxNumStrings", max_num_strings, 0x20, 0x10, true, 0xa6458664958de1a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUISTRINGPOOL.NumStrings", num_strings, 0x30, 0x10, true, 0x3a8bb17b4e7709d7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUISTRINGPOOL.MaxNumCharsInPool", max_num_chars_in_pool, 0x40, 0x10, true, 0xb5ff6ea3d2ef7e36)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MUISTRINGPOOL.NumCharsInPool", num_chars_in_pool, 0x50, 0x10, true, 0xbf81f5c797f13c35)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t*), "_MUISTRINGPOOL.Strings", strings, 0x80, 0x40, true, 0xff8be697bfd4d8e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_MUISTRINGPOOL.Pool", pool, 0xc0, 0x40, true, 0x6179b0496cc8c59d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif