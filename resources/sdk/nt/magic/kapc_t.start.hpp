#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC.Type", type, 0x0, 0x8, true, 0x5db7649105b56349)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC.Size", size, 0x10, 0x8, true, 0x8e617b641af8d4d6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KAPC.Thread", thread, 0x40, 0x40, true, 0xa3e17b1aadc76f04)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KAPC.ApcListEntry", apc_list_entry, 0x80, 0x80, true, 0x9e1cbea44ae704ee)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KAPC.NormalContext", normal_context, 0x1c0, 0x40, true, 0x1df062e67acb941b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KAPC.SystemArgument1", system_argument1, 0x200, 0x40, true, 0xf23ef9b95b9a63ed)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KAPC.SystemArgument2", system_argument2, 0x240, 0x40, true, 0xde2443dc36240ed4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_KAPC.ApcStateIndex", apc_state_index, 0x280, 0x8, true, 0x1168d83df6adc5c4)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_KAPC.ApcMode", apc_mode, 0x288, 0x8, true, 0x9e084a8db11d8835)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC.Inserted", inserted, 0x290, 0x8, true, 0x199064e4c3982714)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::kapc_t*, sdk::function<void(void*, void*, void*)>**, void**, void**, void**)>*), "_KAPC.KernelRoutine", kernel_routine, 0x100, 0x40, true, 0x45a933ed94207fc2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::kapc_t*)>*), "_KAPC.RundownRoutine", rundown_routine, 0x140, 0x40, true, 0x4fed56e00eb5bcd2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*)>*), "_KAPC.NormalRoutine", normal_routine, 0x180, 0x40, true, 0x8386ce92f8d42ced)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KAPC.AllFlags", all_flags, 0x8, 0x8, true, 0x2d5d6ae16c4116de)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KAPC.CallbackDataContext", callback_data_context, 0x8, 0x1, true, 0x97775ff765ec88a6, 1, uint8_t)
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
#define _m11
#define _m12
#define _m13
#define _m14
#endif