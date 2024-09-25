#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOP_FILE_OBJECT_EXTENSION.FoExtFlags", fo_ext_flags, 0x0, 0x20, true, 0x4f4038d3d64f4ba8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 8>), "_IOP_FILE_OBJECT_EXTENSION.FoExtPerTypeExtension", fo_ext_per_type_extension, 0x40, 0x40, true, 0xbf29eeebd6b79e00)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum iop::priority_hint_t), "_IOP_FILE_OBJECT_EXTENSION.FoIoPriorityHint", fo_io_priority_hint, 0x280, 0x20, true, 0x1de59d7a0a599a90)
#else
#define _m00
#define _m01
#define _m02
#endif