#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "syntax_type_t.hpp"
#include "ndr_proc_info_t.hpp"
#include "ndr_alloca_context_t.hpp"
#include "syntax_dispatch_table_t.hpp"

#include "magic/ndr_proc_context_t.start.hpp"
namespace win
{
    struct ndr_pipe_desc_t;
    struct midl_syntax_info_t;
    struct ndr64_proc_format_t;
    class ndr_minicompute_queue_t;
    class ndr_pointer_queue_element_t;
    class ndr_minicompute_queue_element_t;

    // [struct _NDR_PROC_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_proc_context_t                                                    
    {                                                                            
        using pfnrpcmemvalidate_t = sdk::function<uint32_t(void*, uint8_t*, uint32_t)>*;                       
                                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                       
        _m000 enum win::syntax_type_t                     current_syntax_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentSyntaxType
        _m001 struct win::ndr_proc_info_t                 ndr_info;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdrInfo
        _m002 struct win::ndr64_proc_format_t*            ndr64_header;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Ndr64Header
        _m003 const uint8_t*                              p_proc_format;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pProcFormat
        _m004 uint32_t                                    number_params;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberParams
        _m005 void*                                       params;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Params
        _m006 uint8_t*                                    startof_stack;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .StartofStack
        _m007 uint8_t                                     handle_type;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HandleType
        _m008 uint8_t                                     corr_increment;          //{ +0x0039    +0x0039    +0x0039    +0x0039    } | .CorrIncrement
        _m009 void*                                       saved_generic_handle;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SavedGenericHandle
        _m010 const uint8_t*                              p_handle_format_save;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pHandleFormatSave
        _m011 const uint8_t*                              dce_type_format_string;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DceTypeFormatString
        _m012 uint1_t                                     is_async;                //{ +0x0058@0  +0x0058@0  +0x0058@0  +0x0058@0  } | .IsAsync
        _m013 uint1_t                                     is_object;               //{ +0x0058@1  +0x0058@1  +0x0058@1  +0x0058@1  } | .IsObject
        _m014 uint1_t                                     has_pipe;                //{ +0x0058@2  +0x0058@2  +0x0058@2  +0x0058@2  } | .HasPipe
        _m015 uint1_t                                     has_complex_return;      //{ +0x0058@3  +0x0058@3  +0x0058@3  +0x0058@3  } | .HasComplexReturn
        _m016 uint1_t                                     needs_resend;            //{ +0x0058@4  +0x0058@4  +0x0058@4  +0x0058@4  } | .NeedsResend
        _m017 uint1_t                                     use_locator;             //{ +0x0058@5  +0x0058@5  +0x0058@5  +0x0058@5  } | .UseLocator
        _m018 uint1_t                                     is_stubless;             //{ +0x0058@6  +0x0058@6  +0x0058@6  +0x0058@6  } | .IsStubless
        _m019 uint8_t                                     reservedleft;            //{ +0x0058@8  +0x0058@8  +0x0058@8  +0x0058@8  } | .Reservedleft
        _m020 uint32_t                                    float_double_mask;       //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .FloatDoubleMask
        _m021 uint32_t                                    resend_count;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ResendCount
        _m022 uint32_t                                    rpc_flags;               //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .RpcFlags
        _m023 uint32_t                                    exception_flag;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ExceptionFlag
        _m024 uint32_t                                    stack_size;              //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .StackSize
        _m025 struct win::midl_syntax_info_t*             p_syntax_info;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .pSyntaxInfo
        _m026 pfnrpcmemvalidate_t                         pfn_validate;            //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .pfnValidate
        _m027 void*                                       validate_cookie;         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ValidateCookie
        _m028 struct win::syntax_dispatch_table_t         syntax_dispatch;         //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .SyntaxDispatch
        _m029 struct win::ndr_pipe_desc_t*                p_pipe_desc;             //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .pPipeDesc
        _m030 class win::ndr_pointer_queue_element_t*     p_queue_free_list;       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .pQueueFreeList
        _m031 class win::ndr_minicompute_queue_t*         p_mini_compute_queue;    //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .pMiniComputeQueue
        _m032 class win::ndr_minicompute_queue_element_t* p_conf_queue_free_list;  //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .pConfQueueFreeList
        _m033 const uint8_t*                              p_format_supplement;     //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .pFormatSupplement
        _m034 struct nt::guid_t                           current_activity_id;     //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .CurrentActivityID
        _m035 struct win::ndr_alloca_context_t            allocate_context;        //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .AllocateContext
                                                                                 
        SDK_MAGIC_PROPERTIES( "_NDR_PROC_CONTEXT.$", 0x320, true, 0x4ba6f84cea1de04 );                       
        SDK_FIXED_SIZE( ndr_proc_context_t, 0x320 );                             
    };                                                                           
};
#include "magic/ndr_proc_context_t.end.hpp"
SDK_VERIFY( struct win::ndr_proc_context_t, 0x320 );
