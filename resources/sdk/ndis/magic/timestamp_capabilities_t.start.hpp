#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_TIMESTAMP_CAPABILITIES.Header", header, 0x0, 0x20, true, 0xfce6beb51f86efa4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_TIMESTAMP_CAPABILITIES.HardwareClockFrequencyHz", hardware_clock_frequency_hz, 0x40, 0x40, true, 0x1ac5551c5dd9f358)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TIMESTAMP_CAPABILITIES.CrossTimestamp", cross_timestamp, 0x80, 0x8, true, 0x288d53c9136c9ead)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timestamp_capability_flags_t), "_NDIS_TIMESTAMP_CAPABILITIES.TimestampFlags", timestamp_flags, 0x140, 0x70, true, 0x796d696063efd5a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif