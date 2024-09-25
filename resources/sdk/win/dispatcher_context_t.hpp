#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_disposition_t.hpp"

namespace image { struct runtime_function_entry_t; }
namespace nt    { struct exception_record_t;       }

#include "magic/dispatcher_context_t.start.hpp"
namespace win
{
    struct unwind_history_table_t;

    // [struct _DISPATCHER_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispatcher_context_t                                        
    {                                                                  
        using pexception_routine_t = sdk::function<enum nt::exception_disposition_t(struct nt::exception_record_t*, void*, nt::context*, void*)>*;                  
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                             
        _m00 uint64_t                                control_pc;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlPc
        _m01 uint64_t                                image_base;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageBase
        _m02 struct image::runtime_function_entry_t* function_entry;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FunctionEntry
        _m03 uint64_t                                establisher_frame;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EstablisherFrame
        _m04 uint64_t                                target_ip;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetIp
        _m05 nt::context*                            context_record;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ContextRecord
        _m06 pexception_routine_t                    language_handler;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LanguageHandler
        _m07 void*                                   handler_data;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HandlerData
        _m08 struct win::unwind_history_table_t*     history_table;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HistoryTable
        _m09 uint32_t                                scope_index;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ScopeIndex
                                                                       
        SDK_MAGIC_PROPERTIES( "_DISPATCHER_CONTEXT.$", 0x50, true, 0x6d707b2b29e30ec );                  
        SDK_FIXED_SIZE( dispatcher_context_t, 0x50 );                  
    };                                                                 
};
#include "magic/dispatcher_context_t.end.hpp"
SDK_VERIFY( struct win::dispatcher_context_t, 0x50 );
