#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_EXTENDED_ERROR_INFO.Version", version, 0x0, 0x20, true, 0xe557177fded8e88e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagRPC_EXTENDED_ERROR_INFO.ComputerName", computer_name, 0x40, 0x40, true, 0xc99efd36f7d966fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_EXTENDED_ERROR_INFO.ProcessID", process_id, 0x80, 0x20, true, 0xb826b5a88ea35606)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::systemtime_t), "tagRPC_EXTENDED_ERROR_INFO.SystemTime", system_time, 0xa0, 0x80, true, 0x897c10b82694554c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "tagRPC_EXTENDED_ERROR_INFO.FileTime", file_time, 0xa0, 0x40, true, 0xac45ddd7cf1c1d2b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_EXTENDED_ERROR_INFO.GeneratingComponent", generating_component, 0x120, 0x20, true, 0x18426dd54cebe72b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagRPC_EXTENDED_ERROR_INFO.Status", status, 0x140, 0x20, true, 0x43fe9d2dfba4ea14)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_EXTENDED_ERROR_INFO.DetectionLocation", detection_location, 0x160, 0x10, true, 0x12d5fab6f05439fd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagRPC_EXTENDED_ERROR_INFO.Flags", flags, 0x170, 0x10, true, 0x60078b35dc76a21)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagRPC_EXTENDED_ERROR_INFO.NumberOfParameters", number_of_parameters, 0x180, 0x20, true, 0xc5b802b27ec51abb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rpc_ee_info_param_t, 4>), "tagRPC_EXTENDED_ERROR_INFO.Parameters", parameters, 0x1c0, 0x0, true, 0xa11322e0004ff747)
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