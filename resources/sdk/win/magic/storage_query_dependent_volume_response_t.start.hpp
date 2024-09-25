#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE.ResponseLevel", response_level, 0x0, 0x20, true, 0x331ef7e2c704157d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE.NumberEntries", number_entries, 0x20, 0x20, true, 0x2465cfa75b900cc9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::storage_query_dependent_volume_lev1_entry_t>), "_STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE.Lev1Depends", lev1_depends, 0x40, 0x0, true, 0x3e2ea9a5acce6ae2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::storage_query_dependent_volume_lev2_entry_t>), "_STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE.Lev2Depends", lev2_depends, 0x40, 0x0, true, 0x978d4d35356c45c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif