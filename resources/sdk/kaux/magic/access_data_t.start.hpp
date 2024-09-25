#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::privilege_set_t*), "_AUX_ACCESS_DATA.PrivilegesUsed", privileges_used, 0x0, 0x40, true, 0xf2171e39ab3fc81a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::generic_mapping_t), "_AUX_ACCESS_DATA.GenericMapping", generic_mapping, 0x40, 0x80, true, 0x3ad0fe607c8e5025)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_ACCESS_DATA.AccessesToAudit", accesses_to_audit, 0xc0, 0x20, true, 0x26372d0ec80ec4a9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUX_ACCESS_DATA.MaximumAuditMask", maximum_audit_mask, 0xe0, 0x20, true, 0xb932a08d96357b3d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_AUX_ACCESS_DATA.TransactionId", transaction_id, 0x100, 0x80, true, 0xdb9555c489c3080e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_ACCESS_DATA.NewSecurityDescriptor", new_security_descriptor, 0x180, 0x40, true, 0x6e64e6c797a6fc04)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_ACCESS_DATA.ExistingSecurityDescriptor", existing_security_descriptor, 0x1c0, 0x40, true, 0x916fcbc80a7d1ea8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_ACCESS_DATA.ParentSecurityDescriptor", parent_security_descriptor, 0x200, 0x40, true, 0x35153e7c6731487a)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_AUX_ACCESS_DATA.DeRefSecurityDescriptor", de_ref_security_descriptor, 0x240, 0x40, true, 0xe0d1b11e12defe14)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_AUX_ACCESS_DATA.SDLock", sd_lock, 0x280, 0x40, true, 0xdeee45b0551cd28d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::access_reasons_t), "_AUX_ACCESS_DATA.AccessReasons", access_reasons, 0x2c0, 0x0, true, 0x77bf08542194a070)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_AUX_ACCESS_DATA.GenerateStagingEvents", generate_staging_events, 0x6c0, 0x8, true, 0x7815bd03446c768a)
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
#endif