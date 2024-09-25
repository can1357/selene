#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_MMDEREFERENCE_SEGMENT_HEADER.Semaphore", semaphore, 0x0, 0x0, true, 0xa74c79cb969ca07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMDEREFERENCE_SEGMENT_HEADER.ControlAreaDeleteListHead", control_area_delete_list_head, 0x100, 0x80, true, 0x77e987a0bdc8e6a3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMDEREFERENCE_SEGMENT_HEADER.UnusedSegmentDeleteListHead", unused_segment_delete_list_head, 0x180, 0x80, true, 0xdc1bafd9d4029ae7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMDEREFERENCE_SEGMENT_HEADER.PagefileExtensionListHead", pagefile_extension_list_head, 0x200, 0x80, true, 0xdeb95c8b3d610f89)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMDEREFERENCE_SEGMENT_HEADER.ListHead", list_head, 0x0, 0x0, false, 0x13ec05ca40111e2d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif