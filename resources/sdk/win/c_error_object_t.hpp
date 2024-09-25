#pragma once
#include <sdkgen/support_library.hpp>
#include "error_object_data_t.hpp"

#include "magic/c_error_object_t.start.hpp"
namespace win
{
    // [class CErrorObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_error_object_t                                   
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 int32_t                         ref_count;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._refCount
        _m01 struct win::error_object_data_t data;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._data
        _m02 wchar_t*                        psz_source;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pszSource
        _m03 wchar_t*                        psz_description;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pszDescription
        _m04 wchar_t*                        psz_help_file;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pszHelpFile
                                                             
        SDK_MAGIC_PROPERTIES( "CErrorObject.$", 0x50, true, 0x58cf9eea30aac5f5 );                
        SDK_FIXED_SIZE( c_error_object_t, 0x50 );                
    };                                                       
};
#include "magic/c_error_object_t.end.hpp"
SDK_VERIFY( class win::c_error_object_t, 0x50 );
