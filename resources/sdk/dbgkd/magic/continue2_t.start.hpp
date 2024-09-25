#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DBGKD_CONTINUE2.ContinueStatus", continue_status, 0x0, 0x20, true, 0x23edb082f6cda98b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::amd64_dbgkd_control_set_t), "_DBGKD_CONTINUE2.ControlSet", control_set, 0x20, 0xe0, true, 0x2f1fc9b5b33f9c8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::any_control_set_t), "_DBGKD_CONTINUE2.AnyControlSet", any_control_set, 0x20, 0xe0, true, 0x2b9e7018b51c9af1)
#else
#define _m00
#define _m01
#define _m02
#endif