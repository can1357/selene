#if !IN_PARSER
#define _m0(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$??1HwQueueStagingList@@QEAA@XZ$dxgmms2.sys", 0xb660, 0x0, true, 0x9dcfaced229c69ae)
#define _m1(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessHwQueue@HwQueueStagingList$dxgmms2.sys", 0x35a8c, 0x0, true, 0x1c3c598d6c024d8b)
#define _m2(...) _SDK_MAGIC_LINK(_SDK_ESCAPE(sdk::unknown_ptr), "$ProcessHwQueues@HwQueueStagingList$dxgmms2.sys", 0xb6b0, 0x0, true, 0xbecd3871b5dae307)
#else
#define _m0(...) __VA_ARGS__
#define _m1(...) __VA_ARGS__
#define _m2(...) __VA_ARGS__
#endif