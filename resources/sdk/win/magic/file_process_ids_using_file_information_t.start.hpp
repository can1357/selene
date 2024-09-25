#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_PROCESS_IDS_USING_FILE_INFORMATION.NumberOfProcessIdsInList", number_of_process_ids_in_list, 0x0, 0x20, true, 0x2650fe6898ff8e55)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_FILE_PROCESS_IDS_USING_FILE_INFORMATION.ProcessIdList", process_id_list, 0x40, 0x40, true, 0xf99c0a8b04440801)
#else
#define _m00
#define _m01
#endif