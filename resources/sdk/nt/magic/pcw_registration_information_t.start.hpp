#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_REGISTRATION_INFORMATION.Version", version, 0x0, 0x20, true, 0x11e0321937c156ae)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const nt::unicode_view*), "_PCW_REGISTRATION_INFORMATION.Name", name, 0x40, 0x40, true, 0x7fea3eb4332c357b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCW_REGISTRATION_INFORMATION.CounterCount", counter_count, 0x80, 0x20, true, 0x19f32bf414b2c517)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::pcw_counter_descriptor_t*), "_PCW_REGISTRATION_INFORMATION.Counters", counters, 0xc0, 0x40, true, 0x96e95940b80f519f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppcw_callback_t ), "_PCW_REGISTRATION_INFORMATION.Callback", callback, 0x100, 0x40, true, 0x1ff7ae3be7842601)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCW_REGISTRATION_INFORMATION.CallbackContext", callback_context, 0x140, 0x40, true, 0x5722bd5ee901706b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::pcw_registration_flags_t), "_PCW_REGISTRATION_INFORMATION.Flags", flags, 0x180, 0x20, true, 0x474ae2759a53cba5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif