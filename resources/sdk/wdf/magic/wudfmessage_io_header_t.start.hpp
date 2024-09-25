#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_IO_HEADER.Header", header, 0x0, 0x8, true, 0x191022336c9ba2a5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WUDFMESSAGE_IO_HEADER.Irp", irp, 0x40, 0x40, true, 0x3dbbb9e7262065c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WUDFMESSAGE_IO_HEADER.RequestId", request_id, 0x80, 0x40, true, 0x13f4919805f6dba0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_IO_HEADER.ProcessId", process_id, 0xc0, 0x20, true, 0xdd9a66d35d73da5c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WUDFMESSAGE_IO_HEADER.Is32bitProcess", is32bit_process, 0xe0, 0x8, true, 0xa0577e4cfb8ec21d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_WUDFMESSAGE_IO_HEADER.RequestorMode", requestor_mode, 0xe8, 0x8, true, 0xcb94f11c4d6f1f2d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WUDFMESSAGE_IO_HEADER.DirectMappedTransfer", direct_mapped_transfer, 0xf0, 0x8, true, 0x8c2456286e0e9eef)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WUDFMESSAGE_IO_HEADER.IsActivityIdSet", is_activity_id_set, 0xf8, 0x8, true, 0xd0ef748740bc76e7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_WUDFMESSAGE_IO_HEADER.ActivityId", activity_id, 0x100, 0x80, true, 0xe266e95e4be5bb67)
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