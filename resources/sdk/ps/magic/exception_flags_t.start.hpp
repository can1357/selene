#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_EXCEPTION_FLAGS.Flags", flags, 0x0, 0x20, true, 0xe7cb083c6bfbab63)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_EXCEPTION_FLAGS.ProcessUsingVEH", process_using_veh, 0x0, 0x1, true, 0xa3feda98cd435a3c, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_EXCEPTION_FLAGS.ProcessUsingVCH", process_using_vch, 0x1, 0x1, true, 0xe673dbc6e163128a, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#endif