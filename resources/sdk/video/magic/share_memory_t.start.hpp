#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_SHARE_MEMORY.ProcessHandle", process_handle, 0x0, 0x40, true, 0x4630a6ca1aa0a631)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_SHARE_MEMORY.ViewOffset", view_offset, 0x40, 0x20, true, 0x4663539f75937136)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_SHARE_MEMORY.ViewSize", view_size, 0x60, 0x20, true, 0x5a6a282d70264a35)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_SHARE_MEMORY.RequestedVirtualAddress", requested_virtual_address, 0x80, 0x40, true, 0x4e0022315981665f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif