#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_SIGNALFLAGS.SignalAtSubmission", signal_at_submission, 0x0, 0x1, true, 0x99ede0c9bc25b720, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_SIGNALFLAGS.EnqueueCpuEvent", enqueue_cpu_event, 0x1, 0x1, true, 0x3a3c97da788213a8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_SIGNALFLAGS.AllowFenceRewind", allow_fence_rewind, 0x2, 0x1, true, 0xbf2a6507aebd2c68, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DDDICB_SIGNALFLAGS.DXGK_SIGNAL_FLAG_INTERNAL0", dxgk_signal_flag_internal0, 0x1f, 0x1, true, 0xfb1b7caa033aec2f, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DDDICB_SIGNALFLAGS.Value", value, 0x0, 0x20, true, 0xa246eaf0f06deac1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif