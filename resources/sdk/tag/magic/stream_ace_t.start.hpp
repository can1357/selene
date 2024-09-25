#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTREAM_ACE.grfAccessPermissions", grf_access_permissions, 0x0, 0x20, true, 0x8e6db2f2235a3b4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::access_mode_t), "tagSTREAM_ACE.grfAccessMode", grf_access_mode, 0x20, 0x20, true, 0x8ae5c3dabc9fe54e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::trustee_type_t), "tagSTREAM_ACE.TrusteeType", trustee_type, 0x40, 0x20, true, 0x1d419434cdc835b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::trustee_form_t), "tagSTREAM_ACE.TrusteeForm", trustee_form, 0x60, 0x20, true, 0x5daa33f3d1b0b7fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagSTREAM_ACE.pTrusteeName", p_trustee_name, 0x80, 0x40, true, 0xa2abe13d9eee88f0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::stream_sid_t*), "tagSTREAM_ACE.pSID", p_sid, 0xc0, 0x40, true, 0xc6bd25af3f6998c0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif