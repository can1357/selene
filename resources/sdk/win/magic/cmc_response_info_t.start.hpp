#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_RESPONSE_INFO.cTaggedAttribute", c_tagged_attribute, 0x0, 0x20, true, 0x7c2c9d6eaa4d6109)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_attribute_t*), "_CMC_RESPONSE_INFO.rgTaggedAttribute", rg_tagged_attribute, 0x40, 0x40, true, 0x46d67c5ddc03bb5b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_RESPONSE_INFO.cTaggedContentInfo", c_tagged_content_info, 0x80, 0x20, true, 0xb2384195f9afe79b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_content_info_t*), "_CMC_RESPONSE_INFO.rgTaggedContentInfo", rg_tagged_content_info, 0xc0, 0x40, true, 0x1fd7141fb4481328)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CMC_RESPONSE_INFO.cTaggedOtherMsg", c_tagged_other_msg, 0x100, 0x20, true, 0x31a415c022c1caa1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cmc_tagged_other_msg_t*), "_CMC_RESPONSE_INFO.rgTaggedOtherMsg", rg_tagged_other_msg, 0x140, 0x40, true, 0x8b1fbd9d19b63e6e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif