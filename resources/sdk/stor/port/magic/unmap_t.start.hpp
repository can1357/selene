#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNMAP.OperationCode", operation_code, 0x0, 0x8, true, 0xfd6d0efe8b0a37c1)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_UNMAP.Anchor", anchor, 0x8, 0x1, true, 0x64906009adbb6cd8, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_UNMAP.GroupNumber", group_number, 0x30, 0x5, true, 0xe6fa85133fcff94, 5, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_UNMAP.AllocationLength", allocation_length, 0x38, 0x10, true, 0xdb359aefd7b43393)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_UNMAP.Control", control, 0x48, 0x8, true, 0xc38fb0ea459a7ef7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif