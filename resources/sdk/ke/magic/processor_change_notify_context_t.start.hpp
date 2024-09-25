#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT.State", state, 0x0, 0x20, true, 0xd2777c8916e1c31f, 32, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT.NtNumber", nt_number, 0x20, 0x20, true, 0xfdcdaeb928a80ba3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT.Status", status, 0x40, 0x20, true, 0xf1ea38d27cd667db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::processor_number_t), "_KE_PROCESSOR_CHANGE_NOTIFY_CONTEXT.ProcNumber", proc_number, 0x60, 0x20, true, 0x493dc5be7aab7c1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif