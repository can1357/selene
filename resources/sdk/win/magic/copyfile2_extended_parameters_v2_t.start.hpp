#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS_V2.dwSize", dw_size, 0x0, 0x0, false, 0xf49fe66435532711)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS_V2.dwCopyFlags", dw_copy_flags, 0x0, 0x0, false, 0x6fe4a32aa73635ab)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t*), "COPYFILE2_EXTENDED_PARAMETERS_V2.pfCancel", pf_cancel, 0x0, 0x0, false, 0x9d61c3d8c449e854)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcopyfile2_progress_routine_t ), "COPYFILE2_EXTENDED_PARAMETERS_V2.pProgressRoutine", p_progress_routine, 0x0, 0x0, false, 0x8f342a1f33d5fdbe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "COPYFILE2_EXTENDED_PARAMETERS_V2.pvCallbackContext", pv_callback_context, 0x0, 0x0, false, 0x498e7ea6944bb884)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS_V2.dwCopyFlagsV2", dw_copy_flags_v2, 0x0, 0x0, false, 0x796b20586e79f2ea)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS_V2.ioDesiredSize", io_desired_size, 0x0, 0x0, false, 0xceceeee93ab6e967)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "COPYFILE2_EXTENDED_PARAMETERS_V2.ioDesiredRate", io_desired_rate, 0x0, 0x0, false, 0xb6dbb58df5c7bebd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif