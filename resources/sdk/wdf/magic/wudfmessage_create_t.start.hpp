#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_header_t), "_WUDFMESSAGE_CREATE.Header", header, 0x0, 0x8, true, 0x7a636030566c990d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_io_header_t), "_WUDFMESSAGE_CREATE.IoHeader", io_header, 0x0, 0x80, true, 0xc7e1425ab231fb37)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_devnode_context_t*), "_WUDFMESSAGE_CREATE.DevnodeContext", devnode_context, 0x180, 0x40, true, 0xcfa0f8e6fee66df7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WUDFMESSAGE_CREATE.FileNameByteLength", file_name_byte_length, 0x1c0, 0x40, true, 0xd4eeef9e1bc6358)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_CREATE.Options", options, 0x200, 0x20, true, 0x3bc96346685fe90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WUDFMESSAGE_CREATE.FileAttributes", file_attributes, 0x220, 0x10, true, 0xd22b590398b41f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_WUDFMESSAGE_CREATE.ShareAccess", share_access, 0x230, 0x10, true, 0xfe96217cc83179e7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_CREATE.DesiredAccess", desired_access, 0x240, 0x20, true, 0x18b3aa4bfe1e862)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudf_create_context_t*), "_WUDFMESSAGE_CREATE.RelatedCreateContext", related_create_context, 0x280, 0x40, true, 0xccdcfe8f9fbbfbd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WUDFMESSAGE_CREATE.InitiatorProcessId", initiator_process_id, 0x2c0, 0x20, true, 0x55f067da70421ecf)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::rd_file_object_context_t*), "_WUDFMESSAGE_CREATE.RdFileObjectContext", rd_file_object_context, 0x300, 0x40, true, 0x412d58666c5c03ec)
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