#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xstate_save_t*), "_XSTATE_SAVE.Prev", prev, 0x0, 0x40, true, 0x871c097e6ebef6db)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_XSTATE_SAVE.Thread", thread, 0x40, 0x40, true, 0x94864e3b261bb810)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_XSTATE_SAVE.Level", level, 0x80, 0x8, true, 0x6567fe5c399e3325)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::xstate_context_t), "_XSTATE_SAVE.XStateContext", x_state_context, 0xc0, 0x0, true, 0x8dd3b858cac2ba4b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif