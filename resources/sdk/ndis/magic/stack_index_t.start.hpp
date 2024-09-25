#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_INDEX.XferDataIndex", xfer_data_index, 0x0, 0x20, true, 0x2bf105def7744c8f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STACK_INDEX.Index", index, 0x20, 0x20, true, 0x6fd7e2cae542d7c3)
#else
#define _m00
#define _m01
#endif