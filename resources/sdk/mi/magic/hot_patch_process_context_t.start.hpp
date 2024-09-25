#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MI_HOT_PATCH_PROCESS_CONTEXT.Process", process, 0x0, 0x0, false, 0x4f70987640369a79)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_HOT_PATCH_PROCESS_CONTEXT.ProcessHandle", process_handle, 0x0, 0x0, false, 0xd0452e096efd9f37)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_HOT_PATCH_PROCESS_CONTEXT.TbFlushStamp", tb_flush_stamp, 0x0, 0x0, false, 0xc80617510ecdb17f)
#else
#define _m00
#define _m01
#define _m02
#endif