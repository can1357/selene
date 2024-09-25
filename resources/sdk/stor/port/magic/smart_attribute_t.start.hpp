#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_ATTRIBUTE.Id", id, 0x0, 0x8, true, 0xa4caefccb630989c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_ATTRIBUTE.LowStatus", low_status, 0x8, 0x8, true, 0x642b816784888b38)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_ATTRIBUTE.HighStatus", high_status, 0x10, 0x8, true, 0x3a51b0c0d6473117)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_ATTRIBUTE.Value", value, 0x18, 0x8, true, 0xde7d79ae5aa26b68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SMART_ATTRIBUTE.Worst", worst, 0x20, 0x8, true, 0x14945e21d9d916a5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_SMART_ATTRIBUTE.Raw", raw, 0x28, 0x30, true, 0x2f879cdad38d6680)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif