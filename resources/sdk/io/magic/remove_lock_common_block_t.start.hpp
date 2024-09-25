#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_REMOVE_LOCK_COMMON_BLOCK.Removed", removed, 0x0, 0x8, true, 0x7a5b5cb44c74457)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_IO_REMOVE_LOCK_COMMON_BLOCK.IoCount", io_count, 0x20, 0x20, true, 0x4a18bdc9e9e69dba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_IO_REMOVE_LOCK_COMMON_BLOCK.RemoveEvent", remove_event, 0x40, 0xc0, true, 0x8c5a78de6615add5)
#else
#define _m00
#define _m01
#define _m02
#endif