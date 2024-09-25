#pragma once
#include <sdkgen/support_library.hpp>
#include "minidump_io_callback_t.hpp"
#include "minidump_module_callback_t.hpp"
#include "minidump_thread_callback_t.hpp"
#include "minidump_vm_query_callback_t.hpp"
#include "minidump_thread_ex_callback_t.hpp"
#include "minidump_vm_pre_read_callback_t.hpp"
#include "minidump_vm_post_read_callback_t.hpp"
#include "minidump_include_module_callback_t.hpp"
#include "minidump_include_thread_callback_t.hpp"
#include "minidump_read_memory_failure_callback_t.hpp"

#include "magic/minidump_callback_input_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_CALLBACK_INPUT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_callback_input_t                                            
    {                                                                           
        using minidump_read_memory_failure_callback_t = struct win::minidump_read_memory_failure_callback_t;                    
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 uint32_t                                       process_id;           //{ +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 void*                                          process_handle;       //{ +0x0004    +0x0004    +0x0004    } | .ProcessHandle
        _m02 uint32_t                                       callback_type;        //{ +0x000c    +0x000c    +0x000c    } | .CallbackType
        _m03 sdk::hresult                                   status;               //{ +0x0010    +0x0010    +0x0010    } | .Status
        _m04 struct win::minidump_thread_callback_t         thread;               //{ +0x0010    +0x0010    +0x0010    } | .Thread
        _m05 struct win::minidump_thread_ex_callback_t      thread_ex;            //{ +0x0010    +0x0010    +0x0010    } | .ThreadEx
        _m06 struct win::minidump_module_callback_t         module;               //{ +0x0010    +0x0010    +0x0010    } | .Module
        _m07 struct win::minidump_include_thread_callback_t include_thread;       //{ +0x0010    +0x0010    +0x0010    } | .IncludeThread
        _m08 struct win::minidump_include_module_callback_t include_module;       //{ +0x0010    +0x0010    +0x0010    } | .IncludeModule
        _m09 struct win::minidump_io_callback_t             io;                   //{ +0x0010    +0x0010    +0x0010    } | .Io
        _m10 minidump_read_memory_failure_callback_t        read_memory_failure;  //{ +0x0010    +0x0010    +0x0010    } | .ReadMemoryFailure
        _m11 uint32_t                                       secondary_flags;      //{ +0x0010    +0x0010    +0x0010    } | .SecondaryFlags
        _m12 struct win::minidump_vm_query_callback_t       vm_query;             //{ +0x0010    +0x0010    +0x0010    } | .VmQuery
        _m13 struct win::minidump_vm_pre_read_callback_t    vm_pre_read;          //{ +0x0010    +0x0010    +0x0010    } | .VmPreRead
        _m14 struct win::minidump_vm_post_read_callback_t   vm_post_read;         //{ +0x0010    +0x0010    +0x0010    } | .VmPostRead
                                                                                
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_CALLBACK_INPUT.$", 0x520, true, 0x6863e5864b18a5f6 );                    
        SDK_FIXED_SIZE( minidump_callback_input_t, 0x520 );                     
    };                                                                          
};
#include "magic/minidump_callback_input_t.end.hpp"
SDK_VERIFY( struct win::minidump_callback_input_t, 0x520 );
