#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_SPARING_BUFFER.SparingUnitBytes", sparing_unit_bytes, 0x0, 0x20, true, 0xe89fe99f3b3a4010)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_QUERY_SPARING_BUFFER.SoftwareSparing", software_sparing, 0x20, 0x8, true, 0xa9f195f576db3604)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_SPARING_BUFFER.TotalSpareBlocks", total_spare_blocks, 0x40, 0x20, true, 0x105e8ccbcc80d6a7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_QUERY_SPARING_BUFFER.FreeSpareBlocks", free_spare_blocks, 0x60, 0x20, true, 0x2200d12ef9372cf7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif