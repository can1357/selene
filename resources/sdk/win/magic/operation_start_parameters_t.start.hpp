#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_START_PARAMETERS.Version", version, 0x0, 0x20, true, 0x781ab213bded466c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_START_PARAMETERS.OperationId", operation_id, 0x20, 0x20, true, 0xbcf1e806da393dbe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_START_PARAMETERS.Flags", flags, 0x40, 0x20, true, 0x61a32388f162c8ee)
#else
#define _m00
#define _m01
#define _m02
#endif