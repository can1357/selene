#pragma once
#include <sdkgen/support_library.hpp>
#include "hot_patch_image_info_t.hpp"

#include "magic/manage_hot_patch_query_single_patch_t.start.hpp"
namespace win
{
    // [struct _MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH]
    // => Windows 11
    //
    struct manage_hot_patch_query_single_patch_t                  
    {                                                             
        // Windows 11                                             
        //                                                        
        _m00 uint32_t                           version;            //{ +0x0000    } | .Version
        _m01 void*                              process_handle;     //{ +0x0008    } | .ProcessHandle
        _m02 struct win::hot_patch_image_info_t base_info;          //{ +0x0010    } | .BaseInfo
        _m03 uint32_t                           flags;              //{ +0x0018    } | .Flags
        _m04 nt::unicode_view                   patch_path_string;  //{ +0x0020    } | .PatchPathString
                                                                  
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_QUERY_SINGLE_PATCH.$", 0x0, false, 0xd43b3955d84095c1 );                  
        SDK_FIXED_SIZE( manage_hot_patch_query_single_patch_t, 0x30 );                  
    };                                                            
};
#include "magic/manage_hot_patch_query_single_patch_t.end.hpp"
SDK_VERIFY( struct win::manage_hot_patch_query_single_patch_t, 0x30 );
