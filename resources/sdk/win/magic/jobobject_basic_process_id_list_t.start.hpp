#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_PROCESS_ID_LIST.NumberOfAssignedProcesses", number_of_assigned_processes, 0x0, 0x20, true, 0x24945fb08a147a30)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_JOBOBJECT_BASIC_PROCESS_ID_LIST.NumberOfProcessIdsInList", number_of_process_ids_in_list, 0x20, 0x20, true, 0xa731b7c14cd631b7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_JOBOBJECT_BASIC_PROCESS_ID_LIST.ProcessIdList", process_id_list, 0x40, 0x40, true, 0x3f013ff75ea3dc08)
#else
#define _m00
#define _m01
#define _m02
#endif