#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SRIOV_VF_CONFIG_STATE.Header", header, 0x0, 0x20, true, 0x7c29e98fb505126b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_SRIOV_VF_CONFIG_STATE.VFId", vf_id, 0x20, 0x10, true, 0x9ecaed29c17815cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SRIOV_VF_CONFIG_STATE.BlockId", block_id, 0x40, 0x20, true, 0xa825d68ba4771265)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SRIOV_VF_CONFIG_STATE.Length", length, 0x60, 0x20, true, 0x765a45bb73980304)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif