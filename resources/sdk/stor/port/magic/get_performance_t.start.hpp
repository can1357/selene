#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_PERFORMANCE.OperationCode", operation_code, 0x0, 0x8, true, 0x1311b58a1129c902)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_GET_PERFORMANCE.Except", except, 0x8, 0x2, true, 0x402c0d45cefe0e28, 2, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_GET_PERFORMANCE.Write", write, 0xa, 0x1, true, 0x605fe90e0efdf325, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_GET_PERFORMANCE.Tolerance", tolerance, 0xb, 0x2, true, 0xc90681a2a3aeb851, 2, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_GET_PERFORMANCE.StartingLBA", starting_lba, 0x10, 0x20, true, 0x1e4a70ab921b93a5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_GET_PERFORMANCE.MaximumNumberOfDescriptors", maximum_number_of_descriptors, 0x40, 0x10, true, 0x59fc0fec5f525e98)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_PERFORMANCE.Type", type, 0x50, 0x8, true, 0xacb88258d8839248)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_PERFORMANCE.Control", control, 0x58, 0x8, true, 0xe1cb9a57097c7165)
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