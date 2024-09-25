#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE.OperationModeFlag", operation_mode_flag, 0x0, 0x0, false, 0xcf509d7e70e660b0, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE.OperationPrivilegeFlag", operation_privilege_flag, 0x0, 0x0, false, 0x6453454c77e7f20b, 1, uint32_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NVME_COMPLETION_DW0_MFND_OPERATION_FEATURE.AsUlong", as_ulong, 0x0, 0x0, false, 0x62fe10476f1c5faa)
#else
#define _m00
#define _m01
#define _m02
#endif