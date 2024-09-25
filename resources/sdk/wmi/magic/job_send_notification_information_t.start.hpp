#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_JOB_SEND_NOTIFICATION_INFORMATION.ContainerId", container_id, 0x0, 0x80, true, 0xa0685571e69afef4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SEND_NOTIFICATION_INFORMATION.JobId", job_id, 0x80, 0x20, true, 0x6a5d8ab19f7d7273)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SEND_NOTIFICATION_INFORMATION.NotificationId", notification_id, 0xa0, 0x20, true, 0x23936edc8930c3b6)
#else
#define _m00
#define _m01
#define _m02
#endif