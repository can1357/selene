#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_OPC_TABLE_ENTRY.Speed", speed, 0x0, 0x10, true, 0xd7ded001be5b77f2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 6>), "_OPC_TABLE_ENTRY.OPCValue", opc_value, 0x10, 0x30, true, 0xc44e5a9e665b9667)
#else
#define _m00
#define _m01
#endif