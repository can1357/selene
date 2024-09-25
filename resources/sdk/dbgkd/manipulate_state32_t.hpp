#pragma once
#include <sdkgen/support_library.hpp>
#include "continue_t.hpp"
#include "continue2_t.hpp"
#include "context_ex_t.hpp"
#include "get_context_t.hpp"
#include "set_context_t.hpp"
#include "breakpointex_t.hpp"
#include "get_version32_t.hpp"
#include "read_memory32_t.hpp"
#include "read_memory64_t.hpp"
#include "search_memory_t.hpp"
#include "read_write_msr_t.hpp"
#include "write_memory32_t.hpp"
#include "write_memory64_t.hpp"
#include "read_write_io32_t.hpp"
#include "restore_breakpoint_t.hpp"
#include "set_special_call32_t.hpp"
#include "write_breakpoint32_t.hpp"
#include "query_special_calls_t.hpp"
#include "read_write_io_extended32_t.hpp"
#include "get_internal_breakpoint32_t.hpp"
#include "set_internal_breakpoint32_t.hpp"

#include "magic/manipulate_state32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_MANIPULATE_STATE32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manipulate_state32_t                                                 
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                      
        _m000 uint32_t                                  api_number;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ApiNumber
        _m001 uint16_t                                  processor_level;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessorLevel
        _m002 uint16_t                                  processor;                //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Processor
        _m003 int32_t                                   return_status;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReturnStatus
        _m004 struct dbgkd::read_memory32_t             read_memory;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadMemory
        _m005 struct dbgkd::write_memory32_t            write_memory;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WriteMemory
        _m006 struct dbgkd::read_memory64_t             read_memory64;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadMemory64
        _m007 struct dbgkd::write_memory64_t            write_memory64;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WriteMemory64
        _m008 struct dbgkd::get_context_t               get_context;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GetContext
        _m009 struct dbgkd::set_context_t               set_context;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SetContext
        _m010 struct dbgkd::write_breakpoint32_t        write_break_point;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .WriteBreakPoint
        _m011 struct dbgkd::restore_breakpoint_t        restore_break_point;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RestoreBreakPoint
        _m012 struct dbgkd::continue_t                  _continue;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Continue
        _m013 struct dbgkd::continue2_t                 continue2;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Continue2
        _m014 struct dbgkd::read_write_io32_t           read_write_io;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadWriteIo
        _m015 struct dbgkd::read_write_io_extended32_t  read_write_io_extended;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadWriteIoExtended
        _m016 struct dbgkd::query_special_calls_t       query_special_calls;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .QuerySpecialCalls
        _m017 struct dbgkd::set_special_call32_t        set_special_call;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SetSpecialCall
        _m018 struct dbgkd::set_internal_breakpoint32_t set_internal_breakpoint;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SetInternalBreakpoint
        _m019 struct dbgkd::get_internal_breakpoint32_t get_internal_breakpoint;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GetInternalBreakpoint
        _m020 struct dbgkd::get_version32_t             get_version32;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GetVersion32
        _m021 struct dbgkd::breakpointex_t              break_point_ex;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .BreakPointEx
        _m022 struct dbgkd::read_write_msr_t            read_write_msr;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReadWriteMsr
        _m023 struct dbgkd::search_memory_t             search_memory;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SearchMemory
        _m024 struct dbgkd::context_ex_t                get_context_ex;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .GetContextEx
        _m025 struct dbgkd::context_ex_t                set_context_ex;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .SetContextEx
                                                                                
        SDK_MAGIC_PROPERTIES( "_DBGKD_MANIPULATE_STATE32.$", 0x34, true, 0xd31494d20207dcc9 );                        
        SDK_FIXED_SIZE( manipulate_state32_t, 0x34 );                           
    };                                                                          
};
#include "magic/manipulate_state32_t.end.hpp"
SDK_VERIFY( struct dbgkd::manipulate_state32_t, 0x34 );
