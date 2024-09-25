#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_MANIPULATE_STATE32.ApiNumber", api_number, 0x0, 0x20, true, 0x4d3040e1a1d8988e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_MANIPULATE_STATE32.ProcessorLevel", processor_level, 0x20, 0x10, true, 0x492602ce845d84b8)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_MANIPULATE_STATE32.Processor", processor, 0x30, 0x10, true, 0x3ed5d062edb24dd2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_DBGKD_MANIPULATE_STATE32.ReturnStatus", return_status, 0x40, 0x20, true, 0x3a9bc5d73ed987b7)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_memory32_t), "_DBGKD_MANIPULATE_STATE32.ReadMemory", read_memory, 0x60, 0x60, true, 0xbbd360613454dbe9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_memory32_t), "_DBGKD_MANIPULATE_STATE32.WriteMemory", write_memory, 0x60, 0x60, true, 0xb7dc0c18c8c97cca)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_memory64_t), "_DBGKD_MANIPULATE_STATE32.ReadMemory64", read_memory64, 0x60, 0x80, true, 0x1252fc88d943755f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_memory64_t), "_DBGKD_MANIPULATE_STATE32.WriteMemory64", write_memory64, 0x60, 0x80, true, 0xa41023e24af74686)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_context_t), "_DBGKD_MANIPULATE_STATE32.GetContext", get_context, 0x60, 0x20, true, 0x316e36b47623ed67)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_context_t), "_DBGKD_MANIPULATE_STATE32.SetContext", set_context, 0x60, 0x20, true, 0x4600870cb12ccac7)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::write_breakpoint32_t), "_DBGKD_MANIPULATE_STATE32.WriteBreakPoint", write_break_point, 0x60, 0x40, true, 0xdb9d64ad76b8397b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::restore_breakpoint_t), "_DBGKD_MANIPULATE_STATE32.RestoreBreakPoint", restore_break_point, 0x60, 0x20, true, 0x6e90ad125c740122)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::continue_t), "_DBGKD_MANIPULATE_STATE32.Continue", _continue, 0x60, 0x20, true, 0xdefdc1c822156225)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::continue2_t), "_DBGKD_MANIPULATE_STATE32.Continue2", continue2, 0x60, 0x0, true, 0x21dabea80e8b8ce3)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_io32_t), "_DBGKD_MANIPULATE_STATE32.ReadWriteIo", read_write_io, 0x60, 0x60, true, 0x6e17208409b4922d)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_io_extended32_t), "_DBGKD_MANIPULATE_STATE32.ReadWriteIoExtended", read_write_io_extended, 0x60, 0xc0, true, 0x6ba0e222426afa35)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::query_special_calls_t), "_DBGKD_MANIPULATE_STATE32.QuerySpecialCalls", query_special_calls, 0x60, 0x20, true, 0x73e60211f3858dce)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_special_call32_t), "_DBGKD_MANIPULATE_STATE32.SetSpecialCall", set_special_call, 0x60, 0x20, true, 0xce1737409347cf4)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::set_internal_breakpoint32_t), "_DBGKD_MANIPULATE_STATE32.SetInternalBreakpoint", set_internal_breakpoint, 0x60, 0x40, true, 0xd58d8efb903161e1)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_internal_breakpoint32_t), "_DBGKD_MANIPULATE_STATE32.GetInternalBreakpoint", get_internal_breakpoint, 0x60, 0xe0, true, 0xf448e6690b9b33b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::get_version32_t), "_DBGKD_MANIPULATE_STATE32.GetVersion32", get_version32, 0x60, 0x40, true, 0xa362ce28e298e912)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::breakpointex_t), "_DBGKD_MANIPULATE_STATE32.BreakPointEx", break_point_ex, 0x60, 0x40, true, 0xab33e7507abe372)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::read_write_msr_t), "_DBGKD_MANIPULATE_STATE32.ReadWriteMsr", read_write_msr, 0x60, 0x60, true, 0xb7e7cfa343de586b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::search_memory_t), "_DBGKD_MANIPULATE_STATE32.SearchMemory", search_memory, 0x60, 0xc0, true, 0x13f36e972238f23a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::context_ex_t), "_DBGKD_MANIPULATE_STATE32.GetContextEx", get_context_ex, 0x60, 0x60, true, 0xcec1fdc1790663f1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct dbgkd::context_ex_t), "_DBGKD_MANIPULATE_STATE32.SetContextEx", set_context_ex, 0x60, 0x60, true, 0xa36d0676f31313d6)
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
#endif