#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SECURE_ISOCH_TRANSFER.Hdr", hdr, 0x0, 0xc0, true, 0x2b6db009894f825f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SECURE_ISOCH_TRANSFER.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x6a97f163bf73f1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_ISOCH_TRANSFER.TransferFlags", transfer_flags, 0x100, 0x20, true, 0xe6c3fb53b98826f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_URB_SECURE_ISOCH_TRANSFER.SecureTransferBufferGuid", secure_transfer_buffer_guid, 0x120, 0x80, true, 0x678d013d8876b25c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_ISOCH_TRANSFER.SecureTransferBufferLength", secure_transfer_buffer_length, 0x1a0, 0x20, true, 0xed4fc389971d4954)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_SECURE_ISOCH_TRANSFER.UrbLink", urb_link, 0x1c0, 0x40, true, 0x34ca7253d9e960e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_SECURE_ISOCH_TRANSFER.hca", hca, 0x200, 0x0, true, 0xf05a4096065cdecf)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_ISOCH_TRANSFER.StartFrame", start_frame, 0x400, 0x20, true, 0x77161fb9eaecf2f2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_ISOCH_TRANSFER.NumberOfPackets", number_of_packets, 0x420, 0x20, true, 0x365771f70db13aa6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_ISOCH_TRANSFER.ErrorCount", error_count, 0x440, 0x20, true, 0x561cfb9eefdd01f8)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct wdf::usbd_iso_packet_descriptor_t, 1>), "_URB_SECURE_ISOCH_TRANSFER.IsoPacket", iso_packet, 0x460, 0x60, true, 0x6c1f3cc696e27230)
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
#endif