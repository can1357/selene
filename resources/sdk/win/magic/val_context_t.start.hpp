#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "val_context.valuelen", valuelen, 0x0, 0x20, true, 0x2da9bb243a8ac46)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "val_context.value_context", value_context, 0x40, 0x40, true, 0xed9af0b56b248a2a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "val_context.val_buff_ptr", val_buff_ptr, 0x80, 0x40, true, 0x70ff53216e5fadd0)
#else
#define _m00
#define _m01
#define _m02
#endif