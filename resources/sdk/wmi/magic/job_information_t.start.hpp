#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_JOB_INFORMATION.ContainerId", container_id, 0x0, 0x80, true, 0x8bf35d28a66be02c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_INFORMATION.JobId", job_id, 0x80, 0x20, true, 0x928ffb4ef2d20735)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_INFORMATION.Flags", flags, 0xa0, 0x20, true, 0x4cc9ad58451ea26d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_JOB_INFORMATION.Status", status, 0xc0, 0x20, true, 0x83e937ef0e7dc53b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif