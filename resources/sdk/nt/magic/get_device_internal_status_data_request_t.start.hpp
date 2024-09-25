#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST.Version", version, 0x0, 0x20, true, 0x4150433754de9055)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST.Size", size, 0x20, 0x20, true, 0xfc6ffe719c3468a3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(device_internal_status_data_request_type_t ), "_GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST.RequestDataType", request_data_type, 0x40, 0x20, true, 0x209cdcb383a54211)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_internal_status_data_set_t), "_GET_DEVICE_INTERNAL_STATUS_DATA_REQUEST.RequestDataSet", request_data_set, 0x60, 0x20, true, 0x4fe433b6cb52be68)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif