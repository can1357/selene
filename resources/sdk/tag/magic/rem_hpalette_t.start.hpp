#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemHPALETTE.cbData", cb_data, 0x0, 0x20, true, 0xd53c48b5bab77d20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemHPALETTE.data", data, 0x20, 0x8, true, 0xce188e629ebd40f8)
#else
#define _m00
#define _m01
#endif