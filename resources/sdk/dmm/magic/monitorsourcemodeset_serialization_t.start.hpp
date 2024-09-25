#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DMM_MONITORSOURCEMODESET_SERIALIZATION.NumModes", num_modes, 0x0, 0x20, true, 0x4f78413aeb2901b0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct dmm::monitor_source_mode_serialization_t, 1>), "_DMM_MONITORSOURCEMODESET_SERIALIZATION.ModeSerialization", mode_serialization, 0x40, 0x40, true, 0xa31e9790794af8fd)
#else
#define _m00
#define _m01
#endif