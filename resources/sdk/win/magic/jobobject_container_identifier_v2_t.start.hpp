#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_JOBOBJECT_CONTAINER_IDENTIFIER_V2.ContainerId", container_id, 0x0, 0x80, true, 0x274542eea27557d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_JOBOBJECT_CONTAINER_IDENTIFIER_V2.ContainerTelemetryId", container_telemetry_id, 0x80, 0x80, true, 0x8bf8ef04c76bd580)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_CONTAINER_IDENTIFIER_V2.JobId", job_id, 0x100, 0x20, true, 0x5ec7c412a6c1e05)
#else
#define _m00
#define _m01
#define _m02
#endif