#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEDEVICEFLAGS.LegacyMode", legacy_mode, 0x0, 0x1, true, 0xd24862eb9dec1335, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEDEVICEFLAGS.RequestVSync", request_v_sync, 0x1, 0x1, true, 0xac039272a8cbc38b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_CREATEDEVICEFLAGS.DisableGpuTimeout", disable_gpu_timeout, 0x2, 0x1, true, 0xc32b251740de353d, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif