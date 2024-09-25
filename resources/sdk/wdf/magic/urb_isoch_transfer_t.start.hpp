#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_ISOCH_TRANSFER.Hdr", hdr, 0x0, 0xc0, true, 0x2d32ffdf7e984283)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_ISOCH_TRANSFER.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0xba585499b8b28441)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_ISOCH_TRANSFER.TransferFlags", transfer_flags, 0x100, 0x20, true, 0x7e3bd6794b0983f0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_ISOCH_TRANSFER.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0xdaa92c9c333ce4e1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_ISOCH_TRANSFER.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x6df955d52f26706e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_ISOCH_TRANSFER.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0xa66872a4bf8a149b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_ISOCH_TRANSFER.UrbLink", urb_link, 0x1c0, 0x40, true, 0x3c9289187db980bb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_ISOCH_TRANSFER.hca", hca, 0x200, 0x0, true, 0x83f74a76cf3eba06)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_ISOCH_TRANSFER.StartFrame", start_frame, 0x400, 0x20, true, 0xa6d8c51250b10d15)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_ISOCH_TRANSFER.NumberOfPackets", number_of_packets, 0x420, 0x20, true, 0xe9132977199cd592)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_ISOCH_TRANSFER.ErrorCount", error_count, 0x440, 0x20, true, 0xc150bac7ea555ae8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::usbd_iso_packet_descriptor_t, 1>), "_URB_ISOCH_TRANSFER.IsoPacket", iso_packet, 0x460, 0x60, true, 0x32ffcaeeaeb3b819)
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
#define _m09
#define _m10
#define _m11
#endif