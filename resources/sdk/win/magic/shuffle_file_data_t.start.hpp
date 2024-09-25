#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SHUFFLE_FILE_DATA.StartingOffset", starting_offset, 0x0, 0x40, true, 0x3f72326966fa27e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_SHUFFLE_FILE_DATA.Length", length, 0x40, 0x40, true, 0xb79af1513ee71f53)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHUFFLE_FILE_DATA.Flags", flags, 0x80, 0x20, true, 0x31e5fcdd6a46e0e)
#else
#define _m00
#define _m01
#define _m02
#endif