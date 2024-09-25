#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PCW_COUNTER_INFORMATION.CounterMask", counter_mask, 0x0, 0x40, true, 0x3779afa39efc2741)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_PCW_COUNTER_INFORMATION.InstanceMask", instance_mask, 0x40, 0x40, true, 0xe33b4d705d91a38e)
#else
#define _m00
#define _m01
#endif