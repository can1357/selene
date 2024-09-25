#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_LDW_WORK_CONTEXT.WorkItem", work_item, 0x0, 0x0, true, 0x7ca8c668d3aa3e2a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_MI_LDW_WORK_CONTEXT.FileObject", file_object, 0x100, 0x40, true, 0x2e13d5c34a7d0d7e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_LDW_WORK_CONTEXT.ErrorStatus", error_status, 0x140, 0x20, true, 0xcc96c12c46c3f1c8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_LDW_WORK_CONTEXT.Active", active, 0x160, 0x20, true, 0xf33bda7cdd40c880)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_LDW_WORK_CONTEXT.FreeWhenDone", free_when_done, 0x180, 0x8, true, 0xc6a2669e7ae014ee)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif