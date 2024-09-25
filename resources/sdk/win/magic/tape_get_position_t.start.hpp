#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_POSITION.Type", type, 0x0, 0x20, true, 0xc70e841d992f61c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_TAPE_GET_POSITION.Partition", partition, 0x20, 0x20, true, 0xf3e486712b5696c5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_TAPE_GET_POSITION.Offset", offset, 0x40, 0x40, true, 0x83778365c8331e63)
#else
#define _m00
#define _m01
#define _m02
#endif