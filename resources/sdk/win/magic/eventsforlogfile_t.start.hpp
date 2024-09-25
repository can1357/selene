#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTSFORLOGFILE.ulSize", ul_size, 0x0, 0x20, true, 0xce826c559af4a4b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_EVENTSFORLOGFILE.szLogicalLogFile", sz_logical_log_file, 0x20, 0x0, true, 0x615d3f8d7c28b7f7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENTSFORLOGFILE.ulNumRecords", ul_num_records, 0x1020, 0x20, true, 0x7a68c04b5ef2c064)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::eventlogrecord_t>), "_EVENTSFORLOGFILE.pEventLogRecords", p_event_log_records, 0x1040, 0x0, true, 0x42c0157a85879823)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif