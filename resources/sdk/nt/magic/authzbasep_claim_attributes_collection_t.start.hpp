#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.DeviceGroupsCount", device_groups_count, 0x0, 0x20, true, 0x720f59277c526307)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pDeviceGroups", p_device_groups, 0x40, 0x40, true, 0x994502b91bf0a092)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.RestrictedDeviceGroupsCount", restricted_device_groups_count, 0x80, 0x20, true, 0x2f5ce5d88cbae8ae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pRestrictedDeviceGroups", p_restricted_device_groups, 0xc0, 0x40, true, 0x11e1a362a71b931a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.DeviceGroupsHash", device_groups_hash, 0x100, 0x80, true, 0xb575cab86b152dcd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::sid_and_attributes_hash_t), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.RestrictedDeviceGroupsHash", restricted_device_groups_hash, 0x980, 0x80, true, 0xf56fd41d47769843)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_security_attributes_information_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pUserSecurityAttributes", p_user_security_attributes, 0x1200, 0x40, true, 0xbbefe5df040ded19)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_security_attributes_information_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pDeviceSecurityAttributes", p_device_security_attributes, 0x1240, 0x40, true, 0xb99be59e1bead88d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_security_attributes_information_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pRestrictedUserSecurityAttributes", p_restricted_user_security_attributes, 0x1280, 0x40, true, 0x7fcd7dace3fa7d7e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::authzbasep_security_attributes_information_t*), "_AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION.pRestrictedDeviceSecurityAttributes", p_restricted_device_security_attributes, 0x12c0, 0x40, true, 0xfe291e6eb6fbbf84)
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
#endif