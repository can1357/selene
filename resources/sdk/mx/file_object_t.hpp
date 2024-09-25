#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct file_object_t; }

#include "magic/file_object_t.start.hpp"
namespace mx
{
    // [class MxFileObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class file_object_t                              
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                           
        _m00 struct nt::file_object_t* m_file_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_FileObject
                                                     
        SDK_MAGIC_PROPERTIES( "MxFileObject.$", 0x8, true, 0xd250a2cf8bfd13b5 );              
        SDK_FIXED_SIZE( file_object_t, 0x8 );              
    };                                               
};
#include "magic/file_object_t.end.hpp"
SDK_VERIFY( class mx::file_object_t, 0x8 );
