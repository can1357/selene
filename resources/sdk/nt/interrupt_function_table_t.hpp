#pragma once
#include <sdkgen/support_library.hpp>
#include "kinterrupt_mode_t.hpp"
#include "interrupt_result_t.hpp"

#include "magic/interrupt_function_table_t.start.hpp"
namespace nt
{
    struct interrupt_line_t;
    struct interrupt_target_t;
    struct interrupt_line_state_t;

    // [struct _INTERRUPT_FUNCTION_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_function_table_t                                                           
    {                                                                                           
        using initialize_local_unit_t = sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t*)>*;                                  
        using get_logical_id_t =        sdk::function<int32_t(void*, struct nt::interrupt_target_t*)>*;                                  
        using set_logical_id_t =        sdk::function<int32_t(void*, struct nt::interrupt_target_t*)>*;                                  
        using accept_and_get_source_t = sdk::function<enum nt::interrupt_result_t(void*, int32_t*, uint32_t*)>*;                                  
        using set_line_state_t =        sdk::function<int32_t(void*, struct nt::interrupt_line_t*, struct nt::interrupt_line_state_t*)>*;                                  
        using request_interrupt_t =     sdk::function<int32_t(void*, struct nt::interrupt_line_t*, struct nt::interrupt_target_t*, uint32_t, struct nt::interrupt_line_t*)>*;                                  
        using start_processor_t =       sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*;                                  
        using generate_message_t =      sdk::function<int32_t(void*, struct nt::interrupt_line_state_t*, uint64_t*, uint64_t*)>*;                                  
        using convert_id_t =            sdk::function<int32_t(void*, uint32_t*, struct nt::interrupt_target_t*, uint8_t)>*;                                  
        using query_and_get_source_t =  sdk::function<enum nt::interrupt_result_t(void*, int32_t*, uint32_t*, uint8_t*)>*;                                  
        using query_local_unit_info_t = sdk::function<int32_t(void*, uint32_t, uint32_t*, uint32_t*, enum nt::kinterrupt_mode_t*, enum nt::kinterrupt_mode_t*)>*;                                  
        using query_pending_state_t =   sdk::function<int32_t(void*, struct nt::interrupt_line_t*, uint8_t*, uint8_t*)>*;                                  
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                      
        _m000 initialize_local_unit_t                         initialize_local_unit;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InitializeLocalUnit
        _m001 sdk::function<int32_t(void*)>*                  initialize_io_unit;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InitializeIoUnit
        _m002 sdk::function<void(void*, uint32_t)>*           set_priority;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetPriority
        _m003 sdk::function<uint32_t(void*)>*                 get_local_unit_error;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetLocalUnitError
        _m004 sdk::function<void(void*)>*                     clear_local_unit_error;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClearLocalUnitError
        _m005 get_logical_id_t                                get_logical_id;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetLogicalId
        _m006 set_logical_id_t                                set_logical_id;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetLogicalId
        _m007 accept_and_get_source_t                         accept_and_get_source;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AcceptAndGetSource
        _m008 sdk::function<void(void*)>*                     end_of_interrupt;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .EndOfInterrupt
        _m009 sdk::function<void()>*                          fast_end_of_interrupt;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .FastEndOfInterrupt
        _m010 set_line_state_t                                set_line_state;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .SetLineState
        _m011 request_interrupt_t                             request_interrupt;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .RequestInterrupt
        _m012 start_processor_t                               start_processor;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .StartProcessor
        _m013 generate_message_t                              generate_message;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .GenerateMessage
        _m014 convert_id_t                                    convert_id;                         //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ConvertId
        _m015 sdk::function<int32_t(void*, void*)>*           save_local_interrupts;              //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SaveLocalInterrupts
        _m016 sdk::function<int32_t(void*, void*)>*           replay_local_interrupts;            //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ReplayLocalInterrupts
        _m017 sdk::function<int32_t(void*)>*                  deinitialize_local_unit;            //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .DeinitializeLocalUnit
        _m018 sdk::function<int32_t(void*)>*                  deinitialize_io_unit;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .DeinitializeIoUnit
        _m019 query_and_get_source_t                          query_and_get_source;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .QueryAndGetSource
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                      
        _m020 sdk::function<void(void*, uint32_t)>*           deactivate_interrupt;               //{ +0x00a0    +0x00a0    +0x00a0    } | .DeactivateInterrupt
        _m021 sdk::function<void(void*, uint32_t, uint32_t)>* directed_end_of_interrupt;          //{ +0x00a8    +0x00a8    +0x00a8    } | .DirectedEndOfInterrupt
        _m022 query_local_unit_info_t                         query_local_unit_info;              //{ +0x00b0    +0x00b0    +0x00b0    } | .QueryLocalUnitInfo
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m023 query_pending_state_t                           query_pending_state;                //{ +0x00b8    } | .QueryPendingState
        _m024 sdk::function<void(void*)>*                     capture_global_crashdump_state;     //{ +0x00c0    } | .CaptureGlobalCrashdumpState
        _m025 sdk::function<void(void*, uint32_t)>*           capture_processor_crashdump_state;  //{ +0x00c8    } | .CaptureProcessorCrashdumpState
                                                                                                
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_FUNCTION_TABLE.$", 0xb8, true, 0x7eab2ae517cc490c );                                  
        SDK_DYNAMIC_SIZE( interrupt_function_table_t );                                         
    };                                                                                          
};
#include "magic/interrupt_function_table_t.end.hpp"
