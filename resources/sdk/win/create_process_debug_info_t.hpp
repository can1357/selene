#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/create_process_debug_info_t.start.hpp"
namespace win
{
    // [struct _CREATE_PROCESS_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_process_debug_info_t                                 
    {                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                             
        _m00 void*                           h_file;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .hFile
        _m01 void*                           h_process;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .hProcess
        _m02 void*                           h_thread;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .hThread
        _m03 void*                           lp_base_of_image;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .lpBaseOfImage
        _m04 uint32_t                        dw_debug_info_file_offset;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .dwDebugInfoFileOffset
        _m05 uint32_t                        n_debug_info_size;          //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .nDebugInfoSize
        _m06 void*                           lp_thread_local_base;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .lpThreadLocalBase
        _m07 sdk::function<uint32_t(void*)>* lp_start_address;           //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .lpStartAddress
        _m08 void*                           lp_image_name;              //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .lpImageName
        _m09 uint16_t                        f_unicode;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .fUnicode
                                                                       
        SDK_NONVOL_PROPERTIES( "_CREATE_PROCESS_DEBUG_INFO.$", 0x48, true, 0xcaa63f6a59045f2e );                          
        SDK_FIXED_SIZE( create_process_debug_info_t, 0x48 );                          
    };                                                                 
};
#include "magic/create_process_debug_info_t.end.hpp"
SDK_VERIFY( struct win::create_process_debug_info_t, 0x48 );
