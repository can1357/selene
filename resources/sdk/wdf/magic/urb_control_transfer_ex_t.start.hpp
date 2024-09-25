#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_TRANSFER_EX.Hdr", hdr, 0x0, 0xc0, true, 0x69628d053f4b1ece)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_TRANSFER_EX.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x22ee5e2b1b015de1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_TRANSFER_EX.TransferFlags", transfer_flags, 0x100, 0x20, true, 0xa48a60636a645e3c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_TRANSFER_EX.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x84c231df4a3a2d23)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_TRANSFER_EX.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0xc369fc79e77ccd4c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_TRANSFER_EX.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x3637a9cec443c245)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_TRANSFER_EX.Timeout", timeout, 0x1c0, 0x20, true, 0xd5a2397c28a107d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_TRANSFER_EX.hca", hca, 0x200, 0x0, true, 0x55e56deb6cdd908c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_URB_CONTROL_TRANSFER_EX.SetupPacket", setup_packet, 0x400, 0x40, true, 0xc2004e44c7f398c1)
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