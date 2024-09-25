#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_CALLBACK_DATA.Flags", flags, 0x0, 0x20, true, 0x87563f13653800a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t const*), "_FLT_CALLBACK_DATA.Thread", thread, 0x40, 0x40, true, 0x5bc42bda748e5f92)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_io_parameter_block_t const*), "_FLT_CALLBACK_DATA.Iopb", iopb, 0x80, 0x40, true, 0x4b24b80970556d20)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t), "_FLT_CALLBACK_DATA.IoStatus", io_status, 0xc0, 0x80, true, 0x3aba2d1243e1b4c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_tag_data_buffer_t*), "_FLT_CALLBACK_DATA.TagData", tag_data, 0x140, 0x40, true, 0x13c174913f406c9a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLT_CALLBACK_DATA.QueueLinks", queue_links, 0x180, 0x80, true, 0x5fef44b1c5fe3da3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_FLT_CALLBACK_DATA.QueueContext", queue_context, 0x200, 0x80, true, 0x5adb93de7ce7cf74)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 4>), "_FLT_CALLBACK_DATA.FilterContext", filter_context, 0x180, 0x0, true, 0x8a62375a95540ff1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_FLT_CALLBACK_DATA.RequestorMode", requestor_mode, 0x280, 0x8, true, 0x8c3587af06ab452c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif