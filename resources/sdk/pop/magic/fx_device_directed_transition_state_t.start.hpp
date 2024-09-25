#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_FX_DEVICE_DIRECTED_TRANSITION_STATE.CompletionContext", completion_context, 0x0, 0x40, true, 0x4c3f20532a7f330d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_DEVICE_DIRECTED_TRANSITION_STATE.CompletionStatus", completion_status, 0x40, 0x20, true, 0x8f514cde8c880b25)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_DIRECTED_TRANSITION_STATE.DIrpPending", d_irp_pending, 0x60, 0x1, true, 0x8f14c44982cc733b, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_POP_FX_DEVICE_DIRECTED_TRANSITION_STATE.DIrpCompleted", d_irp_completed, 0x61, 0x1, true, 0x84409b0877eb9cf0, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif