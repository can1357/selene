#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCW_COUNTER_DESCRIPTOR.Id", id, 0x0, 0x10, true, 0x22ee77e6ed7ec52a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCW_COUNTER_DESCRIPTOR.StructIndex", struct_index, 0x10, 0x10, true, 0x3ba5b3ffa2411d25)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCW_COUNTER_DESCRIPTOR.Offset", offset, 0x20, 0x10, true, 0xe558bc2d200e7830)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCW_COUNTER_DESCRIPTOR.Size", size, 0x30, 0x10, true, 0x88558876901bcf6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif