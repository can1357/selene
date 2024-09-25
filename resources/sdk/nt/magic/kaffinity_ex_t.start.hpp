#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KAFFINITY_EX.Count", count, 0x0, 0x10, true, 0xfdd0159ed90dbb6d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KAFFINITY_EX.Size", size, 0x10, 0x10, true, 0x15fca5c0701c986e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 20>), "_KAFFINITY_EX.Bitmap", bitmap, 0x40, 0x0, true, 0xe00a80f1f2f89d6b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 32>), "_KAFFINITY_EX.StaticBitmap", static_bitmap, 0x40, 0x0, true, 0x706ec6aa17515f50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif