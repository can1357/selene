#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sdbmsitransforminfo_t.start.hpp"
namespace tag
{
    // [struct tagSDBMSITRANSFORMINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbmsitransforminfo_t                
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                      
        _m00 const wchar_t* lpsz_transform_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpszTransformName
        _m01 uint32_t       tr_transform;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .trTransform
        _m02 uint32_t       tr_file;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .trFile
                                                
        SDK_MAGIC_PROPERTIES( "tagSDBMSITRANSFORMINFO.$", 0x10, true, 0x690e2238b02eac5d );                    
        SDK_FIXED_SIZE( sdbmsitransforminfo_t, 0x10 );                    
    };                                          
};
#include "magic/sdbmsitransforminfo_t.end.hpp"
SDK_VERIFY( struct tag::sdbmsitransforminfo_t, 0x10 );
