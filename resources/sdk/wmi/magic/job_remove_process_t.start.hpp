#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_JOB_REMOVE_PROCESS.ContainerId", container_id, 0x0, 0x80, true, 0x24dd25851abcae20)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_REMOVE_PROCESS.JobId", job_id, 0x80, 0x20, true, 0xac9b819ce36443f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_REMOVE_PROCESS.UniqueProcessId", unique_process_id, 0xa0, 0x20, true, 0xcc1ed2b2f79ab69f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_REMOVE_PROCESS.RemovalFlags", removal_flags, 0xc0, 0x20, true, 0x5d969fae929cfa74)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WMI_JOB_REMOVE_PROCESS.ExitStatus", exit_status, 0xe0, 0x20, true, 0x40d56a3fd23db533)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif