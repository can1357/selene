#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.Size", size, 0x0, 0x10, true, 0x723a4132a1c25acb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.Version", version, 0x10, 0x10, true, 0x8f8096a4e7b0d215)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.ProviderFlags", provider_flags, 0x20, 0x20, true, 0xfb2183b51fd93e1a)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.MailslotsSupported", mailslots_supported, 0x20, 0x1, true, 0x841f96a651bb3b5b, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.CscEnabled", csc_enabled, 0x21, 0x1, true, 0xcabd4cb9af28ee4b, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.DomainSvcAware", domain_svc_aware, 0x22, 0x1, true, 0x77c31d54a601ced, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.ContainersAware", containers_aware, 0x23, 0x1, true, 0x3bf160d1a9fa8cc5, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.HardeningCapabilities", hardening_capabilities, 0x40, 0x20, true, 0x30e9f96f678c939)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.SupportsMutualAuth", supports_mutual_auth, 0x40, 0x1, true, 0xde4563fbf8d3b3fe, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.SupportsIntegrity", supports_integrity, 0x41, 0x1, true, 0xbe6378a02fe4292c, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_FSRTL_UNC_PROVIDER_REGISTRATION.SupportsPrivacy", supports_privacy, 0x42, 0x1, true, 0x1557d5142a151094, 1, uint32_t)
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