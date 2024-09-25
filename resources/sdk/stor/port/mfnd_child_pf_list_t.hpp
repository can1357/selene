#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_child_pf_data_t.hpp"

#include "magic/mfnd_child_pf_list_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_LIST]
    // => Windows 11
    //
    struct mfnd_child_pf_list_t           
    {                                     
        using child_p_fs_t = sdk::array<struct stor::port::mfnd_child_pf_data_t, 1>;               
                                          
        // Windows 11                     
        //                                
        _m00 uint32_t      version;         //{ +0x0000    } | .Version
        _m01 uint32_t      size;            //{ +0x0004    } | .Size
        _m02 uint32_t      child_pf_count;  //{ +0x0008    } | .ChildPFCount
        _m03 child_p_fs_t  child_p_fs;      //{ +0x000c    } | .ChildPFs
                                          
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_LIST.$", 0x0, false, 0xaa14df6028d45c33 );               
        SDK_FIXED_SIZE( mfnd_child_pf_list_t, 0xa0 );               
    };                                    
};
#include "magic/mfnd_child_pf_list_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_list_t, 0xa0 );
