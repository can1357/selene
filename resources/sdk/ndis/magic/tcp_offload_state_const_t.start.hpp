#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_state_header_t), "_TCP_OFFLOAD_STATE_CONST.Header", header, 0x0, 0x40, true, 0xe4870283c5b88e1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_CONST.Flags", flags, 0x40, 0x10, true, 0x25eebde709555932)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_CONST.RemotePort", remote_port, 0x50, 0x10, true, 0x9b785371f986e869)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_CONST.LocalPort", local_port, 0x60, 0x10, true, 0x76eb4665760400de)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TCP_OFFLOAD_STATE_CONST.SndWindScale", snd_wind_scale, 0x70, 0x4, true, 0x78997fd6450d1d14, 4, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_TCP_OFFLOAD_STATE_CONST.RcvWindScale", rcv_wind_scale, 0x74, 0x4, true, 0x4fc8467e869e6175, 4, uint8_t)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_TCP_OFFLOAD_STATE_CONST.RemoteMss", remote_mss, 0x80, 0x10, true, 0xa05044f261b0ac62)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_TCP_OFFLOAD_STATE_CONST.HashValue", hash_value, 0xa0, 0x20, true, 0x565a22aec3877491)
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