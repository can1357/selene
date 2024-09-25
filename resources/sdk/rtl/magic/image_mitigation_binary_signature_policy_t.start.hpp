#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_BINARY_SIGNATURE_POLICY.BlockNonMicrosoftSignedBinaries", block_non_microsoft_signed_binaries, 0x0, 0x40, true, 0xbe7c4d148489488)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union rtl::image_mitigation_policy_t), "_RTL_IMAGE_MITIGATION_BINARY_SIGNATURE_POLICY.EnforceSigningOnModuleDependencies", enforce_signing_on_module_dependencies, 0x40, 0x40, true, 0x1e32f3238e70b667)
#else
#define _m00
#define _m01
#endif