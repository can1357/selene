#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WSK_REGISTRATION.ReservedRegistrationState", reserved_registration_state, 0x0, 0x40, true, 0x8a5c2334f2d6e71f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WSK_REGISTRATION.ReservedRegistrationContext", reserved_registration_context, 0x40, 0x40, true, 0x9e285e5cccbc53bb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WSK_REGISTRATION.ReservedRegistrationLock", reserved_registration_lock, 0x80, 0x40, true, 0x1eb3a39fdeaf7271)
#else
#define _m00
#define _m01
#define _m02
#endif