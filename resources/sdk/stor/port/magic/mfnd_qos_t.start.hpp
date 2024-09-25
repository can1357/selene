#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_QOS.Version", version, 0x0, 0x0, false, 0xcdb9065813b1e60c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MFND_QOS.SizeInBytes", size_in_bytes, 0x0, 0x0, false, 0x3f14f22137e9740f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::mfnd_qos_policy_t), "_MFND_QOS.QoSPolicy", qo_s_policy, 0x0, 0x0, false, 0x34ae55c4b9855925)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MFND_QOS.IsolationLevel", isolation_level, 0x0, 0x0, false, 0x11acf17b792cb64f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.ReserveReadBandwidthInMBps", reserve_read_bandwidth_in_m_bps, 0x0, 0x0, false, 0x854eb3a2d26b1ba9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.ReserveWriteBandwidthInMBps", reserve_write_bandwidth_in_m_bps, 0x0, 0x0, false, 0xa3b7c6538dcb47a3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.LimitBandwidthInMBps", limit_bandwidth_in_m_bps, 0x0, 0x0, false, 0xf61c3320123e02fd)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.LimitWriteBandwidthInMBps", limit_write_bandwidth_in_m_bps, 0x0, 0x0, false, 0x2a3cb8881250349d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.ReserveReadIops", reserve_read_iops, 0x0, 0x0, false, 0xd6f48b16c99eb036)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.ReserveWriteIops", reserve_write_iops, 0x0, 0x0, false, 0xfe2c141f31c154b1)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.LimitIops", limit_iops, 0x0, 0x0, false, 0xc20d64c52e13d265)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MFND_QOS.LimitWriteIops", limit_write_iops, 0x0, 0x0, false, 0x8dbb6075713026a5)
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
#endif