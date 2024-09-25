#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRemHBITMAP.cbData", cb_data, 0x0, 0x20, true, 0xd8ab597dcf8ccad7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagRemHBITMAP.data", data, 0x20, 0x8, true, 0x88f8449a53afeefc)
#else
#define _m00
#define _m01
#endif