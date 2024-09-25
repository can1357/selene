#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_OPERATION_END.Irp", irp, 0x0, 0x40, true, 0x327032d5f7906bd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_FILE_OPERATION_END.ExtraInformation", extra_information, 0x40, 0x40, true, 0xfa5543eb383edf39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_PERFINFO_FILE_OPERATION_END.Status", status, 0x80, 0x20, true, 0x8667d36fa0541ce6)
#else
#define _m00
#define _m01
#define _m02
#endif