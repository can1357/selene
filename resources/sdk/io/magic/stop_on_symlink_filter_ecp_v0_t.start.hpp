#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STOP_ON_SYMLINK_FILTER_ECP_v0.Out.ReparseCount", reparse_count, 0x0, 0x20, true, 0xfae5111e7711ce0f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_STOP_ON_SYMLINK_FILTER_ECP_v0.Out.RemainingPathLength", remaining_path_length, 0x20, 0x20, true, 0x8a3ba29b562e2cdb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_out_t), "_IO_STOP_ON_SYMLINK_FILTER_ECP_v0.Out", out, 0x0, 0x40, true, 0x5575a2ef138b74fd)
#else
#define _m00
#define _m01
#define _m02
#endif