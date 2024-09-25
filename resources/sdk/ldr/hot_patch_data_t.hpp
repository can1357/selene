#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hot_patch_data_t.start.hpp"
namespace ldr
{
    // [struct _LDR_HOT_PATCH_DATA]
    // => Windows 11
    //
    struct hot_patch_data_t                                   
    {                                                         
        using patch_load_library_t =     sdk::function<int32_t(const wchar_t*, uint32_t*, const nt::unicode_view*, void**)>*;                       
        using patch_get_proc_address_t = sdk::function<int32_t(void*, const nt::ascii_view*, uint32_t, void**)>*;                       
                                                              
        // Windows 11                                         
        //                                                    
        _m00 uint32_t                  version;                 //{ +0x0000    } | .Version
        _m01 patch_load_library_t      patch_load_library;      //{ +0x0008    } | .PatchLoadLibrary
        _m02 patch_get_proc_address_t  patch_get_proc_address;  //{ +0x0010    } | .PatchGetProcAddress
                                                              
        SDK_MAGIC_PROPERTIES( "_LDR_HOT_PATCH_DATA.$", 0x0, false, 0x4fa7b250b44db4ee );                       
        SDK_FIXED_SIZE( hot_patch_data_t, 0x18 );                       
    };                                                        
};
#include "magic/hot_patch_data_t.end.hpp"
SDK_VERIFY( struct ldr::hot_patch_data_t, 0x18 );
