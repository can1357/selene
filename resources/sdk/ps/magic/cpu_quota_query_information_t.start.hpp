#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CPU_QUOTA_QUERY_INFORMATION.SessionCount", session_count, 0x0, 0x20, true, 0xc3c9e68d973c3d05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ps::cpu_quota_query_entry_t, 1>), "_PS_CPU_QUOTA_QUERY_INFORMATION.SessionInformation", session_information, 0x20, 0x40, true, 0x80a5a4030af7cffd)
#else
#define _m00
#define _m01
#endif