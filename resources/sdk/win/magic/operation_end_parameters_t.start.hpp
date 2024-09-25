#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_END_PARAMETERS.Version", version, 0x0, 0x20, true, 0xde1f6085de7e7298)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_END_PARAMETERS.OperationId", operation_id, 0x20, 0x20, true, 0x31e467893913e03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPERATION_END_PARAMETERS.Flags", flags, 0x40, 0x20, true, 0x7f3065020e3c6432)
#else
#define _m00
#define _m01
#define _m02
#endif