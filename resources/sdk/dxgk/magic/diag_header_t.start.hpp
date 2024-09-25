#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_type_t), "_DXGK_DIAG_HEADER.Type", type, 0x0, 0x20, true, 0xd386dc465f4932ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_HEADER.Size", size, 0x20, 0x20, true, 0x242398385dc31524)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DIAG_HEADER.LogTimestamp", log_timestamp, 0x40, 0x40, true, 0xab380ef855b7538e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_DXGK_DIAG_HEADER.ProcessName", process_name, 0x80, 0x80, true, 0xcb77fc98c78d35)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_DIAG_HEADER.ThreadId", thread_id, 0x100, 0x40, true, 0xdb1adf6c91ce1968)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_HEADER.Index", index, 0x140, 0x20, true, 0xce3840bed948f784)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_HEADER.WdLogIdx", wd_log_idx, 0x160, 0x20, true, 0xaaf0ed991e49e02)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DIAG_HEADER.u.ThreadId", thread_id, 0x0, 0x20, true, 0x54cbd7b1d5f13fd2)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint31_t), "_DXGK_DIAG_HEADER.u.SessionId", session_id, 0x20, 0x1f, true, 0x67cd3eea776250a3, 31, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DIAG_HEADER.u.AllSession", all_session, 0x3f, 0x1, true, 0xc60a25e5abe05c83, 1, uint32_t)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_u_t), "_DXGK_DIAG_HEADER.u", u, 0x100, 0x40, true, 0xb1808fa6491e2d66)
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
#endif