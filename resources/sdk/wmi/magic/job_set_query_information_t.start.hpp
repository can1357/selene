#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WMI_JOB_SET_QUERY_INFORMATION.ContainerId", container_id, 0x0, 0x80, true, 0x6fc6363b84e36899)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SET_QUERY_INFORMATION.JobId", job_id, 0x80, 0x20, true, 0x4abf232bcf96b3da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WMI_JOB_SET_QUERY_INFORMATION.JobObjectInformationClass", job_object_information_class, 0xa0, 0x20, true, 0x1ef973bd5c42dc97)
#else
#define _m00
#define _m01
#define _m02
#endif