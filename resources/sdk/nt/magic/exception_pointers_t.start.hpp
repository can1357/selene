#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t*), "_EXCEPTION_POINTERS.ExceptionRecord", exception_record, 0x0, 0x40, true, 0xd9378bd6080f4cbf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::context*), "_EXCEPTION_POINTERS.ContextRecord", context_record, 0x40, 0x40, true, 0xd549e7283b68da73)
#else
#define _m00
#define _m01
#endif