#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::decode_control_entry_t*), "_ETW_DECODE_CONTROL_ENTRY.Next", next, 0x0, 0x40, true, 0x499e6138bee61b47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_DECODE_CONTROL_ENTRY.Decode", decode, 0x40, 0x80, true, 0xc9dbdb4ca0dc3331)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_DECODE_CONTROL_ENTRY.Control", control, 0xc0, 0x80, true, 0xa5e44bd210b05135)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_DECODE_CONTROL_ENTRY.ConsumersNotified", consumers_notified, 0x140, 0x8, true, 0x5e4925a9ec72e225)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif