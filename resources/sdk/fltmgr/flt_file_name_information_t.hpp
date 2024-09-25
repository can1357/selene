#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_file_name_information_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_FILE_NAME_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_file_name_information_t        
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 uint16_t         size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t         names_parsed;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NamesParsed
        _m02 uint32_t         format;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Format
        _m03 nt::unicode_view name;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
        _m04 nt::unicode_view volume;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Volume
        _m05 nt::unicode_view share;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Share
        _m06 nt::unicode_view extension;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Extension
        _m07 nt::unicode_view stream;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Stream
        _m08 nt::unicode_view final_component;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FinalComponent
        _m09 nt::unicode_view parent_dir;       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ParentDir
                                              
        SDK_MAGIC_PROPERTIES( "_FLT_FILE_NAME_INFORMATION.$", 0x78, true, 0xc81f0f441fb6c8d );                
        SDK_FIXED_SIZE( flt_file_name_information_t, 0x78 );                
    };                                        
};
#include "magic/flt_file_name_information_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_file_name_information_t, 0x78 );
