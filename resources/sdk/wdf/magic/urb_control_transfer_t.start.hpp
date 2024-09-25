#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_CONTROL_TRANSFER.Hdr", hdr, 0x0, 0xc0, true, 0xae38e16103991eea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_TRANSFER.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x681b20fca15c296f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_TRANSFER.TransferFlags", transfer_flags, 0x100, 0x20, true, 0x9b2f56ed8d1d43b0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_CONTROL_TRANSFER.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x94e6c53e545ba8a8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_CONTROL_TRANSFER.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x846c761eedcaa8f7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_CONTROL_TRANSFER.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x2dd27913f3b7291)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_CONTROL_TRANSFER.UrbLink", urb_link, 0x1c0, 0x40, true, 0xbaafd7b6675ca912)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_CONTROL_TRANSFER.hca", hca, 0x200, 0x0, true, 0xbfb76d145605975e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_URB_CONTROL_TRANSFER.SetupPacket", setup_packet, 0x400, 0x40, true, 0x3c17c9846c4f90ad)
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