#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_AMD_MCA_IPID.InstanceId", instance_id, 0x0, 0x0, false, 0xc3bb00e500be5869, 32, uint64_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint12_t), "_AMD_MCA_IPID.HardwareId", hardware_id, 0x0, 0x0, false, 0x433a320e4afc1e41, 12, uint64_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_AMD_MCA_IPID.McaType", mca_type, 0x0, 0x0, false, 0xdd0a7e6a1c18a3c, 16, uint64_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AMD_MCA_IPID.AsUINT64", as_uint64, 0x0, 0x0, false, 0x86d6d8257340cf75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif