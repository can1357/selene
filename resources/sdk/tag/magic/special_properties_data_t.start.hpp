#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwSessionId", dw_session_id, 0x0, 0x20, true, 0x752e52f412739bf1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSpecialPropertiesData.fRemoteThisSessionId", f_remote_this_session_id, 0x20, 0x20, true, 0xc5be6786379ccd05)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSpecialPropertiesData.fClientImpersonating", f_client_impersonating, 0x40, 0x20, true, 0xce4983e22a8d1d91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagSpecialPropertiesData.fPartitionIDPresent", f_partition_id_present, 0x60, 0x20, true, 0x26039516a414b006)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwDefaultAuthnLvl", dw_default_authn_lvl, 0x80, 0x20, true, 0x180f65f467ca2331)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagSpecialPropertiesData.guidPartition", guid_partition, 0xa0, 0x80, true, 0xe36b06c91ed22f3a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwPRTFlags", dw_prt_flags, 0x120, 0x20, true, 0x6554c1e76aa02f67)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwOrigClsctx", dw_orig_clsctx, 0x140, 0x20, true, 0x2cba483d036593c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwFlags", dw_flags, 0x160, 0x20, true, 0xf73cb6963d3d4f7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.dwPid", dw_pid, 0x180, 0x20, true, 0x62bb616eed0a6b13)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "tagSpecialPropertiesData.hwnd", hwnd, 0x1c0, 0x40, true, 0x92210e680043a71e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSpecialPropertiesData.ulServiceId", ul_service_id, 0x200, 0x20, true, 0x1c5006cf23e61093)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "tagSpecialPropertiesData.dwReserved", dw_reserved, 0x220, 0x80, true, 0x8bff8710192190ba)
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