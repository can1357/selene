#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.Hdr", hdr, 0x0, 0xc0, true, 0x38ac4497c825cdbf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0xbe3662289193597)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.TransferFlags", transfer_flags, 0x100, 0x20, true, 0x97501e49a47b9d57)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.SecureTransferBufferGuid", secure_transfer_buffer_guid, 0x120, 0x80, true, 0x441718368b73aa1a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.SecureTransferBufferLength", secure_transfer_buffer_length, 0x1a0, 0x20, true, 0x317c7faa862e1b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.UrbLink", urb_link, 0x1c0, 0x40, true, 0xe4a3359e69ea4be5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_SECURE_BULK_OR_INTERRUPT_TRANSFER.hca", hca, 0x200, 0x0, true, 0xf4420176948d1013)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif