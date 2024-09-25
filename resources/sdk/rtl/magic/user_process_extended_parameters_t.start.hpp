#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.Version", version, 0x0, 0x10, true, 0xb25e12603187b069)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.NodeNumber", node_number, 0x10, 0x10, true, 0x36577098ef6d12c2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.ProcessSecurityDescriptor", process_security_descriptor, 0x40, 0x40, true, 0xf7a9d3de06c45322)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.ThreadSecurityDescriptor", thread_security_descriptor, 0x80, 0x40, true, 0x1015139b0e0abca8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.ParentProcess", parent_process, 0xc0, 0x40, true, 0xb781ab7fa4a8d396)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.DebugPort", debug_port, 0x100, 0x40, true, 0x1ce18f3e37fecd22)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.TokenHandle", token_handle, 0x140, 0x40, true, 0x22ea6d718552d4be)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.JobHandle", job_handle, 0x180, 0x40, true, 0xfd3ca7acdb26e162)
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