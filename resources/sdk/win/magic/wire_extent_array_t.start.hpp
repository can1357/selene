#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireExtentArray.size", size, 0x0, 0x20, true, 0x8a1aec20bfb81919)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireExtentArray.unique", unique, 0x40, 0x20, true, 0xd621b78b0fc3805d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireExtentArray.rounded_size", rounded_size, 0x60, 0x20, true, 0xb9915f9ec14833ec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "WireExtentArray.unique_flag", unique_flag, 0x80, 0x0, true, 0xf294e71b1fd8e82c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif