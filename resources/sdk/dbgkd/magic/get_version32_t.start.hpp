#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.MajorVersion", major_version, 0x0, 0x10, true, 0x654d2b90487c2a44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.MinorVersion", minor_version, 0x10, 0x10, true, 0x9b45727aee2e0f18)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.ProtocolVersion", protocol_version, 0x20, 0x10, true, 0x33f5feefc78b53d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.Flags", flags, 0x30, 0x10, true, 0x1597fbfcd1ea459c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.KernBase", kern_base, 0x40, 0x20, true, 0x624e870a6b03b9ad)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.PsLoadedModuleList", ps_loaded_module_list, 0x60, 0x20, true, 0xd7898337f1d44f61)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.MachineType", machine_type, 0x80, 0x10, true, 0xb5fdda73485d3d5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.ThCallbackStack", th_callback_stack, 0x90, 0x10, true, 0x56837dab6e02e300)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.NextCallback", next_callback, 0xa0, 0x10, true, 0xd4a3c3600f51ba41)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_GET_VERSION32.FramePointer", frame_pointer, 0xb0, 0x10, true, 0xec3fac33f67b0154)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.KiCallUserMode", ki_call_user_mode, 0xc0, 0x20, true, 0x79f8eb2fccb13ccc)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.KeUserCallbackDispatcher", ke_user_callback_dispatcher, 0xe0, 0x20, true, 0x54f77f7cf221e7bd)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.BreakpointWithStatus", breakpoint_with_status, 0x100, 0x20, true, 0x671983414a511e23)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_GET_VERSION32.DebuggerDataList", debugger_data_list, 0x120, 0x20, true, 0x60ab79369c795758)
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
#endif