#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.Version", version, 0x0, 0x20, true, 0x1f8c254f26426084)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.Size", size, 0x20, 0x20, true, 0x6e44b47d91cbe686)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.Flags", flags, 0x40, 0x20, true, 0xa5a2c29aec7fe34f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.TotalNumberOfTiers", total_number_of_tiers, 0x60, 0x20, true, 0xbb74d96c6f192ce8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.NumberOfTiersReturned", number_of_tiers_returned, 0x80, 0x20, true, 0x8e850e3248495b96)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::file_storage_tier_t, 1>), "_FSCTL_QUERY_STORAGE_CLASSES_OUTPUT.Tiers", tiers, 0xc0, 0x40, true, 0x983fe5e38c66d955)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif