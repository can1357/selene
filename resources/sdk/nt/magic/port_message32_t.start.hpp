#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE32.DataLength", data_length, 0x0, 0x10, true, 0x9f0b01d3f54bb071)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE32.TotalLength", total_length, 0x10, 0x10, true, 0xcdc6973013c64c5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE32.Length", length, 0x0, 0x20, true, 0xe798b1d403a2269e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE32.Type", type, 0x20, 0x10, true, 0x92a0d77b1417ca14)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE32.DataInfoOffset", data_info_offset, 0x30, 0x10, true, 0x31cfea25fa4785d4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE32.ZeroInit", zero_init, 0x20, 0x20, true, 0xb8d3f2b42bd19ddc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id32_t), "_PORT_MESSAGE32.ClientId", client_id, 0x40, 0x40, true, 0x351b7d20d98c0fdc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(double), "_PORT_MESSAGE32.DoNotUseThisField", do_not_use_this_field, 0x40, 0x40, true, 0x42282fd3bab8c010)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE32.MessageId", message_id, 0x80, 0x20, true, 0xf131a3c4519e79fe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE32.ClientViewSize", client_view_size, 0xa0, 0x20, true, 0xcb49cf69fb9a2a9b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE32.CallbackId", callback_id, 0xa0, 0x20, true, 0x4e1d4c72d1512d66)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif