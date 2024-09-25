#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;    }
namespace tag { struct statstg_t; }

#include "magic/i_storage_vtbl_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct i_stream_t;
    struct i_storage_t;
    struct i_enum_statstg_t;

    // [struct IStorageVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_storage_vtbl_t                         
    {                                               
        using query_interface_t =   sdk::function<sdk::hresult(struct win::i_storage_t*, const struct nt::guid_t*, void**)>*;                  
        using add_ref_t =           sdk::function<uint32_t(struct win::i_storage_t*)>*;                  
        using release_t =           sdk::function<uint32_t(struct win::i_storage_t*)>*;                  
        using create_stream_t =     sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, uint32_t, uint32_t, uint32_t, struct win::i_stream_t**)>*;                  
        using open_stream_t =       sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, void*, uint32_t, uint32_t, struct win::i_stream_t**)>*;                  
        using create_storage_t =    sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, uint32_t, uint32_t, uint32_t, struct win::i_storage_t**)>*;                  
        using open_storage_t =      sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, struct win::i_storage_t*, uint32_t, wchar_t**, uint32_t, struct win::i_storage_t**)>*;                  
        using copy_to_t =           sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, const struct nt::guid_t*, wchar_t**, struct win::i_storage_t*)>*;                  
        using move_element_to_t =   sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, struct win::i_storage_t*, const wchar_t*, uint32_t)>*;                  
        using commit_t =            sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t)>*;                  
        using revert_t =            sdk::function<sdk::hresult(struct win::i_storage_t*)>*;                  
        using enum_elements_t =     sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, void*, uint32_t, struct win::i_enum_statstg_t**)>*;                  
        using destroy_element_t =   sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*)>*;                  
        using rename_element_t =    sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, const wchar_t*)>*;                  
        using set_element_times_t = sdk::function<sdk::hresult(struct win::i_storage_t*, const wchar_t*, const struct win::filetime_t*, const struct win::filetime_t*, const struct win::filetime_t*)>*;                  
        using set_class_t =         sdk::function<sdk::hresult(struct win::i_storage_t*, const struct nt::guid_t*)>*;                  
        using set_state_bits_t =    sdk::function<sdk::hresult(struct win::i_storage_t*, uint32_t, uint32_t)>*;                  
        using stat_t =              sdk::function<sdk::hresult(struct win::i_storage_t*, struct tag::statstg_t*, uint32_t)>*;                  
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                          
        _m00 query_interface_t    query_interface;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t            add_ref;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t            release;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 create_stream_t      create_stream;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateStream
        _m04 open_stream_t        open_stream;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OpenStream
        _m05 create_storage_t     create_storage;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CreateStorage
        _m06 open_storage_t       open_storage;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OpenStorage
        _m07 copy_to_t            copy_to;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CopyTo
        _m08 move_element_to_t    move_element_to;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MoveElementTo
        _m09 commit_t             commit;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Commit
        _m10 revert_t             revert;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Revert
        _m11 enum_elements_t      enum_elements;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .EnumElements
        _m12 destroy_element_t    destroy_element;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DestroyElement
        _m13 rename_element_t     rename_element;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .RenameElement
        _m14 set_element_times_t  set_element_times;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SetElementTimes
        _m15 set_class_t          set_class;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .SetClass
        _m16 set_state_bits_t     set_state_bits;     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .SetStateBits
        _m17 stat_t               stat;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Stat
                                                    
        SDK_MAGIC_PROPERTIES( "IStorageVtbl.$", 0x90, true, 0xd7eb59c5ccafd39f );                  
        SDK_FIXED_SIZE( i_storage_vtbl_t, 0x90 );                  
    };                                              
};
#include "magic/i_storage_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_storage_vtbl_t, 0x90 );
