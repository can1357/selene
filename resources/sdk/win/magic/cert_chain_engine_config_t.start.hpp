#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.cbSize", cb_size, 0x0, 0x20, true, 0x39720a99f1fde53e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_ENGINE_CONFIG.hRestrictedRoot", h_restricted_root, 0x40, 0x40, true, 0x3c36abfc1bff91ad)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_ENGINE_CONFIG.hRestrictedTrust", h_restricted_trust, 0x80, 0x40, true, 0x51093952acdabcb2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_ENGINE_CONFIG.hRestrictedOther", h_restricted_other, 0xc0, 0x40, true, 0xe4f8a02a388a7388)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.cAdditionalStore", c_additional_store, 0x100, 0x20, true, 0x133789b42ca6290f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_CERT_CHAIN_ENGINE_CONFIG.rghAdditionalStore", rgh_additional_store, 0x140, 0x40, true, 0xc61586dca3a2257e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.dwFlags", dw_flags, 0x180, 0x20, true, 0xf2bc8c4dfe81039d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.dwUrlRetrievalTimeout", dw_url_retrieval_timeout, 0x1a0, 0x20, true, 0x27025070936a810f)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.MaximumCachedCertificates", maximum_cached_certificates, 0x1c0, 0x20, true, 0x2d9f3fb01b71b929)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.CycleDetectionModulus", cycle_detection_modulus, 0x1e0, 0x20, true, 0x2a37d2d12ba6a47d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_ENGINE_CONFIG.hExclusiveRoot", h_exclusive_root, 0x200, 0x40, true, 0x1450b50fb383f3e2)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CERT_CHAIN_ENGINE_CONFIG.hExclusiveTrustedPeople", h_exclusive_trusted_people, 0x240, 0x40, true, 0xc1d25139dad8ccb9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_CHAIN_ENGINE_CONFIG.dwExclusiveFlags", dw_exclusive_flags, 0x280, 0x20, true, 0x981c1b2a8ea9eb0d)
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
#define _m11
#define _m12
#endif