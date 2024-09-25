#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_CELL_REMAP_BLOCK.OldCell", old_cell, 0x0, 0x0, false, 0x1d26c0b71c6188d4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_CELL_REMAP_BLOCK.NewCell", new_cell, 0x0, 0x0, false, 0xdead1166cdad8429)
#else
#define _m00
#define _m01
#endif