#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECEIVE_DIAGNOSTIC.OperationCode", operation_code, 0x0, 0x8, true, 0xb0abd82fff7e066c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RECEIVE_DIAGNOSTIC.PageCodeValid", page_code_valid, 0x8, 0x1, true, 0x8bfc09bbb05862e7, 1, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECEIVE_DIAGNOSTIC.PageCode", page_code, 0x10, 0x8, true, 0xbadcb495eaf486dd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_RECEIVE_DIAGNOSTIC.AllocationLength", allocation_length, 0x18, 0x10, true, 0x84bf47874d47bccb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECEIVE_DIAGNOSTIC.Control", control, 0x28, 0x8, true, 0x4d35f9e73285380e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif