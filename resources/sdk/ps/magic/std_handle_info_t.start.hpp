#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_STD_HANDLE_INFO.Flags", flags, 0x0, 0x20, true, 0xc6b5ea55f0a7f812)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PS_STD_HANDLE_INFO.StdHandleState", std_handle_state, 0x0, 0x2, true, 0x66d19c421f63d68b, 2, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PS_STD_HANDLE_INFO.PseudoHandleMask", pseudo_handle_mask, 0x2, 0x3, true, 0x7cd74888b139b37b, 3, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_STD_HANDLE_INFO.StdHandleSubsystemType", std_handle_subsystem_type, 0x20, 0x20, true, 0x803dd702dc0de1da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif