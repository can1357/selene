#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.LoggerId", logger_id, 0x0, 0x20, true, 0xedcfb43a4abe26d8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 65>), "_ETW_WMITRACE_WORK.LoggerName", logger_name, 0x40, 0x8, true, 0xa707c291abc940db)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 129>), "_ETW_WMITRACE_WORK.FileName", file_name, 0x248, 0x8, true, 0x7e1b593e6090cc3e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.MaximumFileSize", maximum_file_size, 0x660, 0x20, true, 0xe9dd8e2b5b3a3147)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.MinBuffers", min_buffers, 0x680, 0x20, true, 0x68620972667d3a4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.MaxBuffers", max_buffers, 0x6a0, 0x20, true, 0x34848f0c88e47d63)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.BufferSize", buffer_size, 0x6c0, 0x20, true, 0xea148d915e120fdd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.Mode", mode, 0x6e0, 0x20, true, 0xa2ce008aaf9ce193)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.FlushTimer", flush_timer, 0x700, 0x20, true, 0x50491840550fdebe)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_WMITRACE_WORK.MatchAny", match_any, 0x40, 0x40, true, 0x300f858880d69f03)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_WMITRACE_WORK.MatchAll", match_all, 0x80, 0x40, true, 0x2c2d5c9c2a96f3cd)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.EnableProperty", enable_property, 0xc0, 0x20, true, 0x859bf816fa5218ca)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ETW_WMITRACE_WORK.Guid", guid, 0xe0, 0x80, true, 0xcce24a4f5ff9ad3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_WMITRACE_WORK.Level", level, 0x160, 0x8, true, 0x368546a121bd138f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_WMITRACE_WORK.Status", status, 0x740, 0x20, true, 0xca6b1c52b375dc3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.SiloSessionId", silo_session_id, 0x20, 0x20, true, 0xd1235eba4ec11be4)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_WMITRACE_WORK.SpareUlong", spare_ulong, 0x0, 0x0, false, 0xa0d09e9009e04ef4)
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
#define _m14
#define _m15
#define _m16
#endif