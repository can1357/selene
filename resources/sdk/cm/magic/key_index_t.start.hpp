#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_INDEX.Signature", signature, 0x0, 0x10, true, 0x724072f57d6c5d51)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CM_KEY_INDEX.Count", count, 0x10, 0x10, true, 0xe03d4a004fde123f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_CM_KEY_INDEX.List", list, 0x20, 0x20, true, 0x8239898f031aeaa2)
#else
#define _m00
#define _m01
#define _m02
#endif