#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_SMART_DATA.Revision", revision, 0x0, 0x10, true, 0xd000a5a45dded68d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::smart_attribute_t, 30>), "_DEVICE_SMART_DATA.Attributes", attributes, 0x10, 0x40, true, 0xa4ee5e9d4fc9692a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::smart_threshold_t, 30>), "_DEVICE_SMART_DATA.Thresholds", thresholds, 0x10, 0x40, true, 0x640ee15d33c58726)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.OfflineDataCollectionStatus", offline_data_collection_status, 0xb50, 0x8, true, 0x68f8018d3bc1e187)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.SelfTestExecutionStatus", self_test_execution_status, 0xb58, 0x8, true, 0xaddb0a0b7978410c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_SMART_DATA.OfflineDataCollectionPeriod", offline_data_collection_period, 0xb60, 0x10, true, 0x5fbd97a8469efe1a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.VendorSpecific1", vendor_specific1, 0xb70, 0x8, true, 0xd04bc58d56400129)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.OfflineDataCollectionCapabilities", offline_data_collection_capabilities, 0xb78, 0x8, true, 0x6958eb6121210df9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DEVICE_SMART_DATA.SmartCapabilities", smart_capabilities, 0xb80, 0x10, true, 0xf6e064149781b42f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.ErrorLoggingCapabilities", error_logging_capabilities, 0xb90, 0x8, true, 0xd297aed113fde932)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.VendorSpecific2", vendor_specific2, 0xb98, 0x8, true, 0x1f7b5a99612210d7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.ShortSelfTestPollingPeriod", short_self_test_polling_period, 0xba0, 0x8, true, 0xf5484696cd90052a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.ExtendedSelfTestPollingPeriod", extended_self_test_polling_period, 0xba8, 0x8, true, 0xb7ece22bafef5973)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 125>), "_DEVICE_SMART_DATA.VendorSpecific3", vendor_specific3, 0xc10, 0xe8, true, 0x1a0b8909e9cbb209)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_DEVICE_SMART_DATA.Checksum", checksum, 0xff8, 0x8, true, 0x4065e061f5a93caf)
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
#endif