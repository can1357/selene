#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOADER_BUGCHECK_PARAMETERS.BugcheckCode", bugcheck_code, 0x0, 0x20, true, 0x53356be1a96bc866)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_BUGCHECK_PARAMETERS.BugcheckParameter1", bugcheck_parameter1, 0x40, 0x40, true, 0x75235ffbb70c110e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_BUGCHECK_PARAMETERS.BugcheckParameter2", bugcheck_parameter2, 0x80, 0x40, true, 0xf11f65b8da89fc6b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_BUGCHECK_PARAMETERS.BugcheckParameter3", bugcheck_parameter3, 0xc0, 0x40, true, 0x3602b38e899e4c94)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOADER_BUGCHECK_PARAMETERS.BugcheckParameter4", bugcheck_parameter4, 0x100, 0x40, true, 0x4c09df6c30fa514d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif