#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;    }
namespace tag { struct variant_t; }

#include "magic/i_record_info_vtbl_t.start.hpp"
namespace win
{
    struct i_type_info_t;
    struct i_record_info_t;

    // [struct IRecordInfoVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_record_info_vtbl_t                       
    {                                                 
        using query_interface_t =    sdk::function<sdk::hresult(struct win::i_record_info_t*, const struct nt::guid_t&, void**)>*;                   
        using add_ref_t =            sdk::function<uint32_t(struct win::i_record_info_t*)>*;                   
        using release_t =            sdk::function<uint32_t(struct win::i_record_info_t*)>*;                   
        using record_init_t =        sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*;                   
        using record_clear_t =       sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*;                   
        using record_copy_t =        sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, void*)>*;                   
        using get_guid_t =           sdk::function<sdk::hresult(struct win::i_record_info_t*, struct nt::guid_t*)>*;                   
        using get_name_t =           sdk::function<sdk::hresult(struct win::i_record_info_t*, wchar_t**)>*;                   
        using get_size_t =           sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t*)>*;                   
        using get_type_info_t =      sdk::function<sdk::hresult(struct win::i_record_info_t*, struct win::i_type_info_t**)>*;                   
        using get_field_t =          sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, const wchar_t*, struct tag::variant_t*)>*;                   
        using get_field_no_copy_t =  sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, const wchar_t*, struct tag::variant_t*, void**)>*;                   
        using put_field_t =          sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t, void*, const wchar_t*, struct tag::variant_t*)>*;                   
        using put_field_no_copy_t =  sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t, void*, const wchar_t*, struct tag::variant_t*)>*;                   
        using get_field_names_t =    sdk::function<sdk::hresult(struct win::i_record_info_t*, uint32_t*, wchar_t**)>*;                   
        using is_matching_type_t =   sdk::function<int32_t(struct win::i_record_info_t*, struct win::i_record_info_t*)>*;                   
        using record_create_t =      sdk::function<void*(struct win::i_record_info_t*)>*;                   
        using record_create_copy_t = sdk::function<sdk::hresult(struct win::i_record_info_t*, void*, void**)>*;                   
        using record_destroy_t =     sdk::function<sdk::hresult(struct win::i_record_info_t*, void*)>*;                   
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 query_interface_t     query_interface;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t             add_ref;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t             release;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 record_init_t         record_init;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RecordInit
        _m04 record_clear_t        record_clear;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RecordClear
        _m05 record_copy_t         record_copy;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RecordCopy
        _m06 get_guid_t            get_guid;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetGuid
        _m07 get_name_t            get_name;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GetName
        _m08 get_size_t            get_size;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetSize
        _m09 get_type_info_t       get_type_info;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .GetTypeInfo
        _m10 get_field_t           get_field;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .GetField
        _m11 get_field_no_copy_t   get_field_no_copy;   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .GetFieldNoCopy
        _m12 put_field_t           put_field;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PutField
        _m13 put_field_no_copy_t   put_field_no_copy;   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .PutFieldNoCopy
        _m14 get_field_names_t     get_field_names;     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .GetFieldNames
        _m15 is_matching_type_t    is_matching_type;    //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .IsMatchingType
        _m16 record_create_t       record_create;       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .RecordCreate
        _m17 record_create_copy_t  record_create_copy;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .RecordCreateCopy
        _m18 record_destroy_t      record_destroy;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .RecordDestroy
                                                      
        SDK_MAGIC_PROPERTIES( "IRecordInfoVtbl.$", 0x98, true, 0xcd1bac5589fc62e );                   
        SDK_FIXED_SIZE( i_record_info_vtbl_t, 0x98 );                   
    };                                                
};
#include "magic/i_record_info_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_record_info_vtbl_t, 0x98 );
