#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_double_val._Sh", sh, 0x0, 0x40, true, 0x5ce1a12972d74d38)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_double_val._Val", val, 0x0, 0x40, true, 0xe25da8f7f55fc073)
#else
#define _m00
#define _m01
#endif