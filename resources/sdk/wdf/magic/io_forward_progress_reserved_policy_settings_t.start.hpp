#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_wdm_irp_for_forward_progress_t ), "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress", evt_io_wdm_irp_for_forward_progress, 0x0, 0x40, true, 0xaac950b8218012b1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_examine_policy_t), "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.Policy.ExaminePolicy", examine_policy, 0x0, 0x40, true, 0xaca8c4e0249b31fd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_policy_t), "_WDF_IO_FORWARD_PROGRESS_RESERVED_POLICY_SETTINGS.Policy", policy, 0x0, 0x40, true, 0x9cd143f0cc425b29)
#else
#define _m00
#define _m01
#define _m02
#endif