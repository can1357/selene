#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_BULK_OR_INTERRUPT_TRANSFER.Hdr", hdr, 0x0, 0xc0, true, 0x8bed836c3acfdbf9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_BULK_OR_INTERRUPT_TRANSFER.PipeHandle", pipe_handle, 0xc0, 0x40, true, 0x2d4dd0b88f0efa1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_BULK_OR_INTERRUPT_TRANSFER.TransferFlags", transfer_flags, 0x100, 0x20, true, 0x9c283748c01edfce)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_BULK_OR_INTERRUPT_TRANSFER.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x61b250da857b1176)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_BULK_OR_INTERRUPT_TRANSFER.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0xcf0785a14c4edb1d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_BULK_OR_INTERRUPT_TRANSFER.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0xc591adfb74a92392)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_BULK_OR_INTERRUPT_TRANSFER.UrbLink", urb_link, 0x1c0, 0x40, true, 0x906f5cd3beabb924)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_BULK_OR_INTERRUPT_TRANSFER.hca", hca, 0x200, 0x0, true, 0x13808b54d8472db2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif