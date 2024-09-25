#pragma once
#include <sdkgen/support_library.hpp>
#include "continue_t.hpp"
#include "continue2_t.hpp"
#include "context_ex_t.hpp"
#include "fill_memory_t.hpp"
#include "get_context_t.hpp"
#include "set_context_t.hpp"
#include "breakpointex_t.hpp"
#include "query_memory_t.hpp"
#include "get_version64_t.hpp"
#include "read_memory64_t.hpp"
#include "search_memory_t.hpp"
#include "read_write_msr_t.hpp"
#include "write_memory64_t.hpp"
#include "read_write_io64_t.hpp"
#include "get_set_bus_data_t.hpp"
#include "switch_partition_t.hpp"
#include "restore_breakpoint_t.hpp"
#include "set_special_call64_t.hpp"
#include "write_breakpoint64_t.hpp"
#include "query_special_calls_t.hpp"
#include "write_custom_breakpoint_t.hpp"
#include "read_write_io_extended64_t.hpp"
#include "get_internal_breakpoint64_t.hpp"
#include "set_internal_breakpoint64_t.hpp"

#include "magic/manipulate_state64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_MANIPULATE_STATE64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manipulate_state64_t                                                  
    {                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                       
        _m000 uint32_t                                  api_number;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ApiNumber
        _m001 uint16_t                                  processor_level;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProcessorLevel
        _m002 uint16_t                                  processor;                 //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Processor
        _m003 int32_t                                   return_status;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReturnStatus
        _m004 struct dbgkd::read_memory64_t             read_memory;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadMemory
        _m005 struct dbgkd::write_memory64_t            write_memory;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteMemory
        _m006 struct dbgkd::get_context_t               get_context;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetContext
        _m007 struct dbgkd::set_context_t               set_context;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetContext
        _m008 struct dbgkd::write_breakpoint64_t        write_break_point;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteBreakPoint
        _m009 struct dbgkd::restore_breakpoint_t        restore_break_point;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RestoreBreakPoint
        _m010 struct dbgkd::continue_t                  _continue;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Continue
        _m011 struct dbgkd::continue2_t                 continue2;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Continue2
        _m012 struct dbgkd::read_write_io64_t           read_write_io;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadWriteIo
        _m013 struct dbgkd::read_write_io_extended64_t  read_write_io_extended;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadWriteIoExtended
        _m014 struct dbgkd::query_special_calls_t       query_special_calls;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QuerySpecialCalls
        _m015 struct dbgkd::set_special_call64_t        set_special_call;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetSpecialCall
        _m016 struct dbgkd::set_internal_breakpoint64_t set_internal_breakpoint;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetInternalBreakpoint
        _m017 struct dbgkd::get_internal_breakpoint64_t get_internal_breakpoint;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetInternalBreakpoint
        _m018 struct dbgkd::get_version64_t             get_version64;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetVersion64
        _m019 struct dbgkd::breakpointex_t              break_point_ex;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BreakPointEx
        _m020 struct dbgkd::read_write_msr_t            read_write_msr;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReadWriteMsr
        _m021 struct dbgkd::search_memory_t             search_memory;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SearchMemory
        _m022 struct dbgkd::get_set_bus_data_t          get_set_bus_data;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetSetBusData
        _m023 struct dbgkd::fill_memory_t               fill_memory;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FillMemory
        _m024 struct dbgkd::query_memory_t              query_memory;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .QueryMemory
        _m025 struct dbgkd::switch_partition_t          switch_partition;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SwitchPartition
        _m026 struct dbgkd::context_ex_t                get_context_ex;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GetContextEx
        _m027 struct dbgkd::context_ex_t                set_context_ex;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SetContextEx
        _m028 struct dbgkd::write_custom_breakpoint_t   write_custom_break_point;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WriteCustomBreakPoint
                                                                                 
        SDK_MAGIC_PROPERTIES( "_DBGKD_MANIPULATE_STATE64.$", 0x38, true, 0xf0016451e669bfb );                         
        SDK_FIXED_SIZE( manipulate_state64_t, 0x38 );                            
    };                                                                           
};
#include "magic/manipulate_state64_t.end.hpp"
SDK_VERIFY( struct dbgkd::manipulate_state64_t, 0x38 );
