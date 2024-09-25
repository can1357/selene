#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_MISC.DataType", data_type, 0x0, 0x20, true, 0xe5b42419809b228a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_DEBUG_MISC.Length", length, 0x20, 0x20, true, 0xcfee3db6fa0df793)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_DEBUG_MISC.Unicode", unicode, 0x40, 0x8, true, 0xaa5933edbb535605)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_IMAGE_DEBUG_MISC.Data", data, 0x60, 0x8, true, 0x3cf2e0282ecdde2f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif