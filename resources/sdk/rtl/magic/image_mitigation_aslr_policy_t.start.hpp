#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_ASLR_POLICY.ForceRelocateImages", force_relocate_images, 0x0, 0x40, true, 0xd46ef3117b02ecce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_ASLR_POLICY.BottomUpRandomization", bottom_up_randomization, 0x40, 0x40, true, 0x9a2ba1a2523df734)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_ASLR_POLICY.HighEntropyRandomization", high_entropy_randomization, 0x80, 0x40, true, 0xa97fa385a869c732)
#else
#define _m00
#define _m01
#define _m02
#endif