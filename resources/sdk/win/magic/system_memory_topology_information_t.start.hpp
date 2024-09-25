#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_MEMORY_TOPOLOGY_INFORMATION.NumberOfRuns", number_of_runs, 0x0, 0x40, true, 0x299cd2e8f9ee0855)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MEMORY_TOPOLOGY_INFORMATION.NumberOfNodes", number_of_nodes, 0x40, 0x20, true, 0x98f404e150034db8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_MEMORY_TOPOLOGY_INFORMATION.NumberOfChannels", number_of_channels, 0x60, 0x20, true, 0x4ca60c118fb19c78)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::physical_channel_run_t, 1>), "_SYSTEM_MEMORY_TOPOLOGY_INFORMATION.Run", run, 0x80, 0x0, true, 0x4e7ea554558105d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif