#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum verf::dispatch_table_type_t), "_VF_DISPATCH_TABLE_HEADER.Type", type, 0x0, 0x0, false, 0xdae340587030a4e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_DISPATCH_TABLE_HEADER.Size", size, 0x0, 0x0, false, 0xd453f27ac235b435)
#else
#define _m00
#define _m01
#endif