#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.Flags", flags, 0x0, 0x20, true, 0x6c4975019941b087)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.NoRemoteImages", no_remote_images, 0x0, 0x1, true, 0x4cd6c357abe18732, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.NoLowMandatoryLabelImages", no_low_mandatory_label_images, 0x1, 0x1, true, 0x614c68e93d8a5788, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.PreferSystem32Images", prefer_system32_images, 0x2, 0x1, true, 0x7c032257bdd5297e, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.AuditNoRemoteImages", audit_no_remote_images, 0x3, 0x1, true, 0x6cd0c202cd1382df, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PROCESS_MITIGATION_IMAGE_LOAD_POLICY.AuditNoLowMandatoryLabelImages", audit_no_low_mandatory_label_images, 0x4, 0x1, true, 0x87434ad5d2171c77, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif