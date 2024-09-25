#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint11_t), "_HEAP_SEGMENT_MGR_COMMIT_STATE.CommittedPageCount", committed_page_count, 0x0, 0xb, true, 0x59958887de420590, 11, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_HEAP_SEGMENT_MGR_COMMIT_STATE.LargePageOperationInProgress", large_page_operation_in_progress, 0xe, 0x1, true, 0x1b7c6dd3bbef5f8, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_HEAP_SEGMENT_MGR_COMMIT_STATE.LargePageCommit", large_page_commit, 0xf, 0x1, true, 0x719cbb75c48411f0, 1, uint16_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint16_t), "_HEAP_SEGMENT_MGR_COMMIT_STATE.EntireUShortV", entire_u_short_v, 0x0, 0x10, true, 0x3ba2cf7cea994ebd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_SEGMENT_MGR_COMMIT_STATE.EntireUShort", entire_u_short, 0x0, 0x10, true, 0xd5933cf546a720b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif