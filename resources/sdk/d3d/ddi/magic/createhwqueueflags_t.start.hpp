#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATEHWQUEUEFLAGS.DisableGpuTimeout", disable_gpu_timeout, 0x0, 0x1, true, 0xe76f910eef08ccc4, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATEHWQUEUEFLAGS.NoBroadcastSignal", no_broadcast_signal, 0x1, 0x1, true, 0xedd51a9dd0a360aa, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDI_CREATEHWQUEUEFLAGS.NoBroadcastWait", no_broadcast_wait, 0x2, 0x1, true, 0xd547491efd578a24, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDI_CREATEHWQUEUEFLAGS.Value", value, 0x0, 0x20, true, 0x2708e64012d3c428)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif