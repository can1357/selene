#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_TELEMETRY_EVENT.DriverVersion", driver_version, 0x0, 0x20, true, 0x1032229fa1afb418)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_TELEMETRY_EVENT.EventId", event_id, 0x20, 0x20, true, 0xe2b3990373bf18f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.EventName", event_name, 0x40, 0x0, true, 0xdbae711d312deca4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_TELEMETRY_EVENT.EventVersion", event_version, 0x140, 0x20, true, 0x3b0b76ee8b813b9a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_TELEMETRY_EVENT.Flags", flags, 0x160, 0x20, true, 0x19f1acad045bb133)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORPORT_TELEMETRY_EVENT.EventBufferLength", event_buffer_length, 0x180, 0x20, true, 0x30f8cf7d5a01f661)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_STORPORT_TELEMETRY_EVENT.EventBuffer", event_buffer, 0x1c0, 0x40, true, 0x472b25fa24e81e58)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName0", parameter_name0, 0x200, 0x0, true, 0x472d9c832a5b8b97)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue0", parameter_value0, 0x300, 0x40, true, 0xb96893f2bc0cee8a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName1", parameter_name1, 0x340, 0x0, true, 0xd3abd1116e659f91)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue1", parameter_value1, 0x440, 0x40, true, 0x39da7d1c69370015)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName2", parameter_name2, 0x480, 0x0, true, 0xec79c5e29688c07b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue2", parameter_value2, 0x580, 0x40, true, 0x85fe88690cb932bc)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName3", parameter_name3, 0x5c0, 0x0, true, 0x25a6ba93a806de51)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue3", parameter_value3, 0x6c0, 0x40, true, 0xcb2f1f3803c853c7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName4", parameter_name4, 0x700, 0x0, true, 0x5dffd7f662618857)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue4", parameter_value4, 0x800, 0x40, true, 0x4e114c8bd0c84305)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName5", parameter_name5, 0x840, 0x0, true, 0x14d71f27ccd0709a)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue5", parameter_value5, 0x940, 0x40, true, 0x65de2a3b3334c7d8)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName6", parameter_name6, 0x980, 0x0, true, 0xbb92e00f82b48d84)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue6", parameter_value6, 0xa80, 0x40, true, 0xe7b722058f4672dd)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_STORPORT_TELEMETRY_EVENT.ParameterName7", parameter_name7, 0xac0, 0x0, true, 0x35e691d88c20785b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORPORT_TELEMETRY_EVENT.ParameterValue7", parameter_value7, 0xbc0, 0x40, true, 0xd63d52c5d72f65de)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#endif