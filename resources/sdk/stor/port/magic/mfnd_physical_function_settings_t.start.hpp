#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.Version", version, 0x0, 0x0, false, 0x6b8cb193eb8c2677)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.SizeInBytes", size_in_bytes, 0x0, 0x0, false, 0x9f62de0b156292e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.Flags", flags, 0x0, 0x0, false, 0x7c1cdffcb159ea37)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.IoQueuePairCount", io_queue_pair_count, 0x0, 0x0, false, 0xe2fd89c9ff29d145)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.InterruptCount", interrupt_count, 0x0, 0x0, false, 0xe3fa4ca5fc6d688a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.NamespaceCount", namespace_count, 0x0, 0x0, false, 0x95f049a318d73506)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.NS1StorageProvisionUnitCount", ns1_storage_provision_unit_count, 0x0, 0x0, false, 0xf587a3d5726faf7a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.NS2StorageProvisionUnitCount", ns2_storage_provision_unit_count, 0x0, 0x0, false, 0x28418dd414bbbee2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.NS3StorageProvisionUnitCount", ns3_storage_provision_unit_count, 0x0, 0x0, false, 0xf1fe5ecfab51af3a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.NS4StorageProvisionUnitCount", ns4_storage_provision_unit_count, 0x0, 0x0, false, 0x48669d9523d791e6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::mfnd_qos_t), "_MFND_PHYSICAL_FUNCTION_SETTINGS.QoS", qo_s, 0x0, 0x0, false, 0x802b41c9d8e79b27)
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