#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_AOAC_COMPONENT_REF_TIME.TotalRefTime", total_ref_time, 0x0, 0x0, false, 0x68c3afc416ead3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_AOAC_COMPONENT_REF_TIME.CurrentRefStartTime", current_ref_start_time, 0x0, 0x0, false, 0x9e65e642e50e4516)
#else
#define _m00
#define _m01
#endif