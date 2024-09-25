#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_DATA_INFO.cTaggedAttribute", c_tagged_attribute, 0x0, 0x20, true, 0x78c61df28ad229da)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_attribute_t*), "_CMC_DATA_INFO.rgTaggedAttribute", rg_tagged_attribute, 0x40, 0x40, true, 0x157c988b4935bca1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_DATA_INFO.cTaggedRequest", c_tagged_request, 0x80, 0x20, true, 0xd00e58041927dbd4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_request_t*), "_CMC_DATA_INFO.rgTaggedRequest", rg_tagged_request, 0xc0, 0x40, true, 0x3e60ea59e868e09a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_DATA_INFO.cTaggedContentInfo", c_tagged_content_info, 0x100, 0x20, true, 0x95414d901e0f64db)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_content_info_t*), "_CMC_DATA_INFO.rgTaggedContentInfo", rg_tagged_content_info, 0x140, 0x40, true, 0xcede504999cc74e1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_DATA_INFO.cTaggedOtherMsg", c_tagged_other_msg, 0x180, 0x20, true, 0x1f55929ad2001937)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_other_msg_t*), "_CMC_DATA_INFO.rgTaggedOtherMsg", rg_tagged_other_msg, 0x1c0, 0x40, true, 0x8d6c7f6829f62aaa)
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