#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_save_merged_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_SAVE_MERGED_KEY_INFORMATION]
    // => Windows 11
    //
    struct reg_save_merged_key_information_t
    {                                       
        // Windows 11                
        //                         
        _m00 void* object;                    //{ +0x0000    } | .Object
        _m01 void* file_handle;               //{ +0x0008    } | .FileHandle
        _m02 void* high_key_object;           //{ +0x0010    } | .HighKeyObject
        _m03 void* low_key_object;            //{ +0x0018    } | .LowKeyObject
        _m04 void* call_context;              //{ +0x0020    } | .CallContext
        _m05 void* object_context;            //{ +0x0028    } | .ObjectContext
                                            
        SDK_MAGIC_PROPERTIES( "_REG_SAVE_MERGED_KEY_INFORMATION.$", 0x0, false, 0x38e03fcabe6d37d9 );                
        SDK_FIXED_SIZE( reg_save_merged_key_information_t, 0x38 );                
    };                                      
};
#include "magic/reg_save_merged_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_save_merged_key_information_t, 0x38 );
