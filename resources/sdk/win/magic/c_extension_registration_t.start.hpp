#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistration._contractId", contract_id, 0x280, 0x40, true, 0x5129080091fbabfb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CExtensionRegistration._hostId", host_id, 0x340, 0x40, true, 0x1a399ed6164f75e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CExtensionRegistration._userContext", user_context, 0x380, 0x40, true, 0x7fa52ee1f2ecd9f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct win::extension_registration_entry_properties_t), "CExtensionRegistration._properties", properties, 0x500, 0x40, true, 0x70f02656565879d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistration._activatableClassId", activatable_class_id, 0x640, 0x40, true, 0x72e691b2e967abc4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CExtensionRegistration._dwOutOfProcActivationFlags", dw_out_of_proc_activation_flags, 0x740, 0x20, true, 0xbbd779c2841e83c5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistration._deployingPackageId", deploying_package_id, 0x2c0, 0x40, true, 0xbc368bf994694623)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistration._effectivePackageId", effective_package_id, 0x300, 0x40, true, 0x3cd4211b722eeb4d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "CExtensionRegistration._componentProcessId", component_process_id, 0x3c0, 0x80, true, 0xdb48e166f183996a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CExtensionRegistration._racActivationTokenId", rac_activation_token_id, 0x440, 0x40, true, 0x47a1ad1a41b9cd18)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CExtensionRegistration._consoleHandlesId", console_handles_id, 0x480, 0x40, true, 0x613405054c539791)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "CExtensionRegistration._aamActivationId", aam_activation_id, 0x780, 0x40, true, 0x213f7e53541c0f79)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const class win::opaque_string_t), "CExtensionRegistration._packageId", package_id, 0x0, 0x0, false, 0xed1b58f395d88fac)
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