#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_header_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.Hdr", hdr, 0x0, 0xc0, true, 0x736c195166238031)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.TransferBufferLength", transfer_buffer_length, 0x120, 0x20, true, 0x6499c264a1532a11)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.TransferBuffer", transfer_buffer, 0x140, 0x40, true, 0x939535a40b5f6bb7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.TransferBufferMDL", transfer_buffer_mdl, 0x180, 0x40, true, 0x4c28cf302012ed3f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_t*), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.UrbLink", urb_link, 0x1c0, 0x40, true, 0xbd47cd1a340e1a8b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::urb_hcd_area_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.hca", hca, 0x200, 0x0, true, 0xace4bcd3d732ab67)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.Recipient", recipient, 0x400, 0x5, true, 0x2a456698a7b8c1b6, 5, uint8_t)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.InterfaceNumber", interface_number, 0x410, 0x8, true, 0x45a6c66db7ea3258)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.MS_PageIndex", ms_page_index, 0x418, 0x8, true, 0x4e40fed674f62dba)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_URB_OS_FEATURE_DESCRIPTOR_REQUEST.MS_FeatureDescriptorIndex", ms_feature_descriptor_index, 0x420, 0x10, true, 0x6e07bef0be27eb57)
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
#endif