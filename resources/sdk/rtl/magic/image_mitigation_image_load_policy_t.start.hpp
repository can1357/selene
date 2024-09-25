#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_IMAGE_LOAD_POLICY.BlockRemoteImageLoads", block_remote_image_loads, 0x0, 0x40, true, 0xc91fe2d0db112f6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_IMAGE_LOAD_POLICY.BlockLowLabelImageLoads", block_low_label_image_loads, 0x40, 0x40, true, 0xbf98d6688e73d9a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_IMAGE_LOAD_POLICY.PreferSystem32", prefer_system32, 0x80, 0x40, true, 0x5a35977f07e59306)
#else
#define _m00
#define _m01
#define _m02
#endif