#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/vs_fixedfileinfo_t.hpp"

#include "magic/minidump_module_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_MODULE_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_module_callback_t                           
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                      
        _m00 wchar_t*                       full_path;            //{ +0x0000    +0x0000    +0x0000    } | .FullPath
        _m01 uint64_t                       base_of_image;        //{ +0x0008    +0x0008    +0x0008    } | .BaseOfImage
        _m02 uint32_t                       size_of_image;        //{ +0x0010    +0x0010    +0x0010    } | .SizeOfImage
        _m03 uint32_t                       check_sum;            //{ +0x0014    +0x0014    +0x0014    } | .CheckSum
        _m04 uint32_t                       time_date_stamp;      //{ +0x0018    +0x0018    +0x0018    } | .TimeDateStamp
        _m05 struct tag::vs_fixedfileinfo_t version_info;         //{ +0x001c    +0x001c    +0x001c    } | .VersionInfo
        _m06 void*                          cv_record;            //{ +0x0050    +0x0050    +0x0050    } | .CvRecord
        _m07 uint32_t                       size_of_cv_record;    //{ +0x0058    +0x0058    +0x0058    } | .SizeOfCvRecord
        _m08 void*                          misc_record;          //{ +0x005c    +0x005c    +0x005c    } | .MiscRecord
        _m09 uint32_t                       size_of_misc_record;  //{ +0x0064    +0x0064    +0x0064    } | .SizeOfMiscRecord
                                                                
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_MODULE_CALLBACK.$", 0x68, true, 0xae50d850d6310162 );                    
        SDK_FIXED_SIZE( minidump_module_callback_t, 0x68 );                    
    };                                                          
};
#include "magic/minidump_module_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_module_callback_t, 0x68 );
