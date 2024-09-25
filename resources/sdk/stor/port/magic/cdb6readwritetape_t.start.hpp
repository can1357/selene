#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITETAPE.OperationCode", operation_code, 0x0, 0x8, true, 0x761b86a355070ccf)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_CDB6READWRITETAPE.VendorSpecific", vendor_specific, 0x8, 0x5, true, 0x3aa16948bf777810, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITETAPE.TransferLenMSB", transfer_len_msb, 0x10, 0x8, true, 0xed5fc3388ed82c8a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITETAPE.TransferLen", transfer_len, 0x18, 0x8, true, 0xaff7ffa96bec89a9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6READWRITETAPE.TransferLenLSB", transfer_len_lsb, 0x20, 0x8, true, 0x168bfa2f110637ea)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6READWRITETAPE.Link", link, 0x28, 0x1, true, 0xb11fabef9acc6dbf, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6READWRITETAPE.Flag", flag, 0x29, 0x1, true, 0xe2509f617f6a96e3, 1, uint8_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_CDB6READWRITETAPE.VendorUnique", vendor_unique, 0x2e, 0x2, true, 0xf23aa9f6b3470fcd, 2, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif