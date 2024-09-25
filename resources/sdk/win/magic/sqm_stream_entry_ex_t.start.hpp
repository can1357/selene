#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SQM_STREAM_ENTRY_EX.cbStruct", cb_struct, 0x0, 0x20, true, 0xf21720460357b9d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SQM_STREAM_ENTRY_EX.dwType", dw_type, 0x20, 0x20, true, 0xc35c2f360ff916a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "_SQM_STREAM_ENTRY_EX.val.pwszVal", pwsz_val, 0x0, 0x40, true, 0xa596eb6dee3274ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SQM_STREAM_ENTRY_EX.val.dwVal", dw_val, 0x0, 0x20, true, 0x906d141c36d6bc26)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SQM_STREAM_ENTRY_EX.val.qwVal", qw_val, 0x0, 0x40, true, 0x5be1e29df38df5eb)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_val_t), "_SQM_STREAM_ENTRY_EX.val", val, 0x40, 0x40, true, 0xba2701b70387949c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif