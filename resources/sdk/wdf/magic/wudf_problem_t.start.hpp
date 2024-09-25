#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::wudf_problem_t), "WUDF_PROBLEM.ProblemCode", problem_code, 0x0, 0x20, true, 0xddc85a901413f028)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::component_type_t), "WUDF_PROBLEM.Detector", detector, 0x20, 0x20, true, 0x3664d4e2fe07c463)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::host_exit_code_t), "WUDF_PROBLEM.ExitCode", exit_code, 0x40, 0x20, true, 0x2e6ec33172db3d08)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::wudf_operation_type_t), "WUDF_PROBLEM.Operation", operation, 0x60, 0x20, true, 0x20436da7ad72594c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::wudfmessage_t), "WUDF_PROBLEM.Message", message, 0x80, 0x8, true, 0xd5178cfc46d5de81)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "WUDF_PROBLEM.IrpInfo", irp_info, 0x90, 0x10, true, 0x509ca7f73dcd8f1f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "WUDF_PROBLEM.Status", status, 0xa0, 0x20, true, 0xb6f044a01973fda)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_start_state_type_t), "WUDF_PROBLEM.DeviceStarted", device_started, 0xc0, 0x20, true, 0xcdd0f62d2291e447)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif