#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perthread_curdir_t.start.hpp"
namespace rtl
{
    struct drive_letter_curdir_t;

    // [struct _RTL_PERTHREAD_CURDIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perthread_curdir_t                                       
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                          
        _m00 struct rtl::drive_letter_curdir_t* current_directories;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentDirectories
        _m01 nt::unicode_view*                  image_name;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageName
        _m02 void*                              environment;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Environment
                                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_PERTHREAD_CURDIR.$", 0x18, true, 0x59691582f071cf0e );                    
        SDK_FIXED_SIZE( perthread_curdir_t, 0x18 );                    
    };                                                              
};
#include "magic/perthread_curdir_t.end.hpp"
SDK_VERIFY( struct rtl::perthread_curdir_t, 0x18 );
