#pragma once
#include <sdkgen/support_library.hpp>
#include "create_thread_t.hpp"

#include "magic/create_process_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_CREATE_PROCESS]
    // => WDK 10 (NV)
    //
    struct create_process_t                                       
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      sub_system_key;          //{ +0x0000    } | .SubSystemKey
        _m01 void*                         file_handle;             //{ +0x0008    } | .FileHandle
        _m02 void*                         base_of_image;           //{ +0x0010    } | .BaseOfImage
        _m03 uint32_t                      debug_info_file_offset;  //{ +0x0018    } | .DebugInfoFileOffset
        _m04 uint32_t                      debug_info_size;         //{ +0x001c    } | .DebugInfoSize
        _m05 struct dbgkm::create_thread_t initial_thread;          //{ +0x0020    } | .InitialThread
                                                                  
        SDK_NONVOL_PROPERTIES( "_DBGKM_CREATE_PROCESS.$", 0x0, false, 0x651856db3c837386 );                       
        SDK_FIXED_SIZE( create_process_t, 0x30 );                       
    };                                                            
};
#include "magic/create_process_t.end.hpp"
SDK_VERIFY( struct dbgkm::create_process_t, 0x30 );
