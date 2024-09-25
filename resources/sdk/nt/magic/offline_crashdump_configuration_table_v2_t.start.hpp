#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.Version", version, 0x0, 0x20, true, 0xe939ff34b9a318ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.AbnormalResetOccurred", abnormal_reset_occurred, 0x20, 0x20, true, 0x5265245c754fe3df)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.OfflineMemoryDumpCapable", offline_memory_dump_capable, 0x40, 0x20, true, 0xf7491fb2f14e3709)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.ResetDataAddress", reset_data_address, 0x80, 0x40, true, 0xc3233acfb2c58a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.ResetDataSize", reset_data_size, 0xc0, 0x20, true, 0x5ad2b46d03b2e58b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif