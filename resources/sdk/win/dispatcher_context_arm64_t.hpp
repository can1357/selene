#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_disposition_t.hpp"

namespace image { struct arm64_runtime_function_entry_t; }
namespace nt    { struct exception_record_t;             }

#include "magic/dispatcher_context_arm64_t.start.hpp"
namespace win
{
    struct arm64_nt_context_t;
    struct unwind_history_table_t;

    // [struct _DISPATCHER_CONTEXT_ARM64]
    // => Windows 11
    //
    struct dispatcher_context_arm64_t                                             
    {                                                                             
        using pexception_routine_t = sdk::function<enum nt::exception_disposition_t(struct nt::exception_record_t*, void*, nt::context*, void*)>*;                       
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m00 uint64_t                                      control_pc;              //{ +0x0000    } | .ControlPc
        _m01 uint64_t                                      image_base;              //{ +0x0008    } | .ImageBase
        _m02 struct image::arm64_runtime_function_entry_t* function_entry;          //{ +0x0010    } | .FunctionEntry
        _m03 uint64_t                                      establisher_frame;       //{ +0x0018    } | .EstablisherFrame
        _m04 uint64_t                                      target_pc;               //{ +0x0020    } | .TargetPc
        _m05 struct win::arm64_nt_context_t*               context_record;          //{ +0x0028    } | .ContextRecord
        _m06 pexception_routine_t                          language_handler;        //{ +0x0030    } | .LanguageHandler
        _m07 void*                                         handler_data;            //{ +0x0038    } | .HandlerData
        _m08 struct win::unwind_history_table_t*           history_table;           //{ +0x0040    } | .HistoryTable
        _m09 uint32_t                                      scope_index;             //{ +0x0048    } | .ScopeIndex
        _m10 uint8_t                                       control_pc_is_unwound;   //{ +0x004c    } | .ControlPcIsUnwound
        _m11 uint8_t*                                      non_volatile_registers;  //{ +0x0050    } | .NonVolatileRegisters
                                                                                  
        SDK_MAGIC_PROPERTIES( "_DISPATCHER_CONTEXT_ARM64.$", 0x0, false, 0x455893b3e6f5891 );                       
        SDK_FIXED_SIZE( dispatcher_context_arm64_t, 0x58 );                       
    };                                                                            
};
#include "magic/dispatcher_context_arm64_t.end.hpp"
SDK_VERIFY( struct win::dispatcher_context_arm64_t, 0x58 );
