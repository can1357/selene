#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_SECONDARY_DUMP_DATA.InBuffer", in_buffer, 0x0, 0x40, true, 0x1f1cede4709bc6d7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA.InBufferLength", in_buffer_length, 0x40, 0x20, true, 0xb586655add88c323)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA.MaximumAllowed", maximum_allowed, 0x60, 0x20, true, 0x9589cf381202f07b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_KBUGCHECK_SECONDARY_DUMP_DATA.Guid", guid, 0x80, 0x80, true, 0x6bb65d17234453d5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_KBUGCHECK_SECONDARY_DUMP_DATA.OutBuffer", out_buffer, 0x100, 0x40, true, 0xd62bbe8f733c2139)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KBUGCHECK_SECONDARY_DUMP_DATA.OutBufferLength", out_buffer_length, 0x140, 0x20, true, 0x7a8029f60c3165bb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif