#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OVERLAPPED_ENTRY.lpCompletionKey", lp_completion_key, 0x0, 0x40, true, 0x49a5ade89f64146a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::overlapped_t*), "_OVERLAPPED_ENTRY.lpOverlapped", lp_overlapped, 0x40, 0x40, true, 0x738ffb56b5e6ea03)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OVERLAPPED_ENTRY.Internal", internal, 0x80, 0x40, true, 0x8472f27e5853e9de)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OVERLAPPED_ENTRY.dwNumberOfBytesTransferred", dw_number_of_bytes_transferred, 0xc0, 0x20, true, 0x1e018858dae98392)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif