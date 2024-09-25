#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::sub_q_header_t), "_SUB_Q_CURRENT_POSITION.Header", header, 0x0, 0x20, true, 0x9ef67c456dbb9c84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_CURRENT_POSITION.FormatCode", format_code, 0x20, 0x8, true, 0xdc8f46203e47fa59)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SUB_Q_CURRENT_POSITION.Control", control, 0x28, 0x4, true, 0xc7a6e7d637f16794, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SUB_Q_CURRENT_POSITION.ADR", adr, 0x2c, 0x4, true, 0x8b42e063c909b8c5, 4, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_CURRENT_POSITION.TrackNumber", track_number, 0x30, 0x8, true, 0x20e0b9d9c82ff22e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SUB_Q_CURRENT_POSITION.IndexNumber", index_number, 0x38, 0x8, true, 0xe1b31a5d932f113a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SUB_Q_CURRENT_POSITION.AbsoluteAddress", absolute_address, 0x40, 0x20, true, 0x3e71ae2600a72fee)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SUB_Q_CURRENT_POSITION.TrackRelativeAddress", track_relative_address, 0x60, 0x20, true, 0xaf530789ebf36508)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif