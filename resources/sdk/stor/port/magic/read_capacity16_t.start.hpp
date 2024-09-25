#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CAPACITY16.OperationCode", operation_code, 0x0, 0x8, true, 0x14f72227e25df896)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_READ_CAPACITY16.ServiceAction", service_action, 0x8, 0x5, true, 0x56e5cc325e67d366, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_READ_CAPACITY16.LogicalBlock", logical_block, 0x10, 0x40, true, 0xded99c3a8c7530cd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_READ_CAPACITY16.AllocationLength", allocation_length, 0x50, 0x20, true, 0x9f94b6bd3e39a79d)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_READ_CAPACITY16.PMI", pmi, 0x70, 0x1, true, 0x452f7c33cd9c406d, 1, uint8_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_READ_CAPACITY16.Control", control, 0x78, 0x8, true, 0xf4d3514d07328a6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif