#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PACKEDEVENTINFO.ulSize", ul_size, 0x0, 0x20, true, 0x842a00c7bc4a53d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PACKEDEVENTINFO.ulNumEventsForLogFile", ul_num_events_for_log_file, 0x20, 0x20, true, 0x35357bcaf0a1e2e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t>), "_PACKEDEVENTINFO.ulOffsets", ul_offsets, 0x40, 0x0, true, 0xb0d0f2c9da076922)
#else
#define _m00
#define _m01
#define _m02
#endif