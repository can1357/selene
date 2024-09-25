#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_MANIPULATE_STATE64.ApiNumber", api_number, 0x0, 0x20, true, 0x1270ec385bc9249b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_MANIPULATE_STATE64.ProcessorLevel", processor_level, 0x20, 0x10, true, 0xb3b45aade888a6f7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_MANIPULATE_STATE64.Processor", processor, 0x30, 0x10, true, 0x85fa012ecee8f592)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DBGKD_MANIPULATE_STATE64.ReturnStatus", return_status, 0x40, 0x20, true, 0xc40f4cee98d6a8bd)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_memory64_t), "_DBGKD_MANIPULATE_STATE64.ReadMemory", read_memory, 0x80, 0x80, true, 0x5d606642f6c363fd)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_memory64_t), "_DBGKD_MANIPULATE_STATE64.WriteMemory", write_memory, 0x80, 0x80, true, 0x9e155294f496a388)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_context_t), "_DBGKD_MANIPULATE_STATE64.GetContext", get_context, 0x80, 0x20, true, 0xc353bf15ae3fd300)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_context_t), "_DBGKD_MANIPULATE_STATE64.SetContext", set_context, 0x80, 0x20, true, 0x8a78faad1771b44)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_breakpoint64_t), "_DBGKD_MANIPULATE_STATE64.WriteBreakPoint", write_break_point, 0x80, 0x80, true, 0x2bdd24c3caf4b674)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::restore_breakpoint_t), "_DBGKD_MANIPULATE_STATE64.RestoreBreakPoint", restore_break_point, 0x80, 0x20, true, 0xa9166c2b4930ce12)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::continue_t), "_DBGKD_MANIPULATE_STATE64.Continue", _continue, 0x80, 0x20, true, 0xb3e8a973ba16599c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::continue2_t), "_DBGKD_MANIPULATE_STATE64.Continue2", continue2, 0x80, 0x0, true, 0x82771d9f18433ca5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_io64_t), "_DBGKD_MANIPULATE_STATE64.ReadWriteIo", read_write_io, 0x80, 0x80, true, 0x284204e21806edaf)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_io_extended64_t), "_DBGKD_MANIPULATE_STATE64.ReadWriteIoExtended", read_write_io_extended, 0x80, 0x0, true, 0x1beb5e6f87b063ba)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::query_special_calls_t), "_DBGKD_MANIPULATE_STATE64.QuerySpecialCalls", query_special_calls, 0x80, 0x20, true, 0x416818c6f0e93515)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_special_call64_t), "_DBGKD_MANIPULATE_STATE64.SetSpecialCall", set_special_call, 0x80, 0x40, true, 0xb6696636103438bc)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_internal_breakpoint64_t), "_DBGKD_MANIPULATE_STATE64.SetInternalBreakpoint", set_internal_breakpoint, 0x80, 0x80, true, 0x71d60c02e277055)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_internal_breakpoint64_t), "_DBGKD_MANIPULATE_STATE64.GetInternalBreakpoint", get_internal_breakpoint, 0x80, 0x0, true, 0x19a6be98badc6324)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_version64_t), "_DBGKD_MANIPULATE_STATE64.GetVersion64", get_version64, 0x80, 0x40, true, 0xcf01d1b181ca8792)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::breakpointex_t), "_DBGKD_MANIPULATE_STATE64.BreakPointEx", break_point_ex, 0x80, 0x40, true, 0x3eb613acd9faa895)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_msr_t), "_DBGKD_MANIPULATE_STATE64.ReadWriteMsr", read_write_msr, 0x80, 0x60, true, 0x42cf17573868a02f)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::search_memory_t), "_DBGKD_MANIPULATE_STATE64.SearchMemory", search_memory, 0x80, 0xc0, true, 0x892fd2903dc097eb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_set_bus_data_t), "_DBGKD_MANIPULATE_STATE64.GetSetBusData", get_set_bus_data, 0x80, 0xa0, true, 0xe13828620383ce66)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::fill_memory_t), "_DBGKD_MANIPULATE_STATE64.FillMemory", fill_memory, 0x80, 0x80, true, 0x968bb76260dc69f6)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::query_memory_t), "_DBGKD_MANIPULATE_STATE64.QueryMemory", query_memory, 0x80, 0xc0, true, 0x252aa14dd46724d5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::switch_partition_t), "_DBGKD_MANIPULATE_STATE64.SwitchPartition", switch_partition, 0x80, 0x20, true, 0xec167479064101b5)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::context_ex_t), "_DBGKD_MANIPULATE_STATE64.GetContextEx", get_context_ex, 0x80, 0x60, true, 0xbd408ba47678fb04)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::context_ex_t), "_DBGKD_MANIPULATE_STATE64.SetContextEx", set_context_ex, 0x80, 0x60, true, 0x86ed5f1ce360328e)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_custom_breakpoint_t), "_DBGKD_MANIPULATE_STATE64.WriteCustomBreakPoint", write_custom_break_point, 0x80, 0xc0, true, 0x474294cee115f3c1)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#endif