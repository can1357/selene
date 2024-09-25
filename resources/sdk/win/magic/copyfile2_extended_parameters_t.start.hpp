#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS.dwSize", dw_size, 0x0, 0x20, true, 0xd063cc7b7e11ce80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS.dwCopyFlags", dw_copy_flags, 0x20, 0x20, true, 0x878c1e797815b362)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "COPYFILE2_EXTENDED_PARAMETERS.pfCancel", pf_cancel, 0x40, 0x40, true, 0xda1034d3685be1ab)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcopyfile2_progress_routine_t ), "COPYFILE2_EXTENDED_PARAMETERS.pProgressRoutine", p_progress_routine, 0x80, 0x40, true, 0xc96a4255063ffc9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_EXTENDED_PARAMETERS.pvCallbackContext", pv_callback_context, 0xc0, 0x40, true, 0xd5d8c0a0c103101a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif