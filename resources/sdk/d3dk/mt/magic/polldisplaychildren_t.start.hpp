#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_POLLDISPLAYCHILDREN.hAdapter", h_adapter, 0x0, 0x20, true, 0x4d2d2270571bbbb2)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_POLLDISPLAYCHILDREN.NonDestructiveOnly", non_destructive_only, 0x20, 0x1, true, 0xd1f361162626ca7d, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_POLLDISPLAYCHILDREN.SynchronousPolling", synchronous_polling, 0x21, 0x1, true, 0xbe237ce70f8696ab, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_POLLDISPLAYCHILDREN.DisableModeReset", disable_mode_reset, 0x22, 0x1, true, 0xe13ff3f1c0937d23, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_POLLDISPLAYCHILDREN.PollAllAdapters", poll_all_adapters, 0x23, 0x1, true, 0xaa96f3b6d6859596, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMT_POLLDISPLAYCHILDREN.PollInterruptible", poll_interruptible, 0x24, 0x1, true, 0x481b998b5a3446cd, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif