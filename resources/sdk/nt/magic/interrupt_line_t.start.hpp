#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_INTERRUPT_LINE.UnitId", unit_id, 0x0, 0x20, true, 0x6524ca5ffaa59bfa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_INTERRUPT_LINE.Line", line, 0x20, 0x20, true, 0x87cff0f16bebb8eb)
#else
#define _m00
#define _m01
#endif