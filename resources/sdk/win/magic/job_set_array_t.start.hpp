#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_JOB_SET_ARRAY.JobHandle", job_handle, 0x0, 0x40, true, 0x32da2736689ffc8f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOB_SET_ARRAY.MemberLevel", member_level, 0x40, 0x20, true, 0x3384c021a742f55a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOB_SET_ARRAY.Flags", flags, 0x60, 0x20, true, 0x4a2b26501a5a98a2)
#else
#define _m00
#define _m01
#define _m02
#endif