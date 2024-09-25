#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_registration_record_t*), "_EXCEPTION_REGISTRATION_RECORD.Next", next, 0x0, 0x40, true, 0x1041101e7f201a67)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pexception_routine_t ), "_EXCEPTION_REGISTRATION_RECORD.Handler", handler, 0x40, 0x40, true, 0xa31adef8b3f860f9)
#else
#define _m00
#define _m01
#endif