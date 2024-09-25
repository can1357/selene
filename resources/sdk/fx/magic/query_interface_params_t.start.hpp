#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "FxQueryInterfaceParams.Object", object, 0x0, 0x40, true, 0xf496f2fcc883d739)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxQueryInterfaceParams.Type", type, 0x40, 0x10, true, 0x1ebba23782308631)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxQueryInterfaceParams.Offset", offset, 0x50, 0x10, true, 0x9b9305df823bf1c3)
#else
#define _m00
#define _m01
#define _m02
#endif