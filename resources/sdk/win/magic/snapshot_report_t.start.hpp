#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hpss_t*), "SnapshotReport._snapshotHandle", snapshot_handle, 0x0, 0x40, true, 0xc95f34adf090ac5d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::stowed_exception_information_v2_flat_t*), "SnapshotReport._flatStowedException", flat_stowed_exception, 0x40, 0x40, true, 0x22fc82d88d193e99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SnapshotReport._numFlatStowedExceptions", num_flat_stowed_exceptions, 0x80, 0x20, true, 0xcc1c454feddd8376)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context*), "SnapshotReport._snapshotContext", snapshot_context, 0xc0, 0x40, true, 0x4cc9969a1e0ee4de)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SnapshotReport._snapshotThreadId", snapshot_thread_id, 0x100, 0x20, true, 0xdbf16f4fbb252835)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "SnapshotReport._snapshotReturnAddress", snapshot_return_address, 0x140, 0x40, true, 0xbe2a495afe82b029)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif