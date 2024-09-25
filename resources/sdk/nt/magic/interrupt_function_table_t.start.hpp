#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*), "_INTERRUPT_FUNCTION_TABLE.InitializeLocalUnit", initialize_local_unit, 0x0, 0x40, true, 0x99978538153d7cc3)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_INTERRUPT_FUNCTION_TABLE.InitializeIoUnit", initialize_io_unit, 0x40, 0x40, true, 0xb4d604dc7fc2ec9e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_INTERRUPT_FUNCTION_TABLE.SetPriority", set_priority, 0x80, 0x40, true, 0x44c77fa1fcfc366d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*)>*), "_INTERRUPT_FUNCTION_TABLE.GetLocalUnitError", get_local_unit_error, 0xc0, 0x40, true, 0xe2b4f1c43cb2e209)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_INTERRUPT_FUNCTION_TABLE.ClearLocalUnitError", clear_local_unit_error, 0x100, 0x40, true, 0x75044db4a73f70a3)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_target_t*)>*), "_INTERRUPT_FUNCTION_TABLE.GetLogicalId", get_logical_id, 0x140, 0x40, true, 0xbf0d57048583f6f2)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_target_t*)>*), "_INTERRUPT_FUNCTION_TABLE.SetLogicalId", set_logical_id, 0x180, 0x40, true, 0xf9288dc0a4acf222)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum nt::interrupt_result_t(void*, int32_t*, uint32_t*)>*), "_INTERRUPT_FUNCTION_TABLE.AcceptAndGetSource", accept_and_get_source, 0x1c0, 0x40, true, 0x7c705843f14893be)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_INTERRUPT_FUNCTION_TABLE.EndOfInterrupt", end_of_interrupt, 0x200, 0x40, true, 0x54551a762535ca3)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void()>*), "_INTERRUPT_FUNCTION_TABLE.FastEndOfInterrupt", fast_end_of_interrupt, 0x240, 0x40, true, 0xa9df5e9208d57263)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_line_t*, struct nt::interrupt_line_state_t*)>*), "_INTERRUPT_FUNCTION_TABLE.SetLineState", set_line_state, 0x280, 0x40, true, 0x9a41371edbb4549a)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_line_t*, struct nt::interrupt_target_t*, uint32_t, struct nt::interrupt_line_t*)>*), "_INTERRUPT_FUNCTION_TABLE.RequestInterrupt", request_interrupt, 0x2c0, 0x40, true, 0xd506a20b422470d8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*), "_INTERRUPT_FUNCTION_TABLE.StartProcessor", start_processor, 0x300, 0x40, true, 0x3869b0e7b5ec9e51)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_line_state_t*, uint64_t*, uint64_t*)>*), "_INTERRUPT_FUNCTION_TABLE.GenerateMessage", generate_message, 0x340, 0x40, true, 0xd1449e52ff88a60b)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*, struct nt::interrupt_target_t*, uint8_t)>*), "_INTERRUPT_FUNCTION_TABLE.ConvertId", convert_id, 0x380, 0x40, true, 0xa6f35f6aa77e962)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_INTERRUPT_FUNCTION_TABLE.SaveLocalInterrupts", save_local_interrupts, 0x3c0, 0x40, true, 0x47f33179ad661dc0)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, void*)>*), "_INTERRUPT_FUNCTION_TABLE.ReplayLocalInterrupts", replay_local_interrupts, 0x400, 0x40, true, 0x2117362ea29acb4f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_INTERRUPT_FUNCTION_TABLE.DeinitializeLocalUnit", deinitialize_local_unit, 0x440, 0x40, true, 0xa5d65edfbbac95d2)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_INTERRUPT_FUNCTION_TABLE.DeinitializeIoUnit", deinitialize_io_unit, 0x480, 0x40, true, 0xea15c3b9f85e1da9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<enum nt::interrupt_result_t(void*, int32_t*, uint32_t*, uint8_t*)>*), "_INTERRUPT_FUNCTION_TABLE.QueryAndGetSource", query_and_get_source, 0x4c0, 0x40, true, 0xd71d1e86f79e6efd)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_INTERRUPT_FUNCTION_TABLE.DeactivateInterrupt", deactivate_interrupt, 0x500, 0x40, true, 0xa05d9d7882d439b3)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t, uint32_t)>*), "_INTERRUPT_FUNCTION_TABLE.DirectedEndOfInterrupt", directed_end_of_interrupt, 0x540, 0x40, true, 0x8a6a449499c167ea)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t, uint32_t*, uint32_t*, enum nt::kinterrupt_mode_t*, enum nt::kinterrupt_mode_t*)>*), "_INTERRUPT_FUNCTION_TABLE.QueryLocalUnitInfo", query_local_unit_info, 0x580, 0x40, true, 0x4b2afe381ba9dd4b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, struct nt::interrupt_line_t*, uint8_t*, uint8_t*)>*), "_INTERRUPT_FUNCTION_TABLE.QueryPendingState", query_pending_state, 0x0, 0x0, false, 0x13b0fe8ad05f49fa)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_INTERRUPT_FUNCTION_TABLE.CaptureGlobalCrashdumpState", capture_global_crashdump_state, 0x0, 0x0, false, 0xf27b187a134226b3)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_INTERRUPT_FUNCTION_TABLE.CaptureProcessorCrashdumpState", capture_processor_crashdump_state, 0x0, 0x0, false, 0xc53c8d31717d55f8)
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