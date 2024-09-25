#pragma once
#include <sdkgen/support_library.hpp>
#include "rip_info_t.hpp"
#include "load_dll_debug_info_t.hpp"
#include "exception_debug_info_t.hpp"
#include "unload_dll_debug_info_t.hpp"
#include "exit_thread_debug_info_t.hpp"
#include "exit_process_debug_info_t.hpp"
#include "create_thread_debug_info_t.hpp"
#include "output_debug_string_info_t.hpp"
#include "create_process_debug_info_t.hpp"

#include "magic/debug_event_t.start.hpp"
namespace win
{
    // [struct _DEBUG_EVENT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct debug_event_t                                                 
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                               
        _m00 uint32_t                                dw_debug_event_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dwDebugEventCode
        _m01 uint32_t                                dw_process_id;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dwProcessId
        _m02 uint32_t                                dw_thread_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dwThreadId
        _m03 struct win::exception_debug_info_t      exception;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Exception
        _m04 struct win::create_thread_debug_info_t  create_thread;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateThread
        _m05 struct win::create_process_debug_info_t create_process_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CreateProcessInfo
        _m06 struct win::exit_thread_debug_info_t    exit_thread;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExitThread
        _m07 struct win::exit_process_debug_info_t   exit_process;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExitProcess
        _m08 struct win::load_dll_debug_info_t       load_dll;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LoadDll
        _m09 struct win::unload_dll_debug_info_t     unload_dll;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .UnloadDll
        _m10 struct win::output_debug_string_info_t  debug_string;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DebugString
        _m11 struct win::rip_info_t                  rip_info;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .RipInfo
                                                                         
        SDK_NONVOL_PROPERTIES( "_DEBUG_EVENT.$", 0xb0, true, 0x8242cea3daa9a91f );                    
        SDK_FIXED_SIZE( debug_event_t, 0xb0 );                           
    };                                                                   
};
#include "magic/debug_event_t.end.hpp"
SDK_VERIFY( struct win::debug_event_t, 0xb0 );
