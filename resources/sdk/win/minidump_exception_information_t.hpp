#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct exception_pointers_t; }

#include "magic/minidump_exception_information_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_EXCEPTION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_exception_information_t                      
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 uint32_t                         thread_id;           //{ +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 struct nt::exception_pointers_t* exception_pointers;  //{ +0x0004    +0x0004    +0x0004    } | .ExceptionPointers
        _m02 int32_t                          client_pointers;     //{ +0x000c    +0x000c    +0x000c    } | .ClientPointers
                                                                 
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_EXCEPTION_INFORMATION.$", 0x10, true, 0x901a780317bc88f1 );                   
        SDK_FIXED_SIZE( minidump_exception_information_t, 0x10 );                   
    };                                                           
};
#include "magic/minidump_exception_information_t.end.hpp"
SDK_VERIFY( struct win::minidump_exception_information_t, 0x10 );
