#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumSDChangedSuccess", num_sd_changed_success, 0x0, 0x40, true, 0xaecf73f998e2a7e7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumSDChangedFail", num_sd_changed_fail, 0x40, 0x40, true, 0x1bb603f6dbed8f47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumSDUnused", num_sd_unused, 0x80, 0x40, true, 0xb98c7b209c40209e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumSDTotal", num_sd_total, 0xc0, 0x40, true, 0x59e1ac1e302da7ec)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumMftSDChangedSuccess", num_mft_sd_changed_success, 0x100, 0x40, true, 0xfe3a492cdd138539)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumMftSDChangedFail", num_mft_sd_changed_fail, 0x140, 0x40, true, 0xd25edcca8c20cf10)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SD_CHANGE_MACHINE_SID_OUTPUT.NumMftSDTotal", num_mft_sd_total, 0x180, 0x40, true, 0xfb6f072a934637cf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif