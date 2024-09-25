#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_ETW_FILTER_HEADER.FilterFlags", filter_flags, 0x0, 0x20, true, 0xcceb212ca3f21243)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_pid_t*), "_ETW_FILTER_HEADER.PidFilter", pid_filter, 0x40, 0x40, true, 0x3daec36d9770ab34)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_string_token_t*), "_ETW_FILTER_HEADER.ExeFilter", exe_filter, 0x80, 0x40, true, 0x816c35d53ec8f84c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_string_token_t*), "_ETW_FILTER_HEADER.PkgIdFilter", pkg_id_filter, 0xc0, 0x40, true, 0xe2c71d51b1ad9768)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_string_token_t*), "_ETW_FILTER_HEADER.PkgAppIdFilter", pkg_app_id_filter, 0x100, 0x40, true, 0xe00a1b985b397c90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::perfect_hash_function_t*), "_ETW_FILTER_HEADER.EventIdFilter", event_id_filter, 0x240, 0x40, true, 0x9eef4333fcd98b6f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::payload_filter_t*), "_ETW_FILTER_HEADER.PayloadFilter", payload_filter, 0x280, 0x40, true, 0xa4a3dd26db1aad26)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_filter_header_t*), "_ETW_FILTER_HEADER.ProviderSideFilter", provider_side_filter, 0x2c0, 0x40, true, 0x13bab2e0144b5bf2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_event_name_data_t*), "_ETW_FILTER_HEADER.EventNameFilter", event_name_filter, 0x300, 0x40, true, 0xb8719fd0f744c9d4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_string_token_t*), "_ETW_FILTER_HEADER.ContainerFilter", container_filter, 0x140, 0x40, true, 0x19cbf46d6bfc0dfb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::perfect_hash_function_t*), "_ETW_FILTER_HEADER.StackWalkIdFilter", stack_walk_id_filter, 0x180, 0x40, true, 0x7b3ec87079342814)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::filter_event_name_data_t*), "_ETW_FILTER_HEADER.StackWalkNameFilter", stack_walk_name_filter, 0x1c0, 0x40, true, 0x97863ab294037ef4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_filter_level_kw_t*), "_ETW_FILTER_HEADER.StackWalkLevelKwFilter", stack_walk_level_kw_filter, 0x200, 0x40, true, 0x753d2b05e6efc3d5)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct etw::perfect_hash_function_t*), "_ETW_FILTER_HEADER.StackWalkFilter", stack_walk_filter, 0x0, 0x0, false, 0x682f03eab34a9b8d)
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