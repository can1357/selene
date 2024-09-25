#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::interpreter_flags_t), "_NDR_PROC_INFO.InterpreterFlags", interpreter_flags, 0x0, 0x8, true, 0x74a2a10c8fa0598f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ndr_proc_desc_t*), "_NDR_PROC_INFO.pProcDesc", p_proc_desc, 0x40, 0x40, true, 0xc47a63075bc4a17)
#else
#define _m00
#define _m01
#endif