#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_TRIAGE_DATA_BLOCK.Address", address, 0x0, 0x40, true, 0x99437b67edf84c1e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DATA_BLOCK.Offset", offset, 0x40, 0x20, true, 0x979f34ed90bdb8c6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TRIAGE_DATA_BLOCK.Size", size, 0x60, 0x20, true, 0x24cd382bc3040d30)
#else
#define _m00
#define _m01
#define _m02
#endif