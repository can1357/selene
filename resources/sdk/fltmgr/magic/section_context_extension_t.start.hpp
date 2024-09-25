#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_SECTION_CONTEXT_EXTENSION.Instance", instance, 0x0, 0x40, true, 0xc480040ead09fdbe)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_SECTION_CONTEXT_EXTENSION.FileObject", file_object, 0x40, 0x40, true, 0xe848dea8be22cdfd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SECTION_CONTEXT_EXTENSION.Flags", flags, 0x80, 0x20, true, 0xaeb1b6c14649300c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_SECTION_CONTEXT_EXTENSION.Event", event, 0xc0, 0xc0, true, 0x4736437849f2d555)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::set_purge_failure_mode_input_t), "_SECTION_CONTEXT_EXTENSION.FsctlBuffer", fsctl_buffer, 0x180, 0x20, true, 0x494e4c4b6f423a1b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_SECTION_CONTEXT_EXTENSION.WorkItem", work_item, 0x1c0, 0x0, true, 0x6ef828522bbbcb2b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif