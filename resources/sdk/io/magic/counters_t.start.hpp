#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.ReadOperationCount", read_operation_count, 0x0, 0x40, true, 0x6e13ea193262799f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.WriteOperationCount", write_operation_count, 0x40, 0x40, true, 0x26ea277ad7996b46)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.OtherOperationCount", other_operation_count, 0x80, 0x40, true, 0xdcc22b155565826f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.ReadTransferCount", read_transfer_count, 0xc0, 0x40, true, 0x49c24402143c979b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.WriteTransferCount", write_transfer_count, 0x100, 0x40, true, 0x9407ec78ad89ac70)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_COUNTERS.OtherTransferCount", other_transfer_count, 0x140, 0x40, true, 0x9fa0e1b7100f3720)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif