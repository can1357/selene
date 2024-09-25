#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_SHARE_MEMORY_INFORMATION.SharedViewOffset", shared_view_offset, 0x0, 0x20, true, 0x2a875055ad8b80e8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_SHARE_MEMORY_INFORMATION.SharedViewSize", shared_view_size, 0x20, 0x20, true, 0x5b11cb609d8d0afc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_VIDEO_SHARE_MEMORY_INFORMATION.VirtualAddress", virtual_address, 0x40, 0x40, true, 0xb3545d09386ad792)
#else
#define _m00
#define _m01
#define _m02
#endif