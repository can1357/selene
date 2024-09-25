#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.Version", version, 0x0, 0x20, true, 0x94ae2879ee688d84)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.Size", size, 0x20, 0x20, true, 0xb542e1ac342c4e6e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.Flags", flags, 0x40, 0x20, true, 0xce17179074d19690)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.ConcurrentChannels", concurrent_channels, 0x60, 0x20, true, 0x1527eca797b97ffc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.FirstRedirectionMessageNumber", first_redirection_message_number, 0x80, 0x20, true, 0xb8f26c1405d3a367)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.LastRedirectionMessageNumber", last_redirection_message_number, 0xa0, 0x20, true, 0x9ef62937219b5622)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERF_CONFIGURATION_DATA.DeviceNode", device_node, 0xc0, 0x20, true, 0xe0bf49784af7da20)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t*), "_PERF_CONFIGURATION_DATA.MessageTargets", message_targets, 0x100, 0x40, true, 0x38e0f0054f8912d0)
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