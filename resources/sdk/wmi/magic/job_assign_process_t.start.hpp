#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_JOB_ASSIGN_PROCESS.ContainerId", container_id, 0x0, 0x80, true, 0x7b1b077274c8892d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_ASSIGN_PROCESS.JobId", job_id, 0x80, 0x20, true, 0xe73b7ecb1f6d47dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_ASSIGN_PROCESS.UniqueProcessId", unique_process_id, 0xa0, 0x20, true, 0xe95b08ca26227715)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_JOB_ASSIGN_PROCESS.Status", status, 0xc0, 0x20, true, 0xf1178041eacd25eb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif