#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY3.OperationCode", operation_code, 0x0, 0x8, true, 0xf30d5f9982f16d09)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6INQUIRY3.EnableVitalProductData", enable_vital_product_data, 0x8, 0x1, true, 0x68dcd6ea3018197b, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_CDB6INQUIRY3.CommandSupportData", command_support_data, 0x9, 0x1, true, 0x387024f526b79703, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY3.PageCode", page_code, 0x10, 0x8, true, 0xd21026433bde359c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY3.AllocationLength", allocation_length, 0x20, 0x8, true, 0x66b3602ad7a70535)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_CDB6INQUIRY3.Control", control, 0x28, 0x8, true, 0xca788ec0fdc26603)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif