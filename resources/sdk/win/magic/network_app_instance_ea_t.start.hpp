#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_NETWORK_APP_INSTANCE_EA.AppInstanceID", app_instance_id, 0x0, 0x80, true, 0x7cc87c96969d3057)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NETWORK_APP_INSTANCE_EA.CsvFlags", csv_flags, 0x80, 0x20, true, 0x438db3f448bd870d)
#else
#define _m00
#define _m01
#endif