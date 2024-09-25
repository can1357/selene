#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE.DataLength", data_length, 0x0, 0x10, true, 0x3bbd3ecb42b0a98f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE.TotalLength", total_length, 0x10, 0x10, true, 0x845ed7c8557d54f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE.Length", length, 0x0, 0x20, true, 0x34dbc003570c38d1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE.Type", type, 0x20, 0x10, true, 0x3babf12fccfcf752)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_PORT_MESSAGE.DataInfoOffset", data_info_offset, 0x30, 0x10, true, 0xa90e7f30c0bf201f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE.ZeroInit", zero_init, 0x20, 0x20, true, 0x67247650fa0d72d3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_PORT_MESSAGE.ClientId", client_id, 0x40, 0x80, true, 0xc77dbe9ae61810eb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(double), "_PORT_MESSAGE.DoNotUseThisField", do_not_use_this_field, 0x40, 0x40, true, 0x743c471c50f25ef7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE.MessageId", message_id, 0xc0, 0x20, true, 0xcc624819e27dae48)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PORT_MESSAGE.ClientViewSize", client_view_size, 0x100, 0x40, true, 0x12c2f5c3472f2ab2)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PORT_MESSAGE.CallbackId", callback_id, 0x100, 0x20, true, 0x4bd4062dfc0fd3)
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