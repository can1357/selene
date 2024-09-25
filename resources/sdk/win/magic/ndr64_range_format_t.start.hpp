#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_RANGE_FORMAT.FormatCode", format_code, 0x0, 0x8, true, 0x5642b68203140f3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDR64_RANGE_FORMAT.RangeType", range_type, 0x8, 0x8, true, 0x921d94d998aa60b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDR64_RANGE_FORMAT.MinValue", min_value, 0x40, 0x40, true, 0xf18dfe93b8a47089)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDR64_RANGE_FORMAT.MaxValue", max_value, 0x80, 0x40, true, 0xe375d433c4335557)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif