#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_WORKLOAD_CLASS_UPDATE.ThreadId", thread_id, 0x0, 0x0, false, 0xc6406ef6d09ae8d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PERFINFO_WORKLOAD_CLASS_UPDATE.Flags", flags, 0x0, 0x0, false, 0x6c08c762aa37c11d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERFINFO_WORKLOAD_CLASS_UPDATE.Class", _class, 0x0, 0x0, false, 0x8945d502c08d7128)
#else
#define _m00
#define _m01
#define _m02
#endif