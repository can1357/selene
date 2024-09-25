#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KBUGCHECK_DUMP_IO.Offset", offset, 0x0, 0x40, true, 0x59a059ea799725b0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_DUMP_IO.Buffer", buffer, 0x40, 0x40, true, 0x61933f4ff1db48bb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_DUMP_IO.BufferLength", buffer_length, 0x80, 0x20, true, 0xfd57d310ed00e411)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::kbugcheck_dump_io_type_t), "_KBUGCHECK_DUMP_IO.Type", type, 0xa0, 0x20, true, 0x293788caf1e02adc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif